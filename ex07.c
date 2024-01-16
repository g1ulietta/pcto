#include <stdio.h>

int main(){
    float a;
    printf("inserisci una temperatura in celsius:\n");
    scanf("%f",&a);
    printf("sono %f kelvin\n",a+273.15);
    printf("sono %f farenheit\n", a*9/5+32);
    printf("non esiste una temperatura più bassa dello 0 assoluto\n");
}