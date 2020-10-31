#include <stdio.h>
#include <string.h>
#include <helper.h>
#include <busca.h>

int main()
{
	printf("\n");

	char r = 'x';
	printf("Deseja gerar um vetor randomico? (y/n) ");
	while(1){
		scanf(" %c", &r);
		if (r == 'y' || r == 'n')
			break;
	}

	int size = 0;
	printf("Insira o tamanho do vetor %s", r == 'y'? "(Digite 0 para tamanho randomico): ":"a ser digitado: ");
	while (1){
		scanf(" %d", &size);
		if (size <= 0 && r == 'y'){
			size = RandomSize(30);
			break;	
		}
		else if (size > 0)
			break;
	}

	int vector[size];

	if (r == 'y')
		InsertRandomVector(vector, size);
	else{
		for (int i = 0; i < size; i++)
			scanf("%d", &vector[i]);
	}
	
	printf("\n\n");	
	printf("Vetor:\n\n");
	printv(vector, size);
	printf("\n\n");

	int k;
	printf("Busca: ");
	scanf("%d", &k);

	printf("\n\n\n\n");
	printf("Busca Sequencial (I):\n\n");
	sprintv(vector, size , BuscaSequencial(vector, size, k));
	printf("\n");

	printf("\n\n");
	printf("Busca Sequencial (II):\n\n");
	sprintv(vector, size , BuscaSequencial2(vector, size, k));
	printf("\n");

	printf("\n\n");
	printf("Busca Sequencial (III):\n\n");
	sprintv(vector, size , BuscaSequencial3(vector, size, k));
	printf("\n");	
	
	printf("\n\n\n\n");
	
    return 0;
}
