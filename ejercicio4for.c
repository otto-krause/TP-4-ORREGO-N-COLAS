#include<stdio.h>

int main(){
	
	int total,n1,i;
	
	printf("ingrese un numero: ");
	scanf("%d",&n1);
	
	for(i=1;i<n1;i++){
		
		total+=n1*i;
		
}
	printf("%d",total);		
			
	return 0;
	}
	
