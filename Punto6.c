#include <stdio.h>
#include <string.h>

int i;

int buscar(int *vec, int elem, int n){
	int cont;
	for(i = 0; i<n; i++){
	if(*(vec+i) == elem){
	 cont++;
	}
	}
	return cont;
}

void main(){
	int n;
	printf("Ingrese el tamaño del vector: ");
	scanf("%d",&n);
	int vec[n];
	int elem;
	for(i = 0; i<n; i++){
		printf("ingresar la posicion %d del vector: ", i+1);
		scanf("%d",&vec[i]);
	}
	printf("ingresar el elemento a buscar");
	scanf("%d",& elem);
	
	printf("El numero de veces que se encontro el elemento es: %d", buscar(vec,elem,n));
}
