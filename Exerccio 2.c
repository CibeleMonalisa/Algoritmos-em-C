/*2)A escola �mega necessita de um algoritmo para verificar se
o estudante foi aprovado, est� de recupera��o ou foi
reprovado. As condi��es s�o:
Caso a frequ�ncia seja maior ou igual a 75% das aulas e a
m�dia final seja:
Maior ou igual a 6,0: aprovado;
Maior ou igual a 2 e menor que 6,0: recupera��o
Menor que 2: reprovado.
Caso a frequ�ncia seja menor que 75% o estudante est�
reprovado.
Diante do exposto, fa�a um algoritmo que receba a carga
hor�ria da disciplina(em aulas), a frequencia e a m�dia final
de 30 alunos e apresente para cada um deles sua situa��o. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	float porcaprov,mediafinal=0;
	int i,cont,cargaaula,presenca=0;
	for(i=1;i<=30;i++)
	{
		printf("Digite a Carga hor�ria (EM AULAS) da disciplina:\n");
		scanf("%i",&cargaaula);
		printf("Digite a frequ�ncia (EM AULAS) do aluno:\n");
		scanf("%i",&presenca);
		porcaprov=(presenca*100)/cargaaula;
		if (porcaprov>=75)
		{
			printf("Digite a media final do aluno:\n");
			scanf("%f",&mediafinal);
			if(mediafinal > 6)
			{
				printf("O Aluno est� aprovado. Est� na m�dia e com frequ�ncia regular\n");
			}
			if(mediafinal <6 && mediafinal >=2)
			{
				printf("O aluno est� de recupera��o ! A frequ�ncia est� regular.\n");
			}else
			if(mediafinal <2)
			{
				printf ("O aluno reprovou ! Frequ�ncia regular por�m as notas est�o fora de recupera��o.\n");
			}
		}else
		if(porcaprov<75)
		{
			printf ("O aluno reprovou. A frequ�ncia est� abaixo da m�dia presencial.\n");
		}
	}
		return 0;}	
