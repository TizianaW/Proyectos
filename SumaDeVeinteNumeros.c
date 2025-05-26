#include <stdio.h>

int main() {
    int i, numero, suma = 0; //Son las variables para el índice, el número y la suma total

    // Esto es un Bucle para pedir 20 números al usuario
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número #%d: ", i + 1);
        scanf("%d", &numero);
        suma += numero; // Este suma todos los numeros y lo guarda en una de las variables
    }

    // Este muestra el resultado final
    printf("🔢 La suma total de los 20 números es: %d\n", suma);

    return 0;
}
