#include <stdio.h>

int main(){
    int a;
    printf("inserisci la tua età\n");
    scanf("%d" , &a);
    if(a<18){
        printf("ah ma quindi sei un bamboccio\n");
    }else if(a<40){
        printf("ah daje andiamo a berci qualcosa\n");
    }else if(a>40){
        printf("aiuto vai via pedofilo\n");
    }
}
    
