#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
	pid_t childpid = 0;
	int i, n;
	
	if (argc != 2){ // Garante que a quantidade de parametros seja 2
		fprintf(stderr, "Usage: %s processes\n", argv[0]); // Imprime erro para sys.stderr caso a quantidade de args seja incorreta
		return 1; // Retorna Falha
	}
	
	n = atoi(argv[1]); // String para Int
	
	for (i = 1; i < n; i++) // Gera i processos filho
		if (childpid = fork()){ 
			break;
		}
	fprintf(stdout, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n", // Imprime ID de Processo, Pai e Filho
			i, (long)getpid(), (long)getppid(), (long)childpid);
	return 0;
}
