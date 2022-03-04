# SO Lab 3: Fork e Processos
Lab 3 de Sistemas operacionais

## Grupo
Igor Soler Cavalcanti - 42013550

Paloma de Sousa Bezerra - 32094264

Rafael Miranda Ferreira - 42080932


# Como Executar o Código
Compile e Execute o arquivo main.c em seu compilador de escolha (GCC foi o Utilizado)

Possíveis comandos para compilar o programa

`make main`

`gcc .\main.c`

Possível comando para executar o programa após compilá-lo
`./main`

## Como utilizar o Programa

Estes programas recebem de argumentos de linha de comando. Desta forma, qualquer input do usuario é dado da sequinte forma ao executar o programa:

`./nome_executavel input`

### Executando exemplo 1

`make exemplo_1`

`./exemplo_1`



### Executando exemplo 2

`make exemplo_2`

`./exemplo_2`

### Executando exemplo 3

`make exemplo_3`

`./exemplo_3`

### Executando exemplo 4

`make exemplo_4`

`./exemplo_4`

### Executando exemplo 5

`make exemplo_5`

`./exemplo_5 input`

input = Numero de Processos que deseja criar

# Perguntas

## 1- As mensagens impressas pelo programa exemplo_5 sempre estarão com o i ordenado independente do valor de i?

Não! Como alguns processos se finalizam antes de outros, algumas chamadas acontecem antes ou depois.

## 2- O que acontece se o programa exemplo_5 imprimir para sys.stdout, ao invés de para sys.stderr?

- stdout = Standard Output

- stderr = Standard Error

Por padrão, ambos imprimem no terminal, e é isto o que acontece quando substituimos o `fprintf(stderr...` por `fprintf(stdout...`

Entretanto, ao utilizar a saida sys.stdout, o texto será armazenado como uma saída, já em sys.stderr será armazenado como erro

Desta forma, é importante manter as mensagens de erro em sys.stderr e as mensagens de output em sys.stdout, como é possível redirecionar estas saídas para outro arquivo com base no tipo de saída que é. 

Por exemplo, seria possível criar um arquivo erros.txt que salva apenas as saídas de stderr de um programa com o seguinte comando

`./exemplo_5 2> erros.txt`

E desta mesma forma é possível criar um arquivo outputs.txt que salva apenas as saídas de stdout de um programa com o seguinte comando

`./exemplo_5 1> outputs.txt`

Os comandos `1>` e `2>` respectivamente salvam as linhas de sys.stdout e sys.stderr para um arquivo a sua escolha, este arquivo por até mesmo ser um sys.stdout por exemplo, isso pode ser utilizado para transformar os erros de um programa em output, para assim salvar todas as mensagens em apenas um lugar.

