/*5)Faça um algoritmo que calcule quantos dias
meses e anos uma pessoa já viveu. Para isto o
algoritmo receberá como entrada a data de
nascimento e a data atual.
Obs1: considere os meses com 30 dias
Obs2:para encerrar a entrada, deverá ser
informado dia do nascimento igual a zero.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int dianasc,mesnasc,anonasc,diaatual,mesatual,anoatual,anovivido,mesvividos,diasvividos=0;
	printf("Digite o dia do nascimento:\n");
	scanf("%i",&dianasc);
	while(dianasc>0)
	{
		printf("Digite o mês do nascimento:\n");
		scanf("%i",&mesnasc);
		printf("Digite o ano do nascimento:\n");
		scanf("%i",anonasc);
		printf("Digite o dia atual:\n");
		scanf("%i",diaatual);
		printf("Digite o mês atual:\n");
		scanf("i",mesatual);
		printf("Digite o ano atual:\n");
		scanf("i",anoatual);
		anovivido=anoatual-anonasc;
		mesvividos=anovivido*12;
		diasvividos=360*anovivido;
		printf("Você viveu %i anos, %i meses, %i dias.",anovivido,mesvividos,diasvividos);
		printf("Digite o dia do nascimento [DIGITE 0 PARA CANCELAR]:\n");
	    scanf("%i",&dianasc);
	}
	
}
