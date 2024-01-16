#include <stdio.h>

int main(){
    float a;
    float b;
    float c;
    printf("dammi 3 valori\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a+b>c){
        if(a+c>b){
            if(b+c>a){
                printf("il triangolo esiste\n");
            }
        }
    }else{
        printf("il triangolo non esiste\n");
    }

}