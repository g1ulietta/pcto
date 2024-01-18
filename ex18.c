#include <stdio.h>

int main(){

    char stringa[100];
    char i=0;
    printf("scrivi una frase\n");
    printf("%s\n", stringa);
    scanf("%[^\t\n]s ", stringa);
    
    while(stringa[i]!='\0'){
        if(stringa[i]>=97 && stringa[i]<=122){
            stringa[i]=stringa[i]-32; 
        }
    i=i+1;
    }
    printf("%s\n", stringa);
    return(0);
}