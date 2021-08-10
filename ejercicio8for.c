#include<stdio.h>

int main() {
	
	int num1,i;
	int c1=0,c2=0,c3=0;
	
	printf("ingrese 10 numeros: ");
	
	
	for(i=0; i<10;i++){
		
		scanf("%d", &num1);
		
		if(num1>0){
			c1++;
		}
		else if(num1<c2){
			c2++;
		}
		else{
			c3++;
		
      } 
	}	
	
	
	printf("los numeros mayores a 0 son: %d \n",c1);
	printf("los numeros iguales a 0 son: %d \n",c3);
	printf("los numeros menores a 0 son: %d \n",c2);
	
	return 0;
}
