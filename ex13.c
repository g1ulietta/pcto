#include <stdio.h>

int main(){
    float n;
    float b;
    int i;
    i = 0;

    printf("inserisci un numero\n");
    scanf("%f", &n);
    while(n>=0 && b>=0){
        i++;
        n = n+b;
        printf("media: %f\n", n/i);
        printf("inserisci un numero\n");
        scanf("%f", &b);
    }
}