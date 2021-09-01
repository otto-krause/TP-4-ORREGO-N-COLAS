#include<stdio.h>
int main(){
	
	int total=1,n1=0,i;
	
	printf("ingrese un numero: ");
	scanf("%d",&n1);
	
	for(i=1;i<=n1;i++){

		total=total*i;
		
	}
	
	printf("\nel factorial del numero es: %d",total);
	return 0;
}

	
