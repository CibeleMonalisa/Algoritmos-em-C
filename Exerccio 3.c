/*3)O munic�pio de Ceres deseja saber algumas caracter�sticas de sua popula��o. 
S�o elas: A quantidade de pessoas menores de idade; 
A quantidade de mulheres que possuem olhos claros;
A quantidade de homens que s�o morenos.
Total de pessoas entrevistadas. 
Fa�a ent�o um algoritmo que receba como entrada a idade, 
sexo(M ou F), cor dos olhos(verde, azul ou castanho), cor da pele (branca, morena ou preta). 
Para encerrar a entrada ser� informada uma idade negativa.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade,olhos,pele,cor,mulherolhoclaro,total,homensmorenos,menoridade,sexo=0;
	printf ("O munic�pio de Ceres deseja saber algumas caracter�sticas de sua popula��o.\n\n");
	printf("Qual a sua idade?:\n");
	scanf("%i",&idade);
	while (idade >=0 )
	{
		total=total+1;
		printf("Digite o sexo [1 para masculino / 2 para feminino]\n");
		scanf("%i",&sexo);
		printf("Digite a cor dos olhos [1 para verde/azul, 2 para castanho]:\n");
		scanf ("%i",&olhos);
		printf("Digite a cor da pele [ 1 para branca | 2 para morena | 3 para preta]:\n");
		scanf("%i",&cor);
		if(idade<18)
		{
			menoridade=menoridade+1;
		}
		if (sexo == 2 && olhos== 1)
		{
			mulherolhoclaro=mulherolhoclaro+1;
		}
		if(sexo ==1 && cor == 2)
		{
			homensmorenos=homensmorenos+1;
		}
	
		printf("Digite a idade:    [-1 PARA CANCELAR] :\n");
		scanf("%i",&idade);
	}
	printf(" %i S�o menores de idade\n",menoridade);
	printf(" %i S�o mulheres e possuem olhos claros\n",mulherolhoclaro);
	printf(" %i S�o homens e possuem pele morena\n",homensmorenos);
	printf(" Foram entrevistadas %i pessoas\n",total);
}

