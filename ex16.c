#include <stdio.h>

int main(){
    double a;
    double b;
    char x;
    double addizione;
    double sottrazione;
    double moltiplicazione;
    float divisione;

    printf("inserisci 2 numeri:\n");
    scanf("%lf %lf", &a, &b);
    printf("quale operazione vuoi svolgere?\n");
    scanf(" %c", &x);
    addizione = a+b;
    sottrazione = a-b;
    moltiplicazione = a*b;
    divisione = a/b;

    if(x=='+'){
        printf("%lf\n", addizione);
    }else if(x=='-'){
        printf("%lf\n", sottrazione);
    }else if(x=='*'){
        printf("%lf\n", moltiplicazione);
    }else if(x=='/'){
        printf("%f\n", divisione);
    }else{
        printf("quello non è un numero bastardo\n");
    }

}