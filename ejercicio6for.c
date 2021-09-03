/*
Un curso tiene 30 alumnos identificados con números del 1 al 30 por
cada alumno se ingresan las notas correspondientes a 10 materias, calcu-
lar el promedio por cada alumno y el promedio general del curso.
*/

#include<stdio.h>
int main(){
  int suma2=0,n,i,j;
  for(i=0;i<30;i++){
    printf("ingrese la nota de este alumno: ");
    int suma=0;
    for(j=0;j<10;j++){
      scanf("%d",&n);
      suma+=n;
    }
    printf("el promedio es: %d\n",suma/10);
    suma2+=suma;
  }
  printf("el promedio del curso es: %d",suma2/300);
  return 0;
}
