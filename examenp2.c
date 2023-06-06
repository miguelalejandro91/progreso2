/*Cada semestre, a la materia de Programación se inscriben una cantidad constante de 
23 alumnos. El semestre está dividido en 3 progresos. Utilice los conceptos de Arreglos 
y Funciones para escribir un programa en lenguaje C que permita realizar los siguientes cálculos:
1- Obtener el promedio de calificaciones de cada alumno durante el semeste.
2- La nota promedio del grupo de estudiantes para cada progreso
3- El alumno que obtuvo el mayor promedio de calificación durante el semestre*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ALUMNOS 23
#define NUM_PROGRESOS 3

struct Alumno {
    char nombre[50];
    int calificaciones[NUM_PROGRESOS];
};

float calcularPromedioAlumno(int calificaciones[], int numCalificaciones) {
    int suma = 0;
    for (int i = 0; i < numCalificaciones; i++) {
        suma += calificaciones[i];
    }
    return (float)suma / numCalificaciones;
}

float calcularPromedioGrupo(struct Alumno alumnos[]) {
    float suma = 0;
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        suma += calcularPromedioAlumno(alumnos[i].calificaciones, NUM_PROGRESOS);
    }
    return suma / NUM_ALUMNOS;
}

int encontrarMejorAlumno(struct Alumno alumnos[]) {
    int mejorAlumno = 0;
    float mejorPromedio = calcularPromedioAlumno(alumnos[0].calificaciones, NUM_PROGRESOS);

    for (int i = 1; i < NUM_ALUMNOS; i++) {
        float promedio = calcularPromedioAlumno(alumnos[i].calificaciones, NUM_PROGRESOS);
        if (promedio > mejorPromedio) {
            mejorPromedio = promedio;
            mejorAlumno = i;
        }
    }

    return mejorAlumno;
}

int main() {
    struct Alumno alumnos[NUM_ALUMNOS];
    srand(time(NULL));

    // Inicializar los nombres de los alumnos (ejemplo)
    char nombres[NUM_ALUMNOS][50] = {
        "Juan",
        "Maria",
        "Pedro",
        // Agregar más nombres




