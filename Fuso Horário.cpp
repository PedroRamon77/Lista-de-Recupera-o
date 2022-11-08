#include <stdio.h>
#include <locale.h>
 
int main() {
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int S,T,F;
	
	printf("Fuso Horário\n\n");
	
	printf("Horário da partida: ");   
	scanf("%d",&S);
	printf("Tempo da Viajem: ");
	scanf("%d",&T);
	printf("Fuso Horário do destino: ");
	scanf("%d",&F);
   
	if(S+T+F>=24){
       	printf("\n%d\n",S+T+F-24);
    }else if(S+T+F>=0 && S+T+F<24){
		printf("\n%d\n",S+T+F);
   	}else if(S+T+F<0){
      	printf("\n%d\n",S+T+F+24); 
  	}
  	
   	return 0;
}
