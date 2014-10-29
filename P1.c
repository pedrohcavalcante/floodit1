#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
//Biblioteca para que possam ser gerados os números de forma aleatória.
#include <time.h>

int main (void){
//Matriz do programa;
int mat_flood_it[14][14];
//Contadores;
int flood;

int count=0,count1=0, count2=0;
for (count = 0 ; count < 14 ; count++){
	for (count1 = 0 ; count1 < 14 ; count1++){
		for (count2 = 0; count2 < 6; count2++){
           //gerando valores aleatórios entre 0 e 6;
           flood = (rand() % 6);
           //Atribuindo valores aleatórios à matriz;
           mat_flood_it[count][count1] = flood;
		}
	}
}
for (count = 0 ; count < 14 ; count++){
	for (count1 = 0 ; count1 < 14 ; count1++){
		//Imprimindo a matriz com os valores aleatórios.
		printf("%i ", mat_flood_it[count][count1]);
	}
	printf("\n");
}
 
//getch();
return 0;
}
