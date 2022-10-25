# Repositório criado exclusivamente para a matéria "Organização de Arquivos"
Para o funcionamento do código em C "BuscaBinariaCep.c", é preciso que o arquivo "cep_ordenado.dat" esteja presente na mesma pasta 
em que o BuscaBinariaCep.c. O programa serve para buscar um CEP, digitado pelo usuário, que esteja presente no arquivo cep_ordenado.dat
, dessa forma, para compilar o e executar o arquivo, digite "gcc -o "Nome do Executável" BuscaBinariaCep.c ".
Em seguida digite "./"Nome Do Executável" "Número do CEP que você deseja encontrar".
Dessa forma o arquivo irá compilar, e executar de forma correta, e caso encontre o cep digitado, irá mostrá-lo na tela, tudo isso
através da busca binária em disco. No meu exemplo, utilizei os CEPs 20521290 e 20550011
DETALHE: O arquivo, como já diz no nome, já está com os CEPs ordenados, dessa forma, não se faz necessário um algorítimo de ordenação.
