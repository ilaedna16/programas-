const nomeCompleto = prompt("Digite seu nome completo: "); 
const anoNascimento =  parseInt(prompt("Digite o ano de nascimento: "));

const salarioMensal = parseFloat(prompt("Digite o seu salario mensal em reais: R$ "));
 

const qtdFilhos = parseInt(prompt("Digite a quantidade de filhos que voce tem: "));

const idade = 2023 - anoNascimento; 

const aposentadoria = ((70 - idade) * 12) * salarioMensal; 

const divFilhos = salarioMensal / qtdFilhos;

alert(`Olá, ${nomeCompleto}, tudo bem? Voce tem ${idade} anos de idade, seu salario e ${salarioMensal.toFixed(2)} e recebera ${aposentadoria.toFixed(2)}
