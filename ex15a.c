#include <stdio.h>

int main(){
    
    char x;

    printf("inserisci una lettera\n");
    scanf("%c", &x);

    if((x>=64 && x<=90)||(x>=97 && x<=122)){
        if((x=='a')||(x=='A')||(x=='e')||(x=='E')||(x=='i')||(x=='I')||(x=='o')|(x=='O')||(x=='u')||(x=='U')){
            printf("è una vocale\n");
        }else{
            printf("è una consonante\n");
        }
       
    }else{
        printf("non è una lettera\n");
    }

}