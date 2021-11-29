#include <stdio.h>
#include <stdlib.h>

	int main()
	{
		int matriz[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
		int i,j;
				
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%d\t", matriz[i][j]);
			}
			puts("\n");
		}
		
		puts("\nMATRIZ TRIANGULAR:\n");
		
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			
				if(i>=j){
					printf("%d\t", matriz[i][j]);
					
				}else{
					printf("%d\t", 0);
				}
				puts("\n");
			
		}
		return 0;
	}
	
