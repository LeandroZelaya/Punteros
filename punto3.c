#include <stdio.h>
#include <string.h>

int i;

int mayor(int *arr, int n){
	int max  =arr[0];
	for(i = 0; i<n; i++){
		if(arr[i]> max){
			max = arr[i];
		}
	}
	return max;
}
int menor(int *arr, int n){
	int men  =arr[0];
	for(i = 0; i<n; i++){
		if(arr[i]< men){
			men = arr[i];
		}
	}
	return men;
}

void main(){
	int n;
	printf("Ingrese el tamaño del vector: "),
	scanf("%d",&n);
	int vec[n];
	for(i = 0; i<n; i++){
		printf("ingresar la posicion %d del vector: ", i+1);
		scanf("%d",&vec[i]);
	}
	printf("El mayor es %d\n",mayor(vec,n));
	printf("El menor es %d",menor(vec,n));
}
