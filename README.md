# SO Lab 3
Lab 3 de Sistemas operacionais

Tema: Fork e Processos

## Grupo

Igor Soler Cavalcanti - 42013550

Paloma de Sousa Bezerra - 32094264

Rafael Miranda Ferreira - 42080932


## Como Executar o Código

Compile e Execute o arquivo main.c em seu compilador de escolha (GCC foi o Utilizado)

Possíveis comandos para compilar o programa

`make main.c`

`gcc .\main.c`

Possível comando para executar o programa após compilá-lo

`./main`

## Como utilizar o Programa

Estes programas recebem de argumentos de linha de comando. Desta forma, qualquer input do usuario é dado da sequinte forma ao executar o programa:

`./nome_executavel input`

Neste caso o nome do executavel será provavelmente `main` e o input será a quantidade de processos que deseja criar.

Ex: `./main 5`

# Perguntas

## 1- As mensagens impressas pelo programa sempre estarão com o i ordenado independente do valor de i?

Não! Como alguns processos se finalizam antes de outros, algumas chamadas acontecem antes ou depois.

## 2- O que acontece se o programa imprimir para sys.stdout, ao invés de para sys.stderr?

stdout = Standard Output

stderr = Standard Error

Por padrão, ambos imprimem no terminal, e é isto o que acontece quando substituimos o `fprintf(stderr...` por `fprintf(stdout...`

Entretanto, é importante manter as mensagens de erro em sys.stderr e as mensagens de output em sys.stdout porque é possível redirecionar estas saídas para outro arquivo com base no tipo de saída que é. 

Por exemplo seria possível criar um arquivo log_erros.txt que salva apenas as saídas de stderr de um programa com o seguinte comando

`./main 2> log_erros.txt`

Desta mesma forma, seria possível criar um arquivo log_outputs.txt que salva apenas as saídas de stdout de um programa com o seguinte comando

`./main 1> log_outputs.txt`

Os comandos `1>` e `2>` respectivamente salvam as linhas stdout e stderr para um arquivo a sua escolha, este arquivo por até mesmo ser um sys.stdout por exemplo, isso é utilizado para transformar os erros de um programa em output, para assim salvar todas as mensagens em apenas um lugar.

