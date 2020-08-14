/*	Djalma dos Reis Carvalho Junior
	mat. 2019100395
	Turma 856
	
	Questão 2 - APS)Faça um programa para o cadastro de produtos de uma loja.
1*	Seu programa deve criar um arquivo binário (produtos.dat) para armazenar os seguintes dados dos produtos:
	código, descrição e preço.
2*	Os produtos devem ser cadastrados enquanto o código informado for positivo.
3*	Após encerrar o cadastro de produtos, o programa deve percorrer o arquivo que foi criado e
	apresentar na tela os dados dos produtos.
*/

#include <stdlib.h>
#include <iostream>
#include <locale>
#include <fstream>

using namespace std;

struct PRODUTOS {
	int cod=0; // codigo
	char desc[100]; //descrição
	float prec=0.0; //preço
};

int main(){
setlocale(LC_ALL,"Portuguese");
int teste=0;
int i=0,x=0;

FILE *pont; 
struct PRODUTOS p[x]; 
do {
	cout << "***Digite código do produto negativo para sair***\n";
	cout << "Código do Produto: ";
	cin >> teste;
	if (teste >=0) {
		pont = fopen("produtos.dat","wb");
		if (pont == NULL){ 
		printf("O arquivo não pôde ser aberto");
		return 1;}
		p[i].cod = teste;
		cout << "Descrição do Produto: ";
		cin >> p[i].desc;
		cout << "Preço do Produto: ";
		cin >> p[i].prec;
		fwrite(&p,sizeof (PRODUTOS),1,pont);
		fclose(pont);
		i++;
		x++;
	}
} while (teste>=0);
i = 0;

pont = fopen("produtos.dat","rb");
if (pont == NULL){
	printf("O arquivo não pôde ser aberto");
	return 1;}

while (i!=x){
fread (&p[x] , sizeof (PRODUTOS), 1, pont );
cout << "Código: " << p[i].cod << endl;
cout << "Descrição: " << p[i].desc << endl;
cout << "Preço: " << p[i].prec << endl;
fclose(pont);
i++;
}
}
