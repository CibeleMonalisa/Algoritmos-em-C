/*1)Fa�a um algoritmo que calcule quantos dias uma pessoa j� viveu. 
Para isto o algoritmo receber� como entrada a idade da pessoa.
Obs1: considere os meses com 30 dias  
Obs2:para encerrar a entrada, dever� ser informada idade igual a zero.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade,resultado=0;
	printf("C�DIGO PARA DESCOBRIR QUANTOS DIAS DE VIDA VOC� VIVEU [ DIGITE 0 PARA ENCERRAR] \n");
	printf("Digite sua idade:\n");
	scanf("%i",&idade);
	do
	{
		resultado=(idade*360);
	printf("Voc� viveu %.0i dias\n !!",resultado);
	printf("Digite sua idade [ 0 PARA CANCELAR]:\n");
	scanf("%i",&idade);
	}while (idade ==0);
	
	
}
