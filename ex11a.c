#include <stdio.h>

int main(){
    int n;
    int x = 2;
        
    printf("inserisci un numero:\n");
    scanf("%d", &n);
    if(n==1){
        printf("è un numero primo\n");
    }else{
        while(n%x!=0){
            x = x+1;
        }
        if(n==x){
            printf("è un numero primo\n");
        }else{
            printf("non è un numero primo\n");
        }
    }
}