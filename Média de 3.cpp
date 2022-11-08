#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
    
	float n1,n2,n3,n4,media,exame,provafinal;
    
	printf("Média de três\n\n");
    
	printf("Digite o numero da n1: ");
	scanf("%f",&n1);
	printf("Digite o numero da n2: ");
	scanf("%f",&n2);
	printf("Digite o numero da n3: ");
	scanf("%f",&n3);
	printf("Digite o numero da n4: ");
	scanf("%f",&n4);
    
    media=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    
    printf("Media: %.1f\n",media);
    
    if (media>=7.0){
        printf("\nAluno Aprovado.\n");
	}else if (media<5.0){
        printf("\nAluno Reprovado.\n");
	}else if((5<=media)&&(media<7)){
        printf("\nAluno em Exame");
        printf("\n");
        printf("\nNota do Exame: ");
        scanf("%f",&exame);
        provafinal=(media+exame)/2;
        
        if(provafinal>=5){
        printf("\nAluno Aprovado\n");
        printf("Media final: %.1f\n",provafinal);	
		}else{
		printf("\nAluno Reprovado\n");
        printf("Media final: %.1f\n",provafinal);
		}
	}
    return 0;
}
