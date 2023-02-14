//inicialmente, o algoritmo deve exibir as informações da tabela anterior. Em seguida,
//o algoritmo deve solicitar e ler o código do item desejado e a quantidade de tal item.
//Por fim, o algoritmo deve calcular e exibir o valor a ser pago. Considere que, a cada
//execução do algoritmo, o cliente só pode escolher um item, variando apenas sua
//quantidade


algoritmo "Cardápio"

var
c, q:inteiro

inicio
   escreval ("=================================================")
   escreval (" CÓDIGO DO ITEM  |ESPECIFICAÇÃO      |PREÇO UNITÁRIO")
   escreval ("  100            | Cachorro quente   |     R$ 7,00")
   escreval ("  101            |  Bauru            |     R$ 8,00")
   escreval ("  102            | X-Salada          |      R$ 9,00")
   escreval ("  103            | Hambúrguer        |       R$ 10,00")
   escreval ("  104            | Refrigerante(lata)|       R$ 3,00")
   escreval ("================================================")

   escreval ("Digite o código do item desejado:")
   leia (c)
   escreval ("=============================================")
   escreval ("Digite a quantidade desejada:")
   leia (q)
   escreval ("=============================================")
   escolha (c)

 caso 100
     escreval ("o valor a ser pago é: R$", q * 7:2:2)
 caso 101
     escreval ("o valor a ser pago é: R$", q * 8:2:2)
 caso 102
     escreval ("o valor a ser pago é: R$", q * 9:2:2)
 caso 103
     escreval ("o valor a ser pago é: R$", q * 10:2:2)
 caso 104
     escreval ("o valor a ser pago é: R$", q * 3:2:2)
     
     outrocaso
     
     escreval ("Você digitou a opção inválida:")

     escreval ("====================================")
     fimescolha
fimalgoritmo
