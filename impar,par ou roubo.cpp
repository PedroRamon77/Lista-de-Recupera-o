#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int p,j1,j2,r,a,s;
	
	printf("Ímpar,Par ou Roubo\n\n");
	
	printf("Digite a opção do jogador 1: \n 1-impar , 0-par : ");
	scanf("%d",&p);
	printf("Digite o número escolhido pelo jogador 1: ");
    scanf("%d",&j1);
    printf("Digite o número escolhido pelo jogador 2: ");
    scanf("%d",&j2);
    printf("O jogador 1 roubou?\n1-sim e 0-não : ");
    scanf("%d",&r);
    printf("O jogador 2 acusou?\n1-sim e 0-não : ");
    scanf("%d",&a);

    s=j1+j2;
    if(r==1){
    if(a==1){
    	printf("\nJogador 2 ganha!\n");
	}else{
		printf("\nJogador 1 ganha!\n");
	}
	}else{
	if( ( s % 2 == 0 && p == 1) || (s % 2 == 1 && p == 0) ){
		printf("Jogador 1 ganha!\n");
	}else{
		printf("Jogador 2 ganha!\n");
}
}
   
   
    return 0;
}
