/* Faça um algorítimo que lê uma string e retorna a string invertida*/
#include <stdio.h>
#include <locale.h>
#include <string.h>


int main()
{
	setlocale(LC_ALL,"Portuguese");
	char string[100];
	int i, t=0;
	printf("Digite uma string para que possa ser invertida:\n");
	fgets(string,100,stdin);
	t=strlen(string);
	for (i=t;i>=0;i--)
	{
		printf("%c",string[i]);
	}
}
