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

    // Calcular el año con la mayor cantidad de alumnos
    int maxAlumnos = 0;
    int anioMaxAlumnos = 0;

    for (int i = 0; i < NUM_ANIOS; i++) {
        int totalAlumnos = 0;
        for (int j = 0; j < NUM_CARRERAS; j++) {
            totalAlumnos += alumnos[i][j];
        }
        if (totalAlumnos > maxAlumnos) {
            maxAlumnos = totalAlumnos;
            anioMaxAlumnos = i + 1;
        }
    }

    printf("El año con la mayor cantidad de alumnos fue el año %d\n", anioMaxAlumnos);

    // Calcular la carrera con la mayor cantidad de alumnos en el último año
    int maxAlumnosUltimoAnio = 0;
    int carreraMaxAlumnosUltimoAnio = 0;

    for (int j = 0; j < NUM_CARRERAS; j++) {
        int totalAlumnosUltimoAnio = alumnos[NUM_ANIOS - 1][j];
        if (totalAlumnosUltimoAnio > maxAlumnosUltimoAnio) {
            maxAlumnosUltimoAnio = totalAlumnosUltimoAnio;
            carreraMaxAlumnosUltimoAnio = j + 1;
        }
    }

    printf("La carrera con la mayor cantidad de alumnos en el último año fue la carrera %d\n", carreraMaxAlumnosUltimoAnio);

    // Calcular el año en el que Ingeniería de Software recibió la mayor cantidad de alumnos
    int maxAlumnosIngenieriaSoftware = 0;
    int anioMaxAlumnosIngenieriaSoftware = 0;

    for (int i = 0; i < NUM_ANIOS; i++) {
        int totalAlumnosIngenieriaSoftware = alumnos[i][0];  // Ingeniería de Software es la primera carrera (índice 0)
        if (totalAlumnosIngenieriaSoftware > maxAlumnosIngenieriaSoftware) {
            maxAlumnosIngenieriaSoftware = totalAlumnosIngenieriaSoftware;
            anioMaxAlumnosIngenieriaSoftware = i + 1;
        }
    }

    printf("La carrera de Ingenieria de Software recibio la mayor cantidad de alumnos en el año %d\n", anioMaxAlumnosIngenieriaSoftware);

    return 0;
}

