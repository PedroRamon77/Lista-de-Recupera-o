#include <stdio.h>
#include <locale.h>

int main() {
	
 	setlocale(LC_ALL, "Portuguese_Brazil");

	int v1,v2,v3;
   
	printf("Sort Simples\n\n");
	   
   	printf("Digite o primeiro valor: ");
   	scanf("%d",&v1);
   	printf("Digite o segundo valor: ");
   	scanf("%d",&v2);
   	printf("Digite o terceiro valor: ");
   	scanf("%d",&v3);
   
	if((v1<v2)&&(v2<v3)){
       	printf("%d\n",v1);
       	printf("%d\n",v2);
       	printf("%d\n",v3);
    }else if((v1<v3)&&(v3<v2)){
    	printf("%d\n",v1);
    	printf("%d\n",v3);
    	printf("%d\n",v2);
    }else if((v2<v1)&&(v1<v3)){
  		printf("%d\n",v2);
    	printf("%d\n",v1);
    	printf("%d\n",v3);
	}else if((v2<v3)&&(v3<v1)){
    	printf("%d\n",v2);
    	printf("%d\n",v3);
    	printf("%d\n",v1);
    }else if((v3<v1)&&(v1<v2)){
		printf("%d\n",v3);
    	printf("%d\n",v1);
    	printf("%d\n",v2);
	}else if((v3<v2)&&(v2<v1)){
		printf("%d\n",v3);
    	printf("%d\n",v2);
    	printf("%d\n",v1);
	}
    printf("\n");
	printf("%d\n",v1);
	printf("%d\n",v2);
	printf("%d\n",v3);
 
    return 0;
}
