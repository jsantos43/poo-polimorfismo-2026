
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

int main()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        cout << SDL_GetError() << endl;
        return 1;
    }

    SDL_Window* janela = SDL_CreateWindow(
        "Aprendendo SDL2",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800, 600,
        SDL_WINDOW_SHOWN
    );

    if (!janela)
    {
        cout << SDL_GetError() << endl;
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* renderer =
        SDL_CreateRenderer(janela, -1, 0);

    if (!renderer)
    {
        cout << SDL_GetError() << endl;
        SDL_DestroyWindow(janela);
        SDL_Quit();
        return 1;
    }

    SDL_Rect quadrado = {100, 100, 80, 80};

    bool executando = true;
    SDL_Event evento;

    while (executando)
    {
        while (SDL_PollEvent(&evento))
        {
            if (evento.type == SDL_QUIT)
                executando = false;

            if (evento.type == SDL_KEYDOWN)
            {
                switch (evento.key.keysym.sym)
                {
                    case SDLK_RIGHT:
                        quadrado.x += 10;
                        break;

                    case SDLK_LEFT:
                        quadrado.x -= 10;
                        break;

                    case SDLK_UP:
                        quadrado.y -= 10;
                        break;

                    case SDLK_DOWN:
                        quadrado.y += 10;
                        break;
                }
            }
        }

        // Fundo preto
        SDL_SetRenderDrawColor(
            renderer, 0, 0, 0, 255
        );
        SDL_RenderClear(renderer);

        // Quadrado vermelho
        SDL_SetRenderDrawColor(
            renderer, 255, 0, 0, 255
        );
        SDL_RenderFillRect(renderer, &quadrado);

        // Mostra o quadro
        SDL_RenderPresent(renderer);

        SDL_Delay(16);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(janela);
    SDL_Quit();

    return 0;
}
