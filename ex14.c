#include <stdio.h>

float ft_sqrt( float delta){
    float temp, radice;

    radice = delta / 2;
    temp = 0;

    while(radice != temp) {
        temp = radice;
        radice = ( delta/temp + temp) / 2;
    }

    return radice;
}

int main(){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("inserisci 3 valori:\n");
    scanf("%f %f %f", &a, &b, &c);
    delta =( b*b) - (4*a*c);
    printf("il delta è %f\n", delta);

    if(delta>0){
        x1 = (b+ft_sqrt(delta))/a*2;
        x2 = (b-ft_sqrt(delta))/a*2;
        printf("x1 %f, x2 %f\n", x1, x2);
    }else if(delta==0){
        x1 = b/(2*a);
        x2 = x1;
        printf("x1 e x2 coincidono: %f\n", x1);
    }else{
        printf("non esistono soluzioni reali per questi valori\n");
    }
    
}
