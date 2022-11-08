#include <stdio.h>
#include <locale.h>

int main() {
 	
	setlocale(LC_ALL,"Portguese_Brazil");
 	
    double a,b,c,x,y,z;
    
    printf("Tipos de Triângulos\n\n");
    
    printf("Digite o valor de X: ");
    scanf("%lf",&x);
    printf("Digite o valor de Y: ");
    scanf("%lf",&y);
    printf("Digite o valor de Z: ");
    scanf("%lf",&z);

    if((x>=y)&&(x>=z)){
        a=x;
        b=y;
        c=z;
    }else if((y>=x)&&(y>=z)){
        a=y;
        b=x;
        c=z;
    }else if(z>=y && z>=x){
        a=z;
        b=y;
        c=x;
    }
   	if(a>=(b+c)){
		printf("NAO FORMA TRIANGULO\n");
    }
	if((a*a)==(b*b+c*c)&&(a<b+c)){
		printf("TRIANGULO RETANGULO\n");
    }else if((a*a)>(b*b)+(c*c)&&(a-b<c)){
		printf("TRIANGULO OBTUSANGULO\n");
    }else if((a*a)<((b*b)+(c*c))){
		printf("TRIANGULO ACUTANGULO\n");
    }
	if(a==b&&b==c&&c==a){
		printf("TRIANGULO EQUILATERO\n");
    }else{
    	printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}

