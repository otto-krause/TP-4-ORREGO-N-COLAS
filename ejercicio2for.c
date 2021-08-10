#include<stdio.h>


int main(){
	
	int i, num,mayor=0;
	int total=0,total1=0;
	printf("ingrese 15 numeros: ");
	
	for(i=0;i<15;i++){
		
		
		
		scanf("%d",&num);
		
		total+=num;
		total1=total/15;
		
		if(num>mayor){
			mayor=num;
		}
	}
	
		printf("el valor promedio es de: %d \n",total1);
		printf("\nel valor mayor de los ingresados es: %d",mayor);
	
	return 0;
}
