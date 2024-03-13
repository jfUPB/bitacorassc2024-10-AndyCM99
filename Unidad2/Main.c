#include <stdio.h>
#include <SDL.h>

#define TRUE 1
#define FALSE 0
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;


void showRenderDriversInfo(void) {
    int numRenderDrivers = SDL_GetNumRenderDrivers();
    printf("Número de drivers de renderizado disponibles: %d\n", numRenderDrivers);

    for (int i = 0; i < numRenderDrivers; i++) {
        SDL_RendererInfo info;
        if (SDL_GetRenderDriverInfo(i, &info) == 0) {
            printf("Driver %d: %s\n", i, info.name);
        }
    }
}

void showSelectedRederer(void) {
    // Asumiendo que tienes un SDL_Renderer* llamado renderer que ya fue creado

    SDL_RendererInfo rendererInfo;
    if (SDL_GetRendererInfo(renderer, &rendererInfo) == 0) {
        printf("Driver de renderizado seleccionado: %s\n", rendererInfo.name);
    }
    else {
        printf("Error al obtener la información del renderizador: %s\n", SDL_GetError());
    }

}

int init_window(void) {

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("Error SDL_Init\n");
        return FALSE;
    }
    showRenderDriversInfo();

    window = SDL_CreateWindow(
        "My first Window",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Error SDL_CreateWindow\n");
        return FALSE;
    }

    renderer = SDL_CreateRenderer(window, -1, 0);
    if (renderer == NULL) {
        printf("Error SDL_CreateRenderer\n");
        return FALSE;
    }

    showSelectedRederer();

    return TRUE;
}

int main(int argc, char* argv[]) {
    init_window();
    while (TRUE) {
    }
    return 0;
}
