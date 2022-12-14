#include <stdio.h>
#include <string.h>

typedef struct _Endereco Endereco;

struct _Endereco
{
	char logradouro[72];
	char bairro[72];
	char cidade[72];
	char uf[72];
	char sigla[2];
	char cep[8];
	char lixo[2]; 
};

int main(int argc, char**argv)
{
	FILE *f;
	Endereco e;
	int fim, meio, inicio = 0;
	int achei;

	if(argc != 2)
	{
		fprintf(stderr, "USO: %s [CEP]", argv[0]);
		return 1;
	}

    f = fopen("cep_ordenado.dat", "rb");

    fseek(f, 0, SEEK_END);
    fim = (ftell(f) / sizeof(Endereco)) - 1;

    while (inicio <= fim){

		meio = (inicio + fim)/2;

        fseek(f, meio*sizeof(Endereco), SEEK_SET);
        fread(&e, sizeof(Endereco), 1, f);

        if (strncmp(argv[1], e.cep, 8) == 0){
            printf ("CEP PROCURADO: %.8s\n CEP ENCONTRADO: %.8s, Bairro: %.72s\n", argv[0], e.cep, e.bairro);
            break;
        } else if (strncmp(argv[1], e.cep, 8) > 0){
            inicio = meio + 1;
        } else {
			fim = meio - 1;
		}
    }
	
	printf ("O codigo chegou ao fim");
	fclose(f);

	return 0;
}