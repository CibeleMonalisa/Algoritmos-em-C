/*2)A escola Ômega necessita de um algoritmo para verificar se
o estudante foi aprovado, está de recuperação ou foi
reprovado. As condições são:
Caso a frequência seja maior ou igual a 75% das aulas e a
média final seja:
Maior ou igual a 6,0: aprovado;
Maior ou igual a 2 e menor que 6,0: recuperação
Menor que 2: reprovado.
Caso a frequência seja menor que 75% o estudante está
reprovado.
Diante do exposto, faça um algoritmo que receba a carga
horária da disciplina(em aulas), a frequencia e a média final
de 30 alunos e apresente para cada um deles sua situação. */
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
		printf("Digite a Carga horária (EM AULAS) da disciplina:\n");
		scanf("%i",&cargaaula);
		printf("Digite a frequência (EM AULAS) do aluno:\n");
		scanf("%i",&presenca);
		porcaprov=(presenca*100)/cargaaula;
		if (porcaprov>=75)
		{
			printf("Digite a media final do aluno:\n");
			scanf("%f",&mediafinal);
			if(mediafinal > 6)
			{
				printf("O Aluno está aprovado. Está na média e com frequência regular\n");
			}
			if(mediafinal <6 && mediafinal >=2)
			{
				printf("O aluno está de recuperação ! A frequência está regular.\n");
			}else
			if(mediafinal <2)
			{
				printf ("O aluno reprovou ! Frequência regular porém as notas estão fora de recuperação.\n");
			}
		}else
		if(porcaprov<75)
		{
			printf ("O aluno reprovou. A frequência está abaixo da média presencial.\n");
		}
	}
		return 0;}	
