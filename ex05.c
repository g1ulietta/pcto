#include <stdio.h>

int main(){
    int a;
    int b;
    printf("a che età si può prendere la patente nel tuo paese?\n");
    scanf("%d",&a);
    printf("quanti anni hai?\n");
    scanf("%d",&b);
    if(b>=a){
        printf("puoi prendere la patente\n");
    }else if(b<a){
        printf("non puoi prendere la patente\n");
    }
}