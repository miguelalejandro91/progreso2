#include <stdio.h>

#define NUM_CARRERAS 7
#define NUM_ANIOS 5

int main() {
    int alumnos[NUM_CARRERAS][NUM_ANIOS];
    int i, j;

    // Inicializar la matriz de alumnos con datos de ejemplo
    int datosAlumnos[NUM_CARRERAS][NUM_ANIOS] = {
        {100, 120, 150, 110, 200}, // Ingeniería de Software
        {80, 90, 95, 100, 85},     // Administración
        {70, 75, 80, 85, 90},      // Economía
        {60, 65, 70, 75, 80},      // Relaciones Internacionales
        {50, 55, 60, 65, 70},      // Matemáticas
        {40, 45, 50, 55, 60},      // Contabilidad
        {30, 35, 40, 45, 50}       // Ingeniería Industrial
    };

    // Copiar los datos a la matriz de alumnos
    for (i = 0; i < NUM_CARRERAS; i++) {
        for (j = 0; j < NUM_ANIOS; j++) {
            alumnos[i][j] = datosAlumnos[i][j];
        }
    }

    // Calcular el año con la mayor cantidad de alumnos en total
    int anioMayorCantidad = 0;
    int totalMayorCantidad = 0;

    for (j = 0; j < NUM_ANIOS; j++) {
        int totalAnio = 0;
        for (i = 0; i < NUM_CARRERAS; i++) {
            totalAnio += alumnos[i][j];
        }
        if (totalAnio > totalMayorCantidad) {
            totalMayorCantidad = totalAnio;
            anioMayorCantidad = j + 1;
        }
    }

    printf("El año con la mayor cantidad de alumnos fue el año %d.\n", anioMayorCantidad);

    // Calcular la carrera con la mayor cantidad de alumnos en el último año
    int carreraMayorCantidad = 0;
    int mayorCantidad = 0;

    for (i = 0; i < NUM_CARRERAS; i++) {
        if (alumnos[i][NUM_ANIOS - 1] > mayorCantidad) {
            mayorCantidad = alumnos[i][NUM_ANIOS - 1];
            carreraMayorCantidad = i + 1;
        }
    }

    printf("La carrera con la mayor cantidad de alumnos en el último año fue la carrera %d.\n", carreraMayorCantidad);

    // Calcular el año en el que Ingeniería de Software recibió la mayor cantidad de alumnos
    int anioIngSoftwareMayorCantidad = 0;
    int mayorCantidadIngSoftware = 0;

    for (j = 0; j < NUM_ANIOS; j++) {
        if (alumnos[0][j] > mayorCantidadIngSoftware) {
            mayorCantidadIngSoftware = alumnos[0][j];
            anioIngSoftwareMayorCantidad = j + 1;
        }
    }

    printf("La carrera de Ingeniería de Software recibió la mayor cantidad de alumnos en el año %d.\n", anioIngSoftwareMayorCantidad);

    return 0;
}
