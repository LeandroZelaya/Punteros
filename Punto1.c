#include <stdio.h>
#include <string.h>

void intercambiar(int *v1, int *v2){
	int sum = *v1 + *v2;
}

main(){
	
int a = 20, b = 10;
printf("Antes de intercambiar a= %d b= %d", a, b);
intercambiar(&a,&b);
printf("\nDespues de intercambiar a= %d b= %d", a, b);

}
