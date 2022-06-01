/*1)Faça um algoritmo que calcule quantos dias uma pessoa já viveu. 
Para isto o algoritmo receberá como entrada a idade da pessoa.
Obs1: considere os meses com 30 dias  
Obs2:para encerrar a entrada, deverá ser informada idade igual a zero.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade,resultado=0;
	printf("CÓDIGO PARA DESCOBRIR QUANTOS DIAS DE VIDA VOCÊ VIVEU [ DIGITE 0 PARA ENCERRAR] \n");
	printf("Digite sua idade:\n");
	scanf("%i",&idade);
	do
	{
		resultado=(idade*360);
	printf("Você viveu %.0i dias\n !!",resultado);
	printf("Digite sua idade [ 0 PARA CANCELAR]:\n");
	scanf("%i",&idade);
	}while (idade ==0);
	
	
}
