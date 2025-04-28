#include <stdio.h>
#include <string.h>

char *concatenar(char *ptr[], char *ptr2[]){
	strcat(ptr, ptr2);
	return ptr;
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
	
	printf("%s",concatenar(str, str2));
}
