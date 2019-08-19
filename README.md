# actividad-integradora-4

Para este proyecto se tomó como metodo de solución al algoritmo recursivo y backtracking, debido a sus simulitudes con el ejemplo que requiere un tablero de N x M, siendo este algoritmo util y basto de ejemplos de soluciones de mazmorra.

Para entender la recursividad, se me hizo muy util ejemplo de las torres de Hanoi, explicado en este video:

https://www.youtube.com/watch?v=lilBGvaOSy8

El algoritmo se conforma de la siguiente forma



1) Desde cada celda primero imprime todas las rutas hacia abajo 

2) Luego imprime todas las rutas hacia la derecha. 

3) Hace esto de forma recursiva para cada celda encontrada.

De modo que si topa con una columna final osea p (posision actual) su x = n (el largo) solo puede moverse hacia abajo.

Viceversa para buscar hacia abajo.

Hasta llegar a el punto bajo a la derecha final.

PAra evitar caer en una casilla ya tomada el algoritmo usa un apuntador para guardar el nodo anterior.

Limitantes:

Una de las reglas era si movimiento = derecha, entonces avanza 3 casillas; Si movimiento = abajo, avanza 2 casillas.

La caracteristica no fue agregada por no poder llegar a una solución.
