#include <stdio.h>

int main(){
    
    char a;
    char e;
    char i;
    char o;
    char u;
    char x;

    printf("inserisci una lettera\n");
    scanf("%c", &x);

    if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')){
        printf("è una vocale\n");
    }else{
        printf("è una consonante\n");
    }

}