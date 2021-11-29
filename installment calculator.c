#include <stdlib.h>
#include <stdio.h>
int main (){
	int parc, opcao;
	float val_c, val_m, val_f;
    
    do{
	    printf("\nInsira o valor do carro : R$");
	    scanf("%f", &val_c);
	    
        printf("\nInsira a quantidade de parcelas (1, 3, 6, 12 ou 18): ");
        scanf("%d", &parc);
	
		switch (parc) {
    	   case 1: val_f = val_c * 0.8;
				   printf("\nPara pagamento a vista o preco final do veiculo e R$ %.2f", val_f); break;
    	   
		   case 3: val_f = val_c*1.03;
		           val_m = val_f/3;
    	           printf("\nO preco final e R$ %.2f \nSendo dividido em 3 parcelas de R$ %.2f", val_f, val_m); break;
    	    
    	   case 6: val_f = val_c*1.06;
		           val_m = val_f/6;
    	           printf("\nO preco final e R$ %.2f \nSendo dividido em 6 parcelas de R$ %.2f", val_f, val_m); break;
    	
    	   case 12: val_f = val_c*1.09;
		            val_m = val_f/12;
    	            printf("\nO preco final e R$ %.2f \nSendo dividido em 12 parcelas de R$ %.2f", val_f, val_m); break;
    	
    	   case 18: val_f = val_c*1.12;
		            val_m = val_f/18;
    	            printf("\nO preco final e R$ %.2f \nSendo dividido em 18 parcelas de R$ %.2f", val_f, val_m); break;
    	
    	   default: printf("\nNao parcelamos em %d vezes", parc); break;
    	}	
    	do {
    		printf ("\n\nSe deseja fazer outro orcamento tecle 1, senao tecle 0 \n");
    		scanf("%d", &opcao);
    		
    		if (opcao > 1) {
    			printf ("\n\nCodigo errado!");
				}
    		}while (opcao >= 2);
    	
	}while (opcao != 0);
	printf("\nObrigado pela preferencia, volte sempre!");
	
    return 0;
}
