algoritmo "Criptografia de texto"
// Função : Criptografia de texto à partir de duas chaves que o usuário fornecer.
// Autores : Cibele Monalisa A. Silva;
// Thiago Marcelino Silva;
// Gabriel Naamã;
// Geovanna Kerolyn;
// Data : 25/06/2019
// Seção de Declarações
var
   chave1, chave2, mensagemlida: caracter
   vetorchave1: vetor[1..5] de caracter
   vetorchave2: vetor[1..5] de caracter
   vetormensagem: vetor[0..40] de caracter
   comprimentopalavra, i: inteiro

inicio
   // Seção de Comandos
   escreval ("Digite a primeira chave com 5 letras:")
   escreval ("Atenção! Não utilize caracteres especiais, nem letras repetidas!")
   leia (chave1)
   escreval ("Digite a segunda chave com 5 letras:")
   escreval ("Atenção! Não utilize caracteres especiais, nem letras repetidas!")
   leia (chave2)
   escreval ("Digite a mensagem a ser criptografada:")
   escreval ("Atenção! Não utilize caracteres especiais!")
   leia (mensagemlida)
   //armazenamento da chave 1
   para i de 1 ate 5 faca
      vetorchave1[i]<- copia(chave1,i,1)
   fimpara
   //armazenamento da chave 2
   para i de 1 ate 5 faca
      vetorchave2[i]<- copia(chave2,i,1)
   fimpara

   //armazenamento da mensagem
   comprimentopalavra<- compr(mensagemlida)
   para i de 1 ate comprimentopalavra faca
      vetormensagem[i]<- copia(mensagemlida,i,1)
   fimpara
   //recebimentos
   para i de 1 ate comprimentopalavra faca
      se (vetormensagem[i]=vetorchave1[1]) entao
         vetormensagem[i]<-vetorchave2[1]
      senao
         se (vetormensagem[i]=vetorchave1[2]) entao
            vetormensagem[i]<-vetorchave2[2]
         senao
            se (vetormensagem[i]=vetorchave1[3]) entao
               vetormensagem[i]<-vetorchave2[3]
            senao
               se (vetormensagem[i]=vetorchave1[4]) entao
                  vetormensagem[i]<-vetorchave2[4]
               senao
                  se (vetormensagem[i]=vetorchave1[5]) entao
                     vetormensagem[i]<-vetorchave2[5]
                  senao
                     se (vetormensagem[i]=vetorchave2[1]) entao
                        vetormensagem[i]<-vetorchave1[1]
                     senao
                        se (vetormensagem[i]=vetorchave2[2]) entao
                           vetormensagem[i]<-vetorchave1[2]
                        senao
                           se (vetormensagem[i]=vetorchave2[3]) entao
                              vetormensagem[i]<-vetorchave1[3]
                           senao
                              se (vetormensagem[i]=vetorchave2[4]) entao
                                 vetormensagem[i]<-vetorchave1[4]
                              senao
                                 se (vetormensagem[i]=vetorchave2[5]) entao
                                    vetormensagem[i]<-vetorchave1[5]
                                 senao
                                    vetormensagem[i]<-vetormensagem[i]
                                 fimse
                              fimse
                           fimse
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimpara
   escreval("--------------------------------------------------")
   escreval ("Texto original:")
   escreval(mensagemlida)
   escreval("Texto criptografado:")
   para i de 1 ate comprimentopalavra faca
      escreva(vetormensagem[i])
   fimpara
fimalgoritmo
