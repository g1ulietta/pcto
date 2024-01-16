#include <stdio.h>

int main(){
    int a;
    printf("inserisci un anno:\n");
    scanf("%d", &a);
    if(a%400==0){
        printf("è un anno bisestile\n");
    }else if(a%4==0){
        if(a%100!=0){
           printf("è un anno bisestile\n"); 
        }else{
            printf("non è un anno bisestile\n");
        }
    }else{
        printf("non è un anno bisestile\n");
    }
}