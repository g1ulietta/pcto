#include <stdio.h>

int main(){
    int a;
    int b;
    printf("inserisci un numero:\n");
    scanf("%d",&a);
    printf("inseriscine un altro:\n");
    scanf("%d",&b);
    if(a%b==0){
        printf("il primo numero è multiplo del secondo\n");
    }else if(a%b!=0){
        printf("il primo numero non è multiplo del secondo\n");
    }
}