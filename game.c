#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
  // Inicializa a SDL
  SDL_Init(SDL_INIT_VIDEO);

  // Cria uma janela
  SDL_Window* window = SDL_CreateWindow("Meu Jogo", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

  // Cria um renderer
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  // Loop principal
  while (1) {
    // Lida com eventos
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        break;
      }
    }

    // Atualiza o jogo
    // ...

    // Renderiza o jogo
    SDL_RenderClear(renderer);
    // ...
    SDL_RenderPresent(renderer);
  }

  // Limpa a SDL
  SDL_Quit();
  return 0;
}