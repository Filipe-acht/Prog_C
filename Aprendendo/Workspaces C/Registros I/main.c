#include <stdio.h>
#include <stdlib.h>
/*
	TIPOS DE DADOS:

		* Escalares -> tipo primitivo: int, char, float, double.
			** int nota;
		* Arranjos/Arrays/Vetores -> vari�veis do mesmo tipo;
			** int notas[10];
		* Registros ou Estruturas:
			** Diversar vari�veis de quaisquer tipos;
			** Agrupa informa��es relacionadas em uma mesma vari�vel;
			** Cria��o de um novo tipo de vari�vel;
	SINTAXE:
		* struct nomeEstrutura {
				tipo nomeVariavel11;
				tipo nomeVariavel12;
		...
				tipo nomeVariavel1N;
			};
*/
struct ponto {
    int x;
    int y;
    int z;
};

int main() {
    struct ponto meuPonto;
        meuPonto.x = 12;
        meuPonto.y = 35;
        meuPonto.z = 6.7;
        printf("meu ponto x = %d\n", meuPonto.x );
        printf("meu ponto y = %d\n", meuPonto.y );
        printf("meu ponto z = %d\n", meuPonto.z );
}
