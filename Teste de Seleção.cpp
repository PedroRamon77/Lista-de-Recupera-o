#include <stdio.h>
 
int main() {

int A,B,C,D;

	printf("Teste de Seleção\n\n");
	
	printf("Digite o valor de A: ");
	scanf("%d",&A);
	printf("Digite o valor de B: ");
	scanf("%d",&B);
	printf("Digite o valor de C: ");
	scanf("%d",&C);
	printf("Digite o valor de D: ");
	scanf("%d",&D);

	if ((B>C)&&(D>A)&&((C+D)>(A+B))&&(C>=0)&&(D>=0)&&(A%2 ==0)){

    printf("\nValores aceitos\n");
	}else{
    printf("\nValores nao aceitos\n");
	}

    return 0;
}
