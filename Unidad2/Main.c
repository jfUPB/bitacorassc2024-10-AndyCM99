#include <stdio.h>
#include <SDL.h>

#define TRUE 1
#define FALSE 0
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
int gameRunning = FALSE;

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

void process_input(void) {
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type) {
    case SDL_QUIT:
        gameRunning = FALSE;
        break;
    case SDL_KEYDOWN:
        if (event.key.keysym.sym == SDLK_ESCAPE) {
            gameRunning = FALSE;
        }
        break;
    }
}

void update(void) {


}

void DrawCircle(SDL_Renderer* renderer, int cx, int cy, int radius) {
    for (int y = -radius; y <= radius; y++) {
        for (int x = -radius; x <= radius; x++) {
            if (x * x + y * y <= radius * radius) {
                SDL_RenderDrawPoint(renderer, cx + x, cy + y);
            }
        }
    }
}
void render(void) {
    SDL_Rect rect;
    rect.x = 250; // Posición x del rectángulo
    rect.y = 150; // Posición y del rectángulo
    rect.w = 200; // Ancho del rectángulo
    rect.h = 100; // Alto del rectángulo

    // Limpia el "lienzo" en este frame (?)
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Color de fondo: negro
    SDL_RenderClear(renderer);

    // Dibuja el rectángulo, pero aún no lo muestra
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Color del rectángulo: rojo
    SDL_RenderFillRect(renderer, &rect);

    // Dibuja el círculo
   // SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255); // Amarillo
   // DrawCircle(renderer, 400, 360, 40); // Dibuja un círculo en (320, 240) con radio 40.

    SDL_RenderDrawPoint(renderer, WINDOW_WIDTH - 1, 0);
    SDL_RenderDrawPoint(renderer, WINDOW_WIDTH - 1, 2);

    // Actualiza el lienzo
    SDL_RenderPresent(renderer);
}

void setup(void) {
    gameRunning = init_window();
}

void clean() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

int main(int argc, char* argv[]) {
    setup();
    while (gameRunning) {
       
        process_input(); 
        update();        
        render();        
    }
    clean();
    return 0;
}
