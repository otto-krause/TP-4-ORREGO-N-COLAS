#include<stdio.h>

int main(){
	
	int unidad=0,j=0,i=0,mayor=0;
	
	
	
	for (i=0;i<15;i++){
		float total=0;
		printf("ingrese la cantidad de unidades vendidas: ");
		
		for(j=0; j<15;j++){
		
		scanf("%d", &unidad);
		
		total+=unidad;
		
	
		}
			if(total>mayor){
			
			mayor=total;
	}
		
		
		
		
		printf(" el total es: %f \n",total);
	}
	
	
		printf("el numero mayor a todos es: %d", mayor);
		
	
	return 0;
}
