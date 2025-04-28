#include <stdio.h>
#include <string.h>
int i;

concatenar(int *str, int *str2){
	
}


void main(){
	char str[100];
	char str2[100];
	
	printf("ingresar la cadena: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("ingresar la cadena: ");
	fgets(str2,sizeof(str2),stdin);
	str[strcspn(str2, "\n")] = '\0';
	
	concatenar(str, str2);
}
