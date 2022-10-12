#include <stdio.h>

int main() {
    int num1, num2, aux;
    printf("Introduzca un numero entero: ");
    scanf("%d",&num1);
    fflush(stdin);
    printf("Introduzca otro numero entero distinto al anterior: ");
    scanf("%d",&num2);
    fflush(stdin);
    while (num1==num2){
        printf("Los numeros son iguales");
        printf("\nIntroduzca un numero distinto al anterior: ");
        scanf("%d",&num2);
        fflush(stdin);
    }
    if (num1>num2){
        aux=num1;
        num1=num2;
        num2=aux;
    }
    do {
        printf("%d ",num1);
        num1=num1+2;
    } while (num1<=num2);
    return 0;
}
