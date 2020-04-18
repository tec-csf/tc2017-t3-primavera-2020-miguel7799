# Tarea *[Poner aquí el número de la tarea]*. *[Poner aquí el título de la tarea]*

---

##### Integrantes:
1. *Miguel Ángel Hernández Maldonado* - *A01022398* - *Campus Santa Fe*

---
## 1. Aspectos generales

Las orientaciones de la tarea se encuentran disponibles en la plataforma **Canvas**.

Este documento es una guía sobre qué información debe entregar como parte de la tarea, qué requerimientos técnicos debe cumplir y la estructura que debe seguir para organizar su entrega.


### 1.1 Requerimientos técnicos

A continuación se mencionan los requerimientos técnicos mínimos de la tarea, favor de tenerlos presente para que cumpla con todos.

* El código debe desarrollarse en C++, cumpliendo con el último estándar [C++17](https://isocpp.org/std/the-standard).
* Toda la programación debe realizarse utilizando Programación Genérica.
* Deben utilizarse las [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).
* Todo el código debe estar correctamente documentado, siguiendo los lineamientos que aparecen en [Documenting C++ Code](https://developer.lsst.io/cpp/api-docs.html).
* Todo el código de la tarea debe alojarse en este repositorio de GitHub.
* Debe configurar su repositorio para que utilice el sistema de Integración Continua [Travis CI](https://travis-ci.org/).

### 1.2 Estructura del repositorio

El proyecto debe seguir la siguiente estructura de carpetas:
```
- / 			        # Raíz del repositorio
    - README.md			# Archivo con la información general de la actividad (este archivo)
    - sources  			# Códigos fuente con la solución
    - examples			# Archivos de ejemplo que pueden utilizarse para verificar que la solución funciona.
```

## 2. Solución

El problema número 4 del Quiz 3 planteaba el siguiente problema: Se desea implementar un 
algoritmo que permita resolver el problema de encontrar el cerco convexo de un conjunto 
de puntos en el plano XY.

Para resolverlo se implementó un algoritmo que recorre toda la matriz donde ese 
encuentra dicha figura, en donde se pide que los puntos de dicha figura estén 
representados por un 1.

El algoritmo recorre la matriz encontrando cada uno de los puntos que conforman la 
figura y los imprime en el orden en el que los va encontrando, además cuenta la cantidad 
de puntos e imprime la cantidad de lados que tiene la figura que está plasmada en la 
matriz una vez que termino de recorrerla.

0	1	0
0	0	0 	= triangulo
1	0	1


El problema número 7 del Quiz 3 planteaba el siguiente problema: Dado un tablero de 
ajedrez de tamaño n*n, un rey es colocado en una casilla arbitraria de coordenadas 
(x,y). Determinar los n2-1 movimientos del rey, de forma que todas las casillas del 
tablero sean visitadas una sola vez, si tal secuencia existe.

Para este problema utilizaremos un algoritmo Backtrackingn el cual nos ayudará a 
encontrar el recorrido un poco más rápido. Este algoritmo cuenta con una matriz[][] 
cuyos valores son las dimensiones del tablero, cuenta con una posición de inicio, la 
cual en este caso empieza en [0][0], y de ahí analiza cuales son los movimientos 
posibles dependiendo de la coordenadas que para el rey solo son 4 posibles (1,0 - 1,0 – 
0,1 – 0,-1) que si lo analizamos en el mundo real solo puede avanzar una casilla por 
turno ya sea, arriba, abajo, a la izquierda o a la derecha. 

Una vez que analiza el siguiente movimiento, va colocando el número de movimiento en la 
casilla a la cual avanza, el backtraking nos ayuda cuando el rey llega a algún extremo 
del tablero ya que si si descubre que su movimiento hace que se salga del tablero, el 
rey retrocederá a la posición anterior.

Una vez que él llega a la última casilla, se detiene y se imprime el tablero con los 
movimientos.
 
 

### 2.1 Pasos a seguir para utilizar la aplicación

*[Incluya aquí una guía paso a paso para poder utilizar la aplicación, desde la clonación del repositorio, la compilación del código hasta la ejecución de los ejemplos para visualizar los resultados.]*

## 3. Referencias

https://tutorias.co/arrays-visual-c-matriz-tablero-de-ajedrez/
https://elvex.ugr.es/decsai/c/problemas/reinas/reinas2.c
https://foro.elhacker.net/programacion_cc/salto_de_caballo_y_backtracking-t245912.0.html
https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/
https://www.lawebdelprogramador.com/foros/C-Visual-C/101916-como-saber-si-un-poligono-es-concavo-o-convexo.html
https://www.researchgate.net/publication/307180729_GEOMETRIA_COMPUTACIONAL_EL_PROBLEMA_DEL_CERCO_CONVEXO

