#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include "gera.h"
//#include "gera.c"
int main (){
	int tamanho;
	printf(" =================================================================\n");
	printf("||000000   00        0000     0000    00000       000000   000000||\n");
	printf("||00       00       00  00   00  00   00  00        00       00  ||\n");
	printf("||0000     00       00  00   00  00   00  00  000   00       00  ||\n");
	printf("||00       00       00  00   00  00   00  00        00       00  ||\n");
	printf("||00       000000    0000     0000    00000       000000     00  ||\n");
	printf(" =================================================================\n");
	printf("Pedro Henrique & Yan Sávio\n");
	printf("Digite o tamanho da sua matriz\n");
	scanf("%i", &tamanho);
	/*int count=0,count1=0, count2=0;
		srand( time(NULL) );
		int mat_flood_it[tamanho][tamanho];
		for (count = 0 ; count < tamanho ; count++){
			for (count1 = 0 ; count1 < tamanho ; count1++){
				for (count2 = 0; count2 < 6; count2++){
					//Atribuindo valores aleatórios à matriz;
					mat_flood_it[count][count1] = rand() % 6;
				}
			}
		}
		for (count = 0 ; count < tamanho ; count++){
			for (count1 = 0 ; count1 < tamanho ; count1++){
				printf("%i ", mat_flood_it[count][count1]);
			}
			printf("\n");
		}*/
return 0;
}
