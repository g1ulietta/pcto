#include <stdio.h>

void calcolacubo(){
    int numero;
    int cubo;
    printf("inserisci un numero:\n");
    scanf("%d", &numero);
    cubo = numero * numero * numero;
    printf("il cubo di %d è %d\n", numero, cubo);
}

void calcolaquadrato(){
    int numero;
    int quadrato;
    printf("inserisci un numero:\n");
    scanf("%d", &numero);
    quadrato = numero * numero;
    printf("il quadrato di %d è %d\n", numero, quadrato);
}

void calcolaradice(){
    int numero;
    float temp, sqrt;
    printf("inserisci un numero:\n");
    scanf("%d", &numero);
    sqrt = numero / 2;
    temp = 0;

    while(sqrt!=temp){
        temp = sqrt;
        sqrt = ( numero/temp + temp) / 2;
    }
    printf("la radice quadrata di %d è %f\n", numero, sqrt);
}
    
int main(){
    calcolacubo();
    calcolaquadrato();
    calcolaradice();
    return 0;
}