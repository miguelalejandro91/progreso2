/*A continuación, se describe el problema computacional a resolver:
En una Institución educativa se almacenan datos sobre el número de alumnos que han ingresado 
a sus diferentes carreras en los dos semestres anuales y en los últimos 5 años. Cada carrera tiene 
un numero asociado que la identifica:
1. Ingeniería de Software.
2. Administración.
3. Economía.
4. Relaciones Internacionales.
5. Matemáticas.
6. Contabilidad.
7. Ingeniería Industrial.
Escriba un programa que calcule:
a) El año en que ingresó la mayor cantidad de alumnos a la universidad.
b) La Carrera que recibió la mayor cantidad de alumnos en el último año.
c) ¿En qué año la carrera de Ingeniería de Software recibió la mayor cantidad de alumnos?*/

#include <stdio.h>

#define NUM_CARRERAS 7
#define NUM_ANIOS 5

int main() {
    // Declaración e inicialización del arreglo de alumnos
    int alumnos[NUM_ANIOS][NUM_CARRERAS] = {
        {100, 50, 75, 80, 90, 60, 70},     // Año 1
        {120, 70, 60, 95, 80, 55, 65},     // Año 2
        {110, 60, 80, 85, 75, 70, 50},     // Año 3
        {90, 65, 70, 75, 85, 75, 60},      // Año 4
        {105, 75, 90, 70, 95, 80, 55}      // Año 5
    };