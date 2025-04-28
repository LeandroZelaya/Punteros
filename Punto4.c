#include <stdio.h>
#include <string.h>
int i;

int copiar(int *vec,int *vec2, int n){
	for(i= 0; i<n; i++){
		*(vec+i) = *(vec2 + i);
	}
	return vec2;
}

void main(){
	int n = 10;
	int vec[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
	int vec2[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	
	printf("El vector sin modificar es:");
	for(i= 0; i<n; i++){
		printf("%d, ", vec[i]);
	}
	copiar(vec,vec2,n);
	printf("\nel vector modificado es: ");
	for(i= 0; i<n; i++){
	printf("%d,", vec2[i]);
}
	}	
	

