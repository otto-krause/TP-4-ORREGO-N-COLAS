#include<stdio.h>
int main(){
  int j,i,suma2=0,v,mayor=0;
  for(i=0;i<20;i++){
    printf("ingrese sus ventas: ");
    int suma=0;
    for(j=0;j<15;j++){
      scanf("%d",&v);
      suma+=v;
    }
    printf("el total es: %d\n",suma);
    if(suma>mayor){
      mayor=suma;
    }
    suma2+=suma;
  }
  printf("el total ventido es: %d\n",suma2);
  printf("el mayor numero de ventas fue: %d\n",mayor);
  return 0;
}
