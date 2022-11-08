#include <stdio.h>
#include <locale.h>
 
int main() {
	
	setlocale(LC_ALL,"Portuguese_Brazil");
    
    int inicio,fim;
    
    printf("Tempo de Jogo\n\n");
    
	printf("Digite o valor inicial: ");
	scanf("%d",&inicio);
	printf("Digite o valor final: ");
	scanf("%d",&fim);
  
	if(inicio<fim){
    	printf("O jogo durou %d hora(s)\n",fim-inicio);
	}else{
    	printf("O jogo durou %d hora(s)\n",24-inicio+fim);
	}
    return 0;
}
