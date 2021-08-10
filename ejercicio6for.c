/*
Un curso tiene 30 alumnos identificados con números del 1 al 30 por
cada alumno se ingresan las notas correspondientes a 10 materias, calcu-
lar el promedio por cada alumno y el promedio general del curso.
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int nota,i,j;
	float final;
	
	for (i=0;i<=30;i++){
		
		
		printf("\ningrese las notas de este alumno: ");
		int suma=0;
		for (j=0;j<10;j++){
			
			scanf("%d", &nota);
				
				suma+=nota;
				final=suma/10;
		}			
		
			
			printf("\n\n Su nota final es: %f \n",final);
			system("pause");
			system("cls");
			
			suma+=nota;
			final=suma/300;
			
			printf("\n\n Su nota final es: %f \n",final);
			system("pause");
			system("cls");
	}
	
   return 0;
}
