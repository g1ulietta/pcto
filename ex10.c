#include <stdio.h>

int main(){
    int a;
    printf("in che anno sei nato?\n");
    scanf("%d", &a);
    if(a==1969){
        printf("sei nato l'anno dell'allunaggio\n");
    }else if(a>1969){
        printf("sei nato %d anni dopo l'allunaggio\n", a-1969);
    }else if(a<1969){
        printf("sei nato %d anni prima dell'allunaggio\n", 1969-a);
    }
}