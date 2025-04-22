#include <stdio.h>
#include <string.h>
int i ;

int sumar(int *arr, int n){
	int suma=0;
	for(i = 0; i<n ; i++){
		suma += *(arr +i);
	}
	return suma;
}

float prom(int *arr, int n){
	float prom = 0;
	prom = sumar(arr, n) / n;
	
	return prom;
}

void main(){
int n, i;
printf("ingrese el tamaño del vector: ");
scanf("%d",& n);
int vec[n];

for(i = 0 ; i<n; i++){
	printf("ingrese la posicion n%d: ",i+1);
	scanf("%d",& vec[i]);
	}
	
	printf("la suma es: %d\n", sumar(vec,n));
	printf("el promedio es: %f", prom(vec,n));
}
