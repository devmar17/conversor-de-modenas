#include <stdio.h>

int main() {
    int opcion;
    float cantidad;

    printf("Conversor de Monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            printf("%.2f Quetzales = %.2f Dólares\n", cantidad, cantidad / 7.8);
            break;
        case 2:
            printf("%.2f Quetzales = %.2f Euros\n", cantidad, cantidad / 8.5);
            break;
        case 3:
            printf("%.2f Dólares = %.2f Quetzales\n", cantidad, cantidad * 7.8);
            break;
        case 4:
            printf("%.2f Euros = %.2f Quetzales\n", cantidad, cantidad * 8.5);
            break;
        default:
            printf("Opción inválida.\n");
    }

    return 0;
}

//tarea1