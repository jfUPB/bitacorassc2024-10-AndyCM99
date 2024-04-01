#include <stdio.h>
#include <SDL.h>

#define TRUE 1
#define FALSE 0
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define FPS 30
#define FRAME_TARGET_TIME (1000/FPS)

SDL_Window* window = NULL;
SDL_Renderer *renderer = NULL;
int gameRunning = FALSE;

struct ball {
  float x;
  float y;
  float width;
  float height;
}ball;

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


int init_window(void){

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
  static int last_frame_time = 0;

//  while (!SDL_TICKS_PASSED(SDL_GetTicks(), last_frame_time + FRAME_TARGET_TIME));
  int time_to_wait = FRAME_TARGET_TIME - (SDL_GetTicks() - last_frame_time);
  if (time_to_wait > 0 && time_to_wait <= FRAME_TARGET_TIME) {
    SDL_Delay(time_to_wait);
  }

  float delta_time = (SDL_GetTicks() - last_frame_time) / 1000.0F;
  last_frame_time = SDL_GetTicks();

  ball.x += 20* delta_time;
  ball.y += 20* delta_time;

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

  // Limpia el "lienzo" en este frame (?)
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Color de fondo: negro
  SDL_RenderClear(renderer);

  // Dibuja el rectángulo, pero aún no lo muestra
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Color del rectángulo: rojo
  SDL_Rect ball_rect;
  ball_rect.x = (int)ball.x; // Posición x del rectángulo
  ball_rect.y = (int)ball.y; // Posición y del rectángulo
  ball_rect.w = (int)ball.width; // Ancho del rectángulo
  ball_rect.h = (int)ball.height; // Alto del rectángulo
  SDL_RenderFillRect(renderer, &ball_rect);

  // Actualiza el lienzo
  SDL_RenderPresent(renderer);
}

void setup(void) {
  gameRunning = init_window();
  ball.x = 20;
  ball.y = 20;
  ball.width = 15;
  ball.height = 15;
}

void clean() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}

int main(int argc, char* argv[]) {
  setup();
  while (gameRunning) {
    // El concepto de gameloop para correr una aplicación
    // interactiva
    process_input(); // Leo las entradas
    update();        // calculo las físicas
    render();        // actualizo las salidas
  }
  clean();
  return 0;
}
