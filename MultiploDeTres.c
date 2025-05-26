#include <stdio.h>
int main(){
    int numero; //Esta variable sirve para guardar el numero ingresado 
    //Ahora le pedimos al usuario ingresar un numero
    printf("ingrese un numero: ");
    scanf("%d", &numero);
    //Ahora se verifica si el numero ingresado es multiplo de tres
    if (numero % 3 == 0) {
        printf("✅ El numero %d es multiplo de 3/n", numero);
    } else {
        printf("❌ El numero %d NO es multiplo de 3/n", numero);
    }
    return 0;
}
