/*4)A loja Economics está com uma promoção,
onde o cliente receberá desconto conforme
descrição abaixo:
Total acima de 500,00: desconto de 25%
Total abaixo de 200,00 e acima de 500,00:
desconto de 10%;
Abaixo de 200,00: desconto de 5%
Os produtos disponíveis e respectivos
códigos são:

Código       Produto                 Preço
1            Calça Jeans            R$200,00
2            Jaqueta Jeans          R$100,00
3            Bermuda Jeans          R$150,00
4            Camiseta de algodão     R$50,00

Os dados de entrada serão: código e
quantidade. A saída deverá mostrar o total da
compra, o valor do desconto o total final a ser
pago pelo cliente.
Obs.: código igual a zero representa o fim da
entrada de dados*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int codigo=0;
	float total=0,desc,quantidade,descmaior500,descmenor500,descmenor200=0;
	float camiseta_de_algodao,bermuda_jeans,jaqueta_jeans,calca_jeans;
	calca_jeans=200;
	jaqueta_jeans=100;
	bermuda_jeans=150;
	camiseta_de_algodao=50;
	printf("Os produtos disponíveis e respectivos códigos são:\n");
	printf("Código     Produto                 Preço\n");
	printf("1          Calça Jeans            200,00\n");
	printf("2          Jaqueta Jeans          100,00\n");
	printf("3          Bermuda Jeans          150,00\n");
	printf("4          Camiseta de algodão     50,00\n");
	printf("Digite o código da compra:\n");
	scanf("%i",&codigo);
	while(codigo>0)
	{
		printf("Digite a quantidade adquirida pelo cliente:\n");
		scanf("%f",&quantidade);
		if(codigo==1)
			total=total+(calca_jeans*quantidade);
		else
			if(codigo==2)
				total=total+(jaqueta_jeans*quantidade);
			else
				if(codigo==3)
					total=total+(bermuda_jeans*quantidade);
				else
					if(codigo==4)
						total=total+(camiseta_de_algodao*quantidade);
		printf("Digite o código da compra:\n");
       	scanf("%i",&codigo);
	}
	printf("\n%.2f\n",total);
	if (total>=500)
	{
		descmaior500=total-(total*0.25);
		printf("O valor total é:%.2f\n",total);
        printf ("O Total com desconto é %.2f:\n",descmaior500);
	}
	else 
		if (total >= 200)
		{
	    	descmenor500=total-(total*0.1);
	    	printf("O valor total é:%.2f\n",total);
        	printf ("O Total com desconto é %.2f:\n",descmenor500);
		}
		else
			if(total < 200)
			{
  				descmenor200=total-(total*0.05);
    			printf("O valor total é:%.2f\n",total);
    			printf ("O Total com desconto é %.2f:\n",descmenor200);
			}
	return 0;
}
	

