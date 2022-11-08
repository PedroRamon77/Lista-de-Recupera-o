#include <stdio.h>
#include <locale.h>
#include <math.h>
 
int main() {
    
    double a,b,c,r1,r2,delta;
    
    printf("Calculadora de Bhaskara\n\n");
    
    printf("Digite o valor a: ");
    scanf("%lf",&a);
    printf("Digite o valor b: ");
    scanf("%lf",&b);
    printf("Digite o valor c: ");
    scanf("%lf",&c);
    
    delta = (b*b) - 4*a*c;
    r1=((-1*b)+(sqrt(delta)))/(2*a);
    r2=((-1*b)-(sqrt(delta)))/(2*a);
    
    if( (delta<0) || (delta/0)){
        printf("\n\nImpossivel calcular");
    }
    else{
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
    return 0;
}


