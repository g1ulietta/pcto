#include <stdio.h>

int main(){
    char parola[6]={'c','i','a','o', '\0'};
    printf("oh bella %s\n", parola);
    
    char pa[]="ciao";
    printf("bella %s\n", pa);
    printf("bella %s %s %s\n", pa, pa, pa);
    
    char stringa[5]={'c','i','a','o','\0'};
    stringa[0]='C';
    stringa[1]='I';
    stringa[2]='A';
    stringa[3]='O';
    
    printf("oh bella %s\n", stringa);
    return 0;
}