#include<stdio.h>

int main(){
	
	int sueldo,mas=0,menos=0, i;
	
	printf("ingrese su sueldo: ");
	 
	 for(i=0;i<5;i++){
	 	
	 	scanf("%d",&sueldo);
	 	
	 	if(sueldo>2000){
	 		mas++;
		 }
		 else{
		 	menos++;
		 }
		 
		 
	 }
	 	printf("las personas que ganan mas de 2000 son: %d \n",mas);
		printf("las personas que ganan menos de 2000 son: %d",menos);
	
	return 0;
}
