# Bitácora de aprendizaje

## SEMANA 2

### Sesión 1

#### micro-sesión 1:apertura. Reflexión inicial.

se hablo durante la semana de solver satisfactoriamente las preguntas en la unidad 1 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/867e6b82-5ea0-4c59-90f3-ac328059da8c)

comenzamos lendo la intruccionn inicial que nos dan que es, el programa que tiene que hacerse en lenguaje ensamblador etc 


![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/1a2da258-be6f-45aa-802a-b5b6d6a07639)


se recomendo responderlas mirando los videos adjuntos o el texto gia en los links 
https://www.nand2tetris.org/course texto guia 
https://www.youtube.com/playlist?list=PLrDd_kMiAuNmSb-CKWQqq9oBFN_KNMTaI videos

opr lo prnto comenzare con las preguntas 

-1 Los computadores digitales modernos funcionan gracias a la teoría de la lógica booleana. observa el video 6, 
unidad 1.1. de este playlist https://www.youtube.com/playlist?list=PLrDd_kMiAuNmSb-CKWQqq9oBFN_KNMTaI
Selecciona una función booleana. Representa dicha operación de dos maneras diferentes. 
¿Pudiste observar en el video esas dos maneras?

en el video me encontre con una formula bastante interesante 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/3e44af90-e49e-42e6-9ffb-63558e849958)

en la que vemos como la misma de una manera diferente 
cuando es 0 y cuando es 1, a que me refiero 

pues si tenemos un NOT0 es la negacion de un 0 que es igual a 1 

cuando uno es la negacion del otro 



-2 Ahora observa el video 7. Inventa una tabla de verdad de tres entradas y una salida. ¿Cuál es la función booleana que la representa?
______________
|x	|y|	z|	R|

|0	|0|	0|	1|

|0	|0|	1|	0|

|0	|1|	0|	1|

|0	|1|	1|	0|

|1	|0|	0|	0|

|1	|0|	1|	1|

|1	|1| 0|	0|

|1	|1|	1|	1|

--------------

tenemos la tabla de tres entradas y una salida que es r  y su funcion seria mas o menos 

D= NOT(X) AND Z OR X AND NOT(Y) AND Z OR X AND Y AND NOT(Z= OR X AND Y AND Z 

pense ene sta inspirado por la imagen de la pregunta anterior 


#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.

se cumplió el objetivo que era comenzar a adelantar las preguntas  en la próxima sesión.
los temas contemplados siempre me parecieron muy interesante, como funcionan 
la lógica proposicional y como se interpretan estos valores en una toma de decisiones.

### Sesión 2

#### micro-sesión 1:apertura. Reflexión inicial.


Como mi comienzo de semestre estuvo marcado por un fuerte retraso de una semana tome la decisión de utilizar estos 
espacios para siempre estar tratando de estar al día, en la sesión actual continuaremos con resolver las preguntas  
desde donde me quede hasta llegar donde lo permita la sesión, cabe recalcar que estoy resolviendo las preguntas en 
orden.

termine de cambiarle el formato por completo a la unidad 1 para cumplir con el requerimiento de 
conservar un orden en la bitácora

se continua en la próxima micro-sesión con la pregunta numero 3.


#### micro-sesión 2:


-3 Observa el video 8. ¿Cómo sería el circuito lógico que representa la función booleana del punto anterior?

comeinzo viendo el video 8 Part 1 Unit 1.3 - Logic Gates

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/be57f1e0-509f-41c2-ae70-8a51f3e33441)

NOT(X), NOT(Y) y NOT(Z) están representados por puertas NOT individuales.
X AND Y AND Z están representados por una puerta AND.
Los resultados de las operaciones se combinan mediante múltiples puertas OR para obtener el valor final de D.

-4 Observa el video 14, unidad 2.1. ¿Cuántos números diferentes puede representar un computador de 8 bits?



#### micro-sesión 3:
pregunta 4 continuacion 

Un computador de 8 bits puede representar 2^8 = 256 números diferentes. Esto se debe a que
cada bit puede tener dos estados posibles (0 o 1), y al tener 8 bits, se pueden combinar de 
2×2×2×2×2×2×2×2=2^8 formas diferentes, lo que resulta en 256 combinaciones únicas. Estos números 
pueden ser valores enteros en el rango de 0 a 255.

-5 ¿Cuál es la representación binaria del número en 8 bits del número 128?

El número 128 en binario se representa como 
10000000
10000000 en 8 bits.

-6 Observa el video 15. ¿Qué es un overflow en una suma binaria? inventa un ejemplo.

En el contexto de las operaciones aritméticas binarias, un overflow ocurre cuando el resultado 
de una suma excede el rango de números que pueden ser representados por un número específico 
de bits. En otras palabras, un overflow ocurre cuando el resultado de la suma es demasiado 
grande para ser almacenado en el número de bits disponibles.

Por ejemplo, considera la suma binaria de dos números de 4 bits:

```
   1101   (13 en decimal)
+  0110   (6 en decimal)
  ------
  10011
```

El resultado de la suma es \(10011\), que es \(19\) en decimal. Sin embargo, estamos sumando números de 
4 bits, por lo que el resultado no cabe en los 4 bits disponibles. Por lo tanto, hay un overflow.

-7 Observa el video 16. ¿Cómo se representan números enteros negativos en un computador en complemento a dos? 
Construye una tabla que represente un conjunto de número enteros positivos y negativos usando 4 bits.



#### micro-sesión 4:

continua la pregunta -7

Para representar números enteros negativos en complemento a dos en un computador, primero necesitamos 
entender cómo funciona este sistema de representación. En complemento a dos, los números negativos se 
representan tomando el complemento a uno del valor absoluto del número en binario y luego sumando 1 al
resultado. Esto significa que el bit más significativo (el bit más a la izquierda) se utiliza como el 
bit de signo, donde 0 representa un número positivo y 1 representa un número negativo.

Construyamos una tabla que represente un conjunto de números enteros positivos y negativos utilizando 4 bits:

| Decimal | Binario (complemento a dos) |
|---------|-----------------------------|
| 0       | 0000                        |
| 1       | 0001                        |
| 2       | 0010                        |
| 3       | 0011                        |
| 4       | 0100                        |
| 5       | 0101                        |
| 6       | 0110                        |
| 7       | 0111                        |
| -8      | 1000                        |
| -7      | 1001                        |
| -6      | 1010                        |
| -5      | 1011                        |
| -4      | 1100                        |
| -3      | 1101                        |
| -2      | 1110                        |
| -1      | 1111                        |

En esta tabla:

- Los números positivos se representan de manera directa en binario.
- Para representar los números negativos, tomamos el complemento a uno del valor absoluto en
  binario del número y luego sumamos 1 al resultado. Por ejemplo, para representar -8, 
  tomamos el complemento a uno de 8 (que es 0111) y luego sumamos 1, lo que da como resultado 1000.

-8 Observa el video 17. ¿Qué es una unidad aritmética lógica? ¿Qué se puede hacer 
 si una función no está implementada en la ALU?

 Una Unidad Aritmética Lógica (ALU, por sus siglas en inglés) es un componente fundamental dentro 
 de un procesador que se encarga de realizar operaciones aritméticas (como suma, resta, multiplicación 
 y división) y operaciones lógicas (como AND, OR, NOT) en datos binarios. La ALU toma dos operandos y 
 un código de operación que especifica la operación que se debe realizar, y luego produce un 
 resultado basado en esa operación.

  si una función no está implementada en la ALU, es posible que se pueda abordar mediante software,
  hardware especializado o descomposición en operaciones más simples. La elección depende del contexto 
  específico y los requisitos del sistema.

  -9 ¿La ALU del video anterior puede multiplicar? ¿Cómo podrías resolver por software la multiplicación?
  
  

#### micro-sesión 5:cierre. Reflexión final.

Complete 5 preguntas en esta sesión considero que fue bastante productivo ya que hice seguimiento a la información 
que se brinda en los videos; Me sigue pareciendo muy tedioso la lógica de los numero binarios combinado con la 
capacidad de bits y su lógica para hacer operaciones entre ellos, al igual como si fuera una función 
en la ALU.  

también vi la lógica de las compuertas lógicas, y como este sistema 
de si o no se puede interpretar como una operación u función de la que se espera un resultado  

se continuara la proxima secion para completar la pregunta 9 y continuar con las pregutnas 

se realizaron ajustes y correcciones a la estructura de la bitácora. 



### Sesión 3

#### micro-sesión 1:apertura. Reflexión inicial.

se retoma la actividad de las preguntas.

comenzamos de nuevo con la pregunta numero 9, trataremos de avanzar lo que mas se pueda 

#### micro-sesión 2:


contiunua el punto 9 
puede que la ALU en contextos no tenga funciones, en el anterior video no recuerdo que pudiera realizar dicha 
función, se puede resolver con hardware o con software, o simplemente desglosando la operación en algo más simple, 
yo lo resolvería de la manera más obvia, mediante sumas, 2*4 seria 2+2+2+2

-10 Observa el video 20, unidad 3.1. ¿Cuál es la diferencia entre la lógica combinacional y la lógica secuencial?

 la principal diferencia entre la lógica combinacional y la lógica secuencial radica en cómo la salida de un circuito 
 digital se calcula en relación con el tiempo y el estado interno del circuito. La lógica combinacional depende únicamente 
 de las entradas presentes, mientras que la lógica secuencial también depende del estado interno del circuito, que puede
 cambiar con el tiempo.

#### micro-sesión 3:
Observa el video 21. ¿Por qué se combina lógica combinacional y secuencial para construir un computador?
Muestra un circuito que permita almacenar un bit en un computador  

vi el video pero aun no me quedo claroe ste tema por lo que no pude continuar 

#### micro-sesión 4:
continuo con la pregunta 11

comenzamos de nuevo con la pregunta numero 9, trataremos de avanzar lo que mas se pueda la 
lógica combinacional nos permite realizar diferente tipos de operaciones lógicas de manera 
instantánea pero la secuencial nos permite decidir en qué momento podemos ejecutar dichas 
operaciones y así controlar el estado interno del sistema 

un circuito que cumple con el requerimiento seria 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/627f1327-519c-423d-b985-6342b6000b5e)

aunque honestamente sigo teniendo mis dudas al respecto



#### micro-sesión 5:cierre. Reflexión final.

me parece que pudo ser más ágil la sesión, pero me parece 
bastante confuso el tema de como almacena un flip flop
información para poder realizar una operación e una manera como
mantener un dato en concreto  

lo ideal sería adelantar lo que más se pueda la próxima sesión fue complicado para mi 
esta parte del tema entiendo de que trata 
esto pero lógicamente me confunde como se
almacena un bit





## SEMANA 3
### Sesión 1

el dia de hoy comenzamos provando el juego Silicon Zeroes, muy interezante biendo como funcionan los operadores logicos de la maquina pc 
pudimos aprender sobre todos estos contadores logicos y su tiempos para ver como funcionan y como trasmiten la imformacion para poder tomar un u otra decision 
o simplemnte leer la imformacion de cierta manera. 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/3f324d6c-aa25-40ed-b37f-b5a7342a8bc0) 

vimos como con este juego podíamos a manera de puzle realizar circuitos con compuertas lógicas y así superar niveles 
mostraba como realmente funcionan en de una manera demostrativa como se realizaban las operaciones

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/89169223-1d09-451f-9e6b-a8f41885bedd) 


cada nivel aumenta la complejidad del circuito requerido



### Sesión 2

#### micro-sesión 1:apertura. Reflexión inicial.

Apertura: se hablo sobre como seria la Sesión 
-Apertura de la semana 
-Review sobre las bitácoras 
-Ajuste de cuentas con la tabla de puntos 
-Programar el ensamblador 
se pidio organizar la Bitácora de aprendizaje
de esta manera 


#### micro-sesión 2:
-Programar el ensamblador 
comenzamos con una pequeña prueva de un numero bonarrio para interpretar que numero y como 
leiamos en el cpuemulator con la ayuda de la calculadora en modo programador de windows. 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/e392c70f-f424-4914-8c52-22b29552cbdc)

Luego de ejecutar la instrucción paso esto 

![image](https://github.com/jfUPB/bitacorassc2024-10-AndyCM99/assets/110075857/d010e3d2-f021-4e78-abbe-a3be5ebd00a9)

luego probar una instrucción tipo C
pero solo se dio la explicación   


#### micro-sesión 3:

se esta habalndo de la cantidad de péraciones que se pueden hacer dependiendo de la 
cantidad de bit pensado en operaciones de tipo c
analizamos eso en un capitulo del libro recomendado en el sitio de la materia 

se planteo un ejercicio para una operacion tipo c 
pidiendo guardar un numero 69 en la particion d 

se hizo esto 

```c
// instruccion tipo A
// @numeropositivo 
@25

// instruccion tipo C
//destino = operación;salto (opcional)
//operacion (obligatoria, simpre hay que pedir una operacion) 
@69
D=A
```

#### micro-sesión 4:cierre. Reflexión final.

Se podría decir que si se logró completar lo que se planteo para la clase de hoy 
Quedo pendiente ordenar las bitácoras 
Au me falta poner algunas cosas al día 
Falto hablar con el profe, pues quedamos de organizar la tabla de puntos y no se realizó 


### Sesión 3

#### micro-sesión 1:apertura. Reflexión inicial.
#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.




## SEMANA 4

### Sesión 1
#### micro-sesión 1:apertura. Reflexión inicial.
El día de hoy tendremos un trabajo con el profesor para explicar herramientas que nos 
pueden ser útiles a la hora de resolver el proyecto para esta primera unidad, realizaremos 
el trabajo entre todos, tratando temas como 
-Labels 
-Variables 
-Saltos 
-I/O: teclado, display 
-Algunas estructuras de control 
Comenzamos viendo como el CPUEMULATOR interactúa con las instrucciones de tipo a y c 

Explicando como carga instrucciones en la RAM, utilizando una analogía sobre cocina 
Como si el libro de recetas fuera la Rom, la cocina la RAM y el cocinero la CPU 

Se explico como se crean las variables y como se carga al 
registro de la CPU una instrucción de esta manera 

```c
@variable
D=M
@variable2
D=M
//quiero guardar en 
//la posición 66 de la memoria el numero 15
@15
D=A
@66 
M=D

```
durante esta secion me limite a tomar atencion ya que tenia mis dudas subre el tema 

#### micro-sesión 2:
Comenzaos construyendo un código similar al de la introducción, lo recorrimos de arriba abajo
contrayendo para ejemplificar como funcionaban 
Los labels, variables, saltos, entrada por teclado y diplay y algunas estructuras de control  

```c
// Si hay un tecla presiona pinto los primeros
// 16 pixeles, si no los borro.
// Recordar: la primera posición de la pantalla
// es la 16384. La posición del teclado es la
// 24576.


(START)
@24576
D = M
@IF
D;JEQ
// ELSE
@16384
M = -1
@START
0;JMP
(IF)
@16384
M = 0
@START
0;JMP
```
durante esta secion me limite a tomar atencion ya que tenia mis dudas subre el tema 


#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.
se pudieron tratar todos los temas, me quedo bastante claro como fusionan los loops y cómo funciona 
la lógica del código, saber en que momento, el toma la decisión de volver a estar o continuar con el programa 
se proyecto terminar todo de la unidad 1 para la semana que viene 
mirar en chat gtp una manera de solucionar el problema con la ayuda del chatGTP 


### Sesión 2

#### micro-sesión 1:apertura. Reflexión inicial.
se recomendo utilizar la clase para trabajar en el 
programa y preguntar las dudas sobre la misma 

se recordo la finalizacion de la unidad el proximo viernes 

#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.

se utilizo la clase para contemplar unos vidos adicionales para complementar, en la proxima, comenzare con la aplicacion 

### Sesión 3

#### micro-sesión 1:apertura. Reflexión inicial.
#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.




## SEMANA 5

### Sesión 1

#### micro-sesión 1:apertura. Reflexión inicial.
#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.

### Sesión 2

#### micro-sesión 1:apertura. Reflexión inicial.
comenzamos hablando, sobre mis pendientes con el curso, 
todo indica a que sera mas trajo autono para esta clase asi que 
continuare subiendo todos mis pendientes 
#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.

### Sesión 3

#### micro-sesión 1:apertura. Reflexión inicial.
#### micro-sesión 2:
#### micro-sesión 3:
#### micro-sesión 4:cierre. Reflexión final.







