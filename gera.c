#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gera.h"
gera_mat Gerar (gera_mat tamanho ){
	//int tamanho=0;
	int count=0,count1=0, count2=0;
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
		}
	return 0;
}
