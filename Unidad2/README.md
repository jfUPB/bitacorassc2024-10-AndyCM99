# Bitácora de aprendizaje unidad 2

## SEMANA 6

### Sesión 1

#### micro-sesión 1:apertura. Reflexión inicial.

Comenzamos la unidad 2 
hasta la unidad 9 
recordar mantener el orden de las bitácoras 
subimos de nivel de abstracción, para comenzar un lenguaje en C  
1 que seamos capaces de generar aplicaciones interactivas 
 Utilizando patrones como game loop 

2 aplicar pruebas a las partes y a al total de un software 
Pensar como la aplicación puede ser probada para ser conscientes de su correcto funcionamiento y como funciona 

¿Qué objetivo tenemos? 
un juego de atari, pong 
pero girado 90 grados 
usar biblopteca sdl2
lengua en C 
debe guardar la ultima partida y mostrar un replay de la misma 

#### micro-sesión 2:
se recomnedo seguir etapa a etapa 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/cbc1258e-1977-448c-a2e7-06fa2127b38b)


que herramientas usaremos??? 

configuración de SDL2

se recomienda experimentar en chat gtp 

curso recomendado en udemy 
https://www.udemy.com/course/game-loop-c-sdl/

Create a Game Loop using C and SDL

en el curso podemos ver como se realizan un montón de operaciones, como printear pantalla entre otras cosas 
lo ideal seria pasar paso por paso semana a semana elaborando el código del programa para cambiar de metodología y 
adentrarnos a la forma de trabajar actual

podemos comenzar resolviendo las preguntas guía


#### micro-sesión 3:
comenzamos con la configuracion de sdl, primero consultare de que se trata sdl 

continuo viendo el curso de udemy el cual dura 2 horas , introduciondo a lo que es game loop 
#### micro-sesión 4:cierre. Reflexión final.

llegar temprano a la próxima clase 
no puedo decir que se cumplió la meta de la sesión pues consistía en ver el video de Udemy el cual
terminare de ver antes de proseguir con la sesion.


### Sesión 2

#### micro-sesión 1:apertura. Reflexión inicial.
Comenzando con dsl, mirando lo que necesitamos 
-. Visual estudio 
- instalar extensiones de visual estudio 
   -Desktop development with C++ 
   -Game developer for unity and unreal 

#### micro-sesión 2:
continuamos trbajando en visual studio 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/85b72d4e-6caa-4a3e-bc1a-e182cd21f354)

pedimos que se pinteara hello world pero no declaramos pintf por lo que aún no printea nada 

recordar declarar todo al inicio del código 

nos familiarizamos con el la consola de visual studio y su interfaz como tal  


#### micro-sesión 3:

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/21667428-1b0e-4b20-99cd-fec6715aed74) 

comprovamos qeu todo funciona 

nos vmaos a sdl releases que esta en el sitio 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/be776756-ac79-417b-bb27-6bb6f4b679b7)

vamosa usar la version 2.30.0
esta 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/189c7cae-f5f5-484d-b8eb-63dd06405816)

luego la pusimos en el disco local c 

para poder usar la biblioteca 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/e2774bd3-40b9-4064-ab33-bbcf485079d5)

luego tenemos que incluir el codigo de la vibliotea, la carpeta lib 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/cba5b3cb-dd7c-4144-841d-dee16850752f)

y luego le digo cual de las bibliotecas suaremos, y le esribo en input cuales usare 

aqui 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/c725bfde-fc1f-4ec3-85b5-a47b6a998d7f)

luego de realizar lo anterior prodecemos a copiar y pegar el archivo SDL2.DLL
en donde se creo el proyecto 





#### micro-sesión 4:cierre. Reflexión final.

finalizamos  con la familiarizacion con el espacio de trabajo en visual estudio para comensar el trbajo con sdl2 

### Sesión 3

#### micro-sesión 1:apertura. Reflexión inicial.

El plan para la sesión de hoy es comenzar el curso recomendado por el profe para sdl2 

Primero comenzare agregando las librerías a un proyecto nuevo 
Luego comenzare con el video, el curso que es un video de 2 horas
 tratare de se lo mas ortopédico para una correcta asimilación, tratar de hacer paso por paso

mi idea es como básico, terminar la primera hora de video en esta sesión  

antes de comenzar con el video, primero mirare el sitio del curso  

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/099c71bc-98cb-4999-afc8-61b256a13194)

datos para conezar 

para esta unidad 2 comenzare trbajando de a poco en el proyecto pong aplicando los conseptos adquiridos vaya pasando cada etapa 

Etapa 1: configuración básica con SDL2

*Configurar un proyecto de C con SDL2 y cargar una ventana en blanco en pantalla.

*Mostrar las paletas y la pelota en posiciones iniciales estáticas.

*Implementar la lógica básica para mover las paletas utilizando el teclado.

luego de descargar sdl 2 me percate de intalar 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/0dee0123-7c54-467c-a60f-da2a8e7fad86)

Desktop development with C++






#### micro-sesión 2:
Retomando pude solucionar y crear correctamente un nuevo proyecto en C++ para comenzar, 
cree el archivo Main.c satisfactoriamente, para comenzar a instalar el SDL2 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/03d29e61-4891-49d3-bb15-cabd95b6cb41)

Por alguna razón sea un descuido de mi parte o algún otro, se me creaba el proyecto como un proyecto de C# pero ya quedo solucionado.

Finalmente, el proyecto está listo para comenzar, continuo viendo el tutorial y la guía de la pagina del curso 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/d613198b-08f0-4f30-98ef-11e7467c5889)

0 ERRORE 


#### micro-sesión 3:

Luego de leer las actividades 3 y 4 procederemos  a crear una ventana con nuestro código 

Utilice el código que se mostraba en el sitio del curso, 
```

#include <stdio.h>
#include <SDL.h>

#define TRUE 1
#define FALSE 0
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

SDL_Window* window = NULL;


int init_window(void){

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        printf("Error SDL_Init\n");
        return FALSE;
    }

    window = SDL_CreateWindow(
        "My first Window",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH,
        WINDOW_HEIGHT,
        SDL_WINDOW_BORDERLESS);
    if (window == NULL) {
        printf("Error SDL_CreateWindow\n");
        return FALSE;
    }
    return TRUE;
}


int main(int argc, char* argv[]) {
    init_window();
    while (TRUE) {
    }
    return 0;
}

```



#### micro-sesión 4:

Utilice el código que se mostraba en el sitio del curso, 

Si lo recorremos de arriba abajo podemos ver que en  

```
int main(int argc, char* argv[]) {
    init_window();
    while (TRUE) {
    }
    return 0;
}
```

le decimos a la funcion main que inicie la ventana que anteriormente definimos con unas características de 
de posición en pantalla y que tan ancha y alta, y además que el código se compila de una forma
que para que reconozca las características de la pantalla que queremos crear 
tiene que estar definida primero, primero tiene que existir por decirlo así la pantalla para poder iniciarla  

y asi queda creada la ventana, podemos decirq ue neustro programa ya crea algo por asi decirlo, aunque sea una pantalla en negro 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/23611738-79fa-4c00-ba20-c60b69da24a9)

pero esta en loop y nos permite cerrarla mas que con alt F4 

bien, ahora le vamosa pedir que esa ventana se nos muestre de algun color y para eso vamos a tener que reenderisar
ese color en la ventana que creamos, para eso vamos a tener que llamar una funcion de sdl_renderer 

pruimero debemos crear la variable global de renderer de sdl de esta manera justo en la cabeza del código de esta manera  

```
SDL_Window* window = NULL;
SDL_Renderer *renderer = NULL;

```

luego debemos definir que driver de render usara sdl, para eso le pedimos a sdl que nos diga cuales hay y cual usara 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/05ea2a43-5cc1-447c-be3e-41b589a0694a)

aquí pretendía crear el driver que vamos a usar pero evidentemente no llame la función

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/d68d621b-33cd-401f-8d94-f6996c315552)

y aqui como debería ir inicialmente  

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/66e0e9a2-ca96-43d2-95fc-98a5df688fe7)


Intente ejecutar el código pero me lanzó un error 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/6e3fd6c5-722d-41c8-91d7-aadbfec29adf)

ya que le dijimos que renderice, pero no le dijimos con que lo va hacer así que regresamos al código y pues 
primero le pediremos con una función que busque que drivers de render 
tienen mi sistema y lo llame para que nos sirva de driver para renderizar la ventana

de esta manera, tenemos que ponerlo justo debajo de la cabeza del código ya que como dijimos anteriormente el compilador
va de arriba abajo, tiene que estar existente para que lo pueda llamar 
no puedo pedirle que lo cree si aún no ha llamado la herramienta


![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/4942f555-02d2-492b-b8e1-a41f7d463331) 


justo arriba de la función que crea la ventana, pero debajo de donde creamos nuestra variable global




#### micro-sesión 5:cierre. Reflexión final.

no pude solucionar el error de la última imagen, dicho error no me permite ejecutar el programa 
de esto estoy hablando


![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/f5ebc6fc-1c3d-4a36-9f66-4545ce1e2d5c)

pero como se evidencio pudimos por un momento crear una ventana que fue un gran progreso. 


## SEMANA 7

### Sesión 1

#### micro-sesión 1:apertura. Reflexión inicial.
comenzamos trbajando con el codigo que comnezamos las semana pasada, 
continuamos con el trabajo, }

el profe explicara unas cosas y luego continuaremos con 
una explicacion de dudas sobre el tema 


#### micro-sesión 2:

Comenzamos haciendo pruebas con el depurador 

Miramos como utilizar los controles y correr el código, línea de código por línea de código 

Justo en la barra de acción del depurador  


vimos como almacenar temporales y su dirreccion en bariables para manipular los datos 

utilizamos la funcion 
´´´
Myclass miclass1 = new Myclass()
Myclass miclass1 = new Myclass()

´´´ 

para poder saber la direccion del objeto en concreto, se hace referencia a punteros 

#### micro-sesión 3:

el profesor me explico a set el proyecto con las bibliotecas 
tenia dudas, no recordbaa como agregar la biblioteca
#### micro-sesión 4:cierre. Reflexión final.


quedo pendiente una explicación para la próxima clase   

### Sesión 2

#### micro-sesión 1:apertura. Reflexión inicial.

comenzamos pensando que vamos a mirar como se definen las funciones en el lenguaje en c
el profe nos explica que es importante pensar en cómo se declaran las funciones por que el lenguaje tiene reglas 
asiq ue se nos invito a tener eso en cuenta 

nos habla de las bariables globales como game running en el codigo quee estmoas analizando 

#### micro-sesión 2:

continuamos realizando pruebas con chat gtp y aprendiendo como podemos hablar
para generar una aproximación o una buena respuesta para nuestra duda 

continuando, buscando el error que no me deja ejecutar el programa, pues resulta que yo estaba cometiendo este error  


![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/950dc18b-8daf-40f4-bae2-c13dff114bab) 


así quedo el Código 

pero antes estaba de esta manera  


![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/99132e0f-151a-4c8c-a69b-074e0279686a)


pues claro que no me iba funcionar pues estaba pidiendo que me mostrara una información que no le había pedido.
que seleccionara un driver, y pues por lógica en ningún momento me iba poder ejecutar.

```
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
```
así quedo nuestro Código hasta este momento 

actualmente completamos la fase uno de configurar sdl2 


podemos continuar con el curso y mirar todo de game loop



#### micro-sesión 3:

ya que se puede decir que tenemos un espacio de trabajo creado

por lo que subirnos el Código a la git para que podamos manipularlo bajo control de versión

pudimos subir a git la solución, ahora continuaremos con la parte del curso que se enfoca en el game loop, 

primero entenderemos de que se trata el game loop para continuar 
el que básicamente se traduce a una forma de construir el Código de medida que captura todos los eventos que ocurren cuando se ejecuta el Código

así una vez completados todas las funciones y reinicia el Código para que el juego siga funcionando, sean sus físicas su todo, 
para que se mantenga en funcionamiento eternamente



#### micro-sesión 4:cierre. Reflexión final.

### Sesión 3

#### micro-sesión 1:apertura. Reflexión inicial.
continua el trabajo autónomo, en esta ocasión continuaremos lo realizado en la clase de la semana 8 sesión 2 ya que estoy atrasado 

realice unos ajustes en la bitácora ya que tenía unos errores, pero ya está bien

lo primero que realizare será un comit al main.c para luego continuar con las actividades de aprendizaje para el sdl2 

     


#### micro-sesión 2:


intentando seguir utilizándolo, cometí un error pues no había entendido que habíamos agregado cosas a la función main y a que la funcion main 
es la que lleva definido el imput, pues en otras palabras teníamos dos funciones de main, pero una vez elimine la primera que creamos al crear la solución 
se solucionó y guarda correctamente los eventos 

y ahora vamos a pintar algo en nuestro lienzo y como dicen la lista de actividades, continuaremos por pintar un rectángulo que servirá como nuestro ¨personaje principal¨

en ves de hacer el comit preferi realizar un ajuste ya que olvide actalizar el codigo en clase y repeti lo hecho, 


y integre de una ves el codigo para generar un rectangulo en pantalla, funciona sin errores 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/cbffd888-caca-4c20-b0b0-25ca06bb7bcd)

y ahora si comit 
#### micro-sesión 3:

continuamos integrando un circulo, el que nos servira de pelota para juego

primero teniamos que definir que es un circulo apra que el pueda dibujarlo deacuerdo a nuestras necesidades 
eso lo conseguimos gracias a que conocemos la ecucacion de un circulo y que el codigo puede interpretar estas opreciones 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/b134fe13-b4ed-4b05-9de9-8dcbdb5af5b8)

según entiendo permite destinar dos unidades de memoria para renderizar permitiendo que sea más fluida la forma en la que se renderiza todo 

el double buffering es una técnica esencial en la programación gráfica para garantizar que las imágenes se actualicen suavemente y sin problemas 
en la pantalla, proporcionando una experiencia visual de alta calidad para el usuario.


#### micro-sesión 4:
Renderizado en un búfer de dibujo: En la función render(), primero se realizan todas las operaciones de dibujo,
como dibujar un rectángulo rojo, puntos y cualquier otra forma que desees renderizar. Estas operaciones de dibujo
se realizan en el búfer de dibujo, que es una región de memoria donde se almacenan los gráficos que se mostrarán
en la ventana.

Limpieza y presentación del búfer de dibujo: Después de que todas las operaciones de dibujo se hayan completado 
en el búfer de dibujo, se llama a SDL_RenderPresent(renderer);. Esta función presenta el búfer de dibujo en la 
ventana, lo que significa que el contenido del búfer de dibujo se muestra en la pantalla al usuario. Al presentar
el búfer de dibujo en la ventana, se produce el intercambio de búferes, lo que implica que el búfer de dibujo se
convierte en el búfer de visualización y viceversa.

El intercambio de búferes es lo que constituye el double buffering en este contexto. Mientras que una imagen se está 
renderizando en el búfer de dibujo, la imagen anterior se mantiene en el búfer de visualización, lo que evita el parpadeo 
y proporciona una experiencia de renderizado suave y sin problemas al usuario.

Entonces, aunque no hay una implementación directa del double buffering en tu código, SDL se encarga de manejar los búferes 
de forma transparente detrás de escena, permitiendo el renderizado suave y sin parpadeos en la ventana.

aun continuamos sin cambios, pero podemos intuir varios conceptos importantes, de cómo esta interactuando todo, 
desde que capturamos todo paso a paso y se genera un ciclo, 

tengo mis dudas con el concepto de cómo se regulan lo FPS, no entiendo a que hace referencia en el código en realidad,
entiendo que es un FPS y entiendo por qué se necesitan que sean constantes, pero no entiendo, como se supone que el Código piensa optimizar dichos 
FPS 

#### micro-sesión 5: cierre. Reflexión final.

considero que se cumplió una meta ya que en la próxima sesión tendremos ya por finalizado este espacio de aprendizaje con el SDL2

CIERRO CON UN COMIT EN EL CDODIGO 

## SEMANA 8

### Sesión 1

#### micro-sesión 1:apertura. Reflexión inicial.

se dio la indicación de continuar con el trabajo, mientras el libra dudas  

la meta de hoy es poder terminar la guía de sdl2  y poder continuando agregando cosas al código

#### micro-sesión 2:

continuamos con Actividad 12: pixels per seconds

comenzamos entendiendo a que se refiere con pixeles por segundos, y es que con la función
last_frame_time podemos calcular cuánto tiempo hay entre un frame y otro, y con SDL_GetTicks
generamos un delay que hace que se ralentice los fps para que sean constantes en el loop por loop 
para que se genere una imagen más fluida independientemente del sistema en el que se corra el juego 

de esta manera


```
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
```

así podemos generar un cálculo que prediga donde va estar la bola para poder generar un renderizado más rápido 
y de mejor calidad ya que será más fluido y así podemos hacer que nuestro juego funcione de una forma constante
 
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.

### Sesión 2

#### micro-sesión 1:apertura. Reflexión inicial.

se dio saludo, se indico que continuaramos con la solucion 


#### micro-sesión 2:

comenzamos entendiendo que es esto 

```
while (gameRunning) {
  process_input(); // Leo las entradas
  update();        // calculo las físicas
  render();        // actualizo las salidas
}
```

como dije en la sesión 2 de la semana pasada 
 el game loop registra los eventos, lee lo que pasa 
 luego calcula el resultado de lo que esa pasando 
 y me tira los resultados, es como si le dijéramos que nos registre todo que lo guarde todo
 y que lo calcule y nos lo diga y nos lo guarde y lo haga en cada siclo del juego, a manera de loop

pero si solo si el juego ya está corriendo, es decir ya está ejecutado 

luego tenemos que integrar dicha función a nuestro código ya que hace
parte de los requerimientos para nuestra solución


```
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


void render(void) {

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
    // El concepto de gameloop para correr una aplicación
    // interactiva
    process_input(); // Leo las entradas
    update();        // calculo las físicas
    render();        // actualizo las salidas
  }
  clean();
  return 0;
}
```

primero configuramos el input, le decimos que queremos que guarde cada evento, 
 calcule resultados, y se reinicie y así en loop hasta que el juego deje de correr 

 pero para que todo esto funcione es importante decirle que gamerunnig = false
 
 
 Entonces, al establecer gameRunning en FALSE al principio, garantizamos que el bucle principal no se ejecute 
 hasta que todas las configuraciones iniciales, como la creación de la ventana, el renderizador, etc., 


#### micro-sesión 3:

 luego podemos persivir que el codigo queda de esa manera 
 justo debajo de la funcion main 

 ![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/7ccc2804-d3c6-45dc-805a-2138f6f1d8fd)

 el continua ejecutandose sin dificultades. 

pero no entiendo bien algo, se supone que él está guardando eventos y pues uno de ellos es la creación de 
la ventana, y me gustaría saber dónde o como puedo ver donde se guardan estos eventos o como quedan encapsulado
 le pedi a chat gtp que me lo explicara, me dijo esto : 

 En este código, la entrada del usuario se maneja principalmente en la función process_input(). Aquí se utiliza la
 función SDL_PollEvent() para comprobar si hay eventos en la cola de eventos y se almacenan en la variable event.

Dentro de process_input(), se utiliza una estructura switch para manejar diferentes tipos de eventos que pueden
ocurrir. Los eventos pueden ser de varios tipos, como eventos de teclado, eventos de ratón, eventos de ventana, etc.
En este código, solo se manejan dos tipos de eventos: SDL_QUIT y SDL_KEYDOWN.

Si el evento es del tipo SDL_QUIT, esto significa que el usuario ha intentado cerrar la ventana (por ejemplo, 
haciendo clic en el botón de cerrar de la ventana). En este caso, se establece gameRunning en FALSE, lo que 
eventualmente detendrá el bucle principal y terminará el programa.

Si el evento es del tipo SDL_KEYDOWN, esto significa que el usuario ha presionado una tecla del teclado. 
El código verifica si la tecla presionada es la tecla Escape (SDLK_ESCAPE). Si es así, también se establece
gameRunning en FALSE, lo que lleva a la misma consecuencia de terminar el bucle principal y finalizar el 
programa.

En cuanto a cómo se calculan estos eventos, la biblioteca SDL se encarga de ello internamente. SDL_PollEvent() 
es una función proporcionada por SDL que comprueba si hay eventos en la cola de eventos de SDL y, si hay alguno, lo 
extrae de la cola y lo almacena en la variable event para que puedas manejarlo.

Entonces, en cada iteración del bucle principal del juego, process_input() se llama para verificar si hay eventos
nuevos y manejarlos según corresponda. Esto permite que el programa responda a la entrada del usuario en tiempo real
mientras se ejecuta el bucle principal del juego.


#### micro-sesión 4:cierre. Reflexión final.

pudimos hacer que el codigo se integrara con la funcion process_input()

### Sesión 3



#### micro-sesión 1:apertura. Reflexión inicial.

continuar con el trabajo de pong, tratare de ser mas breve con el asunto 




#### micro-sesión 2:


La función update que has proporcionado implementa una forma de manejar el tiempo para calcular 
el movimiento de un objeto en función del tiempo transcurrido entre fotogramas.

Veamos cómo funciona:

Inicialización de last_frame_time:
La variable last_frame_time es estática, lo que significa que mantiene su valor entre llamadas a la 
función update. En esta función, last_frame_time almacena el tiempo en milisegundos en que se renderizó 
el último fotograma.

Cálculo del tiempo de espera:
Se calcula cuánto tiempo debe esperar el programa antes de actualizar el siguiente fotograma para mantener
un ritmo constante. Esto se hace restando el tiempo actual (SDL_GetTicks()) del tiempo en que se renderizó
el último fotograma (last_frame_time) del tiempo objetivo por fotograma (FRAME_TARGET_TIME). Si el tiempo
de espera calculado es mayor que cero y menor o igual que el tiempo objetivo por fotograma, entonces el
programa espera ese tiempo utilizando SDL_Delay.

Cálculo del delta de tiempo:
Se calcula el cambio en el tiempo (delta_time) desde el último fotograma hasta el fotograma actual. Este 
valor se utiliza para ajustar la velocidad de movimiento del objeto de acuerdo con el tiempo transcurrido, 
lo que hace que el movimiento del objeto sea independiente de la velocidad de fotogramas del sistema.

Actualización de la posición del objeto:
La posición del objeto (ball) se actualiza multiplicando la velocidad de movimiento del objeto por el delta
de tiempo calculado. Esto asegura que el movimiento del objeto sea suave y uniforme, independientemente de 
la velocidad de fotogramas del sistema.

En resumen, esta función update utiliza el tiempo transcurrido entre fotogramas para garantizar un 
movimiento suave y uniforme del objeto, incluso si la velocidad de fotogramas del sistema es variable. 
Esto es fundamental para garantizar una experiencia de juego consistente y predecible.


la pelota se mueve por fin y continuamos con el video 20 



 
#### micro-sesión 3:

se ha reorganizado y ampliado el código para incluir una estructura más organizada y modular que facilita
la expansión y mantenimiento del juego. Además, se han agregado funciones específicas para manejar la entrada
del usuario, detectar colisiones y actualizar el estado de los objetos del juego.

eso se logro agregando funciones tales como  

Estructura game_object:
Se agregó una estructura llamada game_object, que se utiliza para representar tanto la pelota (ball) como la paleta 
(paddle). Esta estructura almacena la posición (x, y), el ancho (width), el alto (height), y las velocidades 
en los ejes x e y (vel_x, vel_y) de los objetos del juego.

Variables globales redefinidas:
Se eliminaron algunas variables globales del código anterior, como gameRunning, y se reemplazaron con nuevas
variables específicas para el juego, como game_is_running.

Funciones adicionales para la gestión de la paleta:
Se agregaron funciones para manejar el movimiento de la paleta en respuesta a la entrada del teclado (process_input).

Inicialización de la ventana y el renderizador modificada:
La función initialize_window ahora crea una ventana sin título y sin bordes (SDL_WINDOW_BORDERLESS), lo que puede ser
útil para crear juegos en pantalla completa.

Funciones para la detección de colisiones y actualización de objetos:
Se agregaron funciones para detectar colisiones entre la pelota y la paleta, y entre la pelota y los bordes de la ventana.
También se agregó una función para actualizar las posiciones de la pelota y la paleta en función de su velocidad y el tiempo 
transcurrido (update).

Función para renderizar objetos del juego:
Se agregó una función render para dibujar la pelota y la paleta en la ventana de renderizado.
#### micro-sesión 4: 
ahora necesito instalar la biblioteca  SDL_ttf 
https://github.com/libsdl-org/SDL_ttf/releases




#### micro-sesión 5:cierre. Reflexión final.



## SEMANA 9

### Sesión 1

#### micro-sesión 1:apertura. Reflexión inicial.
#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.

### Sesión 2

#### micro-sesión 1:apertura. Reflexión inicial.
#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.

### Sesión 3

#### micro-sesión 1:apertura. Reflexión inicial.
#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:
#### micro-sesión 5:cierre. Reflexión final.

