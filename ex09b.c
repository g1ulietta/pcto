#include <stdio.h>

int main(){
    float a;
    float b;
    float c;
    printf("inserisci le lunghezze dei 3 lati\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a==b&&b==c){
        printf("è un triangolo equilatero\n");
    }else if((a==b&&b!=c)||(a==c&&b!=c)||(c==b&&b!=a)){
        printf("è un triangolo isoscele\n");
    }else if(a!=b&&a!=c){
        printf("è un triangolo scaleno\n");
    }
}