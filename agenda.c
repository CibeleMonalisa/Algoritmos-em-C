#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define max 5

//struct para fazer o registro dos contatos
 struct pessoas {
	int id;
	char nome[80];
	char endereco [80];
	float telefone;
	char email[50];	
};
//max � uma constante definida no in�cio do c�digo
//vari�vel para fazer a contagem
int j=0;
//fun��o para adicionar os contatos na agenda
void adicionar(struct pessoas *contato)
{ 
		
		setlocale(LC_ALL,"Portuguese");
		printf("------------------------------Novo contato------------------------------ \n");
		j=j+1;
		contato[j].id = j;
		if(contato[j].telefone==0)
		{
		contato[j].id = j;
   		printf(" Id: %d\n",contato[j].id);
		printf("Nome: \n");
		setbuf(stdin,NULL);
		fgets(contato[j].nome,80,stdin);
		printf("Endere�o: \n");
		setbuf(stdin,NULL);
		fgets(contato[j].endereco,80,stdin);
		printf("Telefone: \n");
		scanf("%f",&contato[j].telefone);
		if(contato[j].telefone!=0)
		{
		printf("E-mail: \n");
		setbuf(stdin,NULL);
		fgets(contato[j].email,50,stdin);
		}
		else
		{
			do
			{
			
			printf("telefone inexistente refa�a seu cadastramento do numero:\n");
			printf("Telefone: \n");
			scanf("%f",&contato[j].telefone);
			}while (contato[j].telefone==0);
			printf("E-mail: \n");
			setbuf(stdin,NULL);
			fgets(contato[j].email,50,stdin);
			
		}
	}
	}
//fun��o para pesquisar contatos pelo id
void pesquisa(struct pessoas *contato)
{
	setlocale(LC_ALL,"Portuguese");
	int dado, cod, i, cont;
	printf("Informe o id do contato a ser pesquisado \n");
	scanf("%i",&cod);
	for(i=0;i<=j;i++)
	{
		if(cod==contato[cod].id)
		{
			printf("----------------------Detalhes do contato:---------------------- \n");
        	printf("Id: %i\n",contato[cod].id);
        	printf("Nome: %s\n",contato[cod].nome);
        	printf("Endere�o: %s\n",contato[cod].endereco);           
        	printf("Telefone: %.0f\n",contato[cod].telefone);
        	printf("E-mail: %s \n",contato[cod].email);
        cont++;
		}
		else
		{
		
			if(cont==0)
			{
				printf("O contato com esse id n�o foi encontrado!\n");
			}
		system ("PAUSE");
		system("cls");		
		}
	}
	}	


//fun��o para editar contatos
void editar(struct pessoas *contato)
{
	setlocale(LC_ALL,"Portuguese");
	int resp, i, cont,cod;
	if(j==0)
	{
		printf("Erro! Ainda n�o h� contatos registrados \n"); //quando o usuario tentar digitar um id sem registro algum na agenda	
	}  													// aparecer� essa mensagem.
		else
			if(j!=0){                                                      
			printf("Informe o id do contato a ser editado: \n"); 
   			 scanf("%i", &cod);
   			}
    for(i = 1;i <= j; i++)
    {
    	if(contato[cod].id!=cod)
    	{
    		printf("Id n�o registrado!\n");
		}
		else
    		if(cod == contato[i].id)
			{
    			cont++;
			}	
	}
					if(cont!=0)
					{
           				setlocale(LC_ALL,"Portuguese");
						printf("Escolha uma op��o para editar: \n ");
						printf("Tecle 1 para editar o nome: %s \n ",contato[cod].nome);
						printf("Tecle 2 para editar o endere�o:%s\n ",contato[cod].endereco);
						printf("Tecle 3 para editar o telefone: %.0f \n ",contato[cod].telefone);
						printf("Tecle 4 para editar o email: %s\n",contato[cod].email);
						printf("digite: ");
						scanf("%i",&resp);

    
						if(resp==1){
						printf("Digite o novo nome do contato:\n ");
						fflush(stdin);
   					 	fgets(contato[cod].nome, 80, stdin);
						}
						if(resp==2){
						printf("Digite o novo endere�o do contato: \n");
						fflush(stdin);
  		 	   			fgets(contato[cod].endereco, 80, stdin);
						}
						if(resp==3){
						printf("Digite o novo telefone do contato: \n");
						scanf("%f",&contato[cod].telefone);
						}
						if(resp==4){
						printf("Digite o novo e-mail do contato: \n");
						fflush(stdin);
  			    		fgets(contato[cod].email, 50, stdin);
						}
						if(contato[cod].id = cod){
						printf("----------------------Detalhes do contato:---------------------- \n");
  			 			printf("Id: %i\n",contato[cod].id);
  			 			printf("Nome: %s\n",contato[cod].nome);
  						printf("Endere�o: %s\n",contato[cod].endereco);           
   						printf("Telefone: %.0f\n",contato[cod].telefone);
			   			 printf("E-mail: %s \n",contato[cod].email);	
						}
					}
	system ("PAUSE");
	system("cls");
}

//fun��o excluir
void excluir(struct pessoas *contato)
{
	int op,i;
	int resp;
	setlocale(LC_ALL,"Portuguese");
	if(j==0)
	{
		printf("Erro! Ainda n�o h� contatos registrados \n"); 
		//quando o usuario tentar digitar um id sem registro algum na agenda	
	}  	// aparecer� essa mensagem.
	else
		
		if(j>=1){                                                      
		printf("Informe o id do contato a ser exclu�do: \n"); 
   		scanf("%i", &op);
   		if(contato[op].id=op)
   		{
   				printf("Id: %i\n",contato[op].id);
        		printf("Nome: %s\n",contato[op].nome);
        		printf("Endere�o: %s\n",contato[op].endereco);           
        		printf("Telefone: %.0f\n",contato[op].telefone);
        		printf("E-mail: %s \n",contato[op].email);
        		printf("\n");
        		printf("deseja mesmo apagar o contato:\t");
        		printf("[1]sim ----[2]n�o\n");
        		printf("digite sua resposta: ");
        		scanf("%d",& resp);
        		
		}
		

		
		if(resp==1)
   		if(contato[op].id=op){
		   	
			memset(&contato[op].email,0, sizeof(contato[op].email));
   			memset(&contato[op].endereco,0, sizeof(contato[op].endereco));
   			memset(&contato[op].nome,0, sizeof(contato[op].nome));
   			memset(&contato[op].telefone,0, sizeof(contato[op].telefone));
   			contato[op].telefone==0;
   		}
   		
	
  		for(i = 0;i< j; i++)
  	   {
  	   		if(contato[op].id>0)
  	   		{
  	   			printf("---------Contato Salvo---------\n");
  	   			printf("Id: %i\n",contato[i].id);
        		printf("Nome: %s\n",contato[i].nome);
        		printf("Endere�o: %s\n",contato[i].endereco);           
        		printf("Telefone: %.0f\n",contato[i].telefone);
        		printf("E-mail: %s \n",contato[i].email);
        		printf("\n");
        		system ("PAUSE");
				system("cls");
			}	 	
 	   }
	}
 	   else
		{
		
    	system ("PAUSE");
		system("cls");
  		 }
	
}
void armazenamento(struct pessoas*contato)
{
	 int espacoLivre=0,espacoUsado=0;
	int i;
	system("cls");

		for(i=1;i<=5;i++)
		{
		
			if(contato[i].telefone >=1)
			{
			
				espacoUsado++;
			}
			else

			{
			
				espacoLivre++;
			}
			
		}
	printf("Qualtindade de espa�o livre : %i\n ",espacoLivre);
	printf("Quantidadde de espa�o ocupado: %i\n",espacoUsado);
	system("pause");
	
	
	}

//fun��o para listar todos os registros
void listar(struct pessoas *contato)
{
	setlocale(LC_ALL,"Portuguese");
	int i;
    
	
	for(i = 0;i< j; i++)
    {
	
    	if(contato[i].telefone>=1)
    {
       	 	printf("Id: %i\n",contato[i].id);
        	printf("Nome: %s\n",contato[i].nome);
        	printf("Endere�o: %s\n",contato[i].endereco);           
        	printf("Telefone: %.0f\n",contato[i].telefone);
        	printf("E-mail: %s \n",contato[i].email);
        	printf("\n");
    }
    
	}
	system ("PAUSE");
	system("cls");
}
//fun��o menu
int menu(struct pessoas *contato)
{
	int opcao;
	do{
	setlocale(LC_ALL,"Portuguese");
	printf("------------------------------MENU------------------------------ \n");
	printf("Escolha dentre as op��es \n");
	printf("1- Cadastrar novo contato \n");
	printf("2- Pesquisar um contato \n");
	printf("3- Editar um contato \n");
	printf("4- Excluir um contato \n");
	printf("5- Exibir armazenamento da agenda \n");
	printf("6- Listar todos os contatos da agenda \n");
	printf("7- Para encerrar \n");
	printf("\n Escolha a op��o: ");	
	scanf("%i",&opcao);
	}while((opcao>=8)&&(opcao<=0));
	
	system("cls");	
	return opcao;
 	
	
}

//fun��o principal com menu
int main()
{
	struct pessoas contato[5];
	int opcao,i;

	opcao=menu(contato);
	for (i=1;i<=5;i++)
	{
		contato[i].telefone=0;
	}
	
if((opcao>=0)&&(opcao<=7))
{
	
	while(opcao!=7)
	{
		

		if(opcao==1)
		{
			if(j>=max)
               	{
               		printf(" Informamos que a agenda est� em seu limite de cadastros!\n\n");
                	system("cls");
                	system("PAUSE");
				}  
				else    
             		if(j < max)
              		{
               			adicionar(contato);
                 		printf(" Dados inseridos com sucesso!\n\n");
                 		system("cls");
                 		system("PAUSE");
               		}  		  
		}
		if(opcao==2)
		{
			if(j==0){
			printf("Ainda n�o h� registros no sistema \n");
			system("cls");
			system("PAUSE");
			}
			
			else
				if(j!=0)
			pesquisa(contato);	
		}
		if(opcao==3)
		{
			
            editar(contato);
		}
		
		if(opcao==4)
		{
		excluir(contato);
		}
		if(opcao==5)
		{
		armazenamento(contato);	
		}
		if(opcao==6)
		{
			if(j == 0)
               {
                 	printf("A agenda ainda n�o possui dados!\n");
                 	system("cls");
                 	system("PAUSE");
               }
			else
               	if(j!=0)
              	{
                 	printf("Listagem de todos os contatos inseridos\n\n");
                 	listar(contato+1);
             	}
		}
		if(opcao==7)
		{	
			printf("-----------------------Programa encerrado----------------------- \n");
            system("cls");
            system("PAUSE");
			return 0;
		}
		if(opcao<1 || opcao>7)
		{
			printf("Op��o inv�lida! \n");
			system("cls");
			system("PAUSE");
		}
			
		opcao=menu(contato);
	}
	return 0;
}
else
{
	
	printf("!!!!|op��o invalida|!!!!\n");
	printf("regidite a op��o correta\n");
	opcao=menu(contato);
	
}

}





