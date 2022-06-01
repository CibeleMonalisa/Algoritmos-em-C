/*3)O município de Ceres deseja saber algumas características de sua população. 
São elas: A quantidade de pessoas menores de idade; 
A quantidade de mulheres que possuem olhos claros;
A quantidade de homens que são morenos.
Total de pessoas entrevistadas. 
Faça então um algoritmo que receba como entrada a idade, 
sexo(M ou F), cor dos olhos(verde, azul ou castanho), cor da pele (branca, morena ou preta). 
Para encerrar a entrada será informada uma idade negativa.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade,olhos,pele,cor,mulherolhoclaro,total,homensmorenos,menoridade,sexo=0;
	printf ("O município de Ceres deseja saber algumas características de sua população.\n\n");
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
	printf(" %i São menores de idade\n",menoridade);
	printf(" %i São mulheres e possuem olhos claros\n",mulherolhoclaro);
	printf(" %i São homens e possuem pele morena\n",homensmorenos);
	printf(" Foram entrevistadas %i pessoas\n",total);
}

