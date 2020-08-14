/*	Djalma dos Reis Carvalho Junior
	mat. 2019100395
	Turma 856
	
	Quest�o 2 - APS)Fa�a um programa para o cadastro de produtos de uma loja.
1*	Seu programa deve criar um arquivo bin�rio (produtos.dat) para armazenar os seguintes dados dos produtos:
	c�digo, descri��o e pre�o.
2*	Os produtos devem ser cadastrados enquanto o c�digo informado for positivo.
3*	Ap�s encerrar o cadastro de produtos, o programa deve percorrer o arquivo que foi criado e
	apresentar na tela os dados dos produtos.
*/

#include <stdlib.h>
#include <iostream>
#include <locale>
#include <fstream>

using namespace std;

struct PRODUTOS {
	int cod=0; // codigo
	char desc[100]; //descri��o
	float prec=0.0; //pre�o
};

int main(){
setlocale(LC_ALL,"Portuguese");
int teste=0;
int i=0,x=0;

FILE *pont; 
struct PRODUTOS p[x]; 
do {
	cout << "***Digite c�digo do produto negativo para sair***\n";
	cout << "C�digo do Produto: ";
	cin >> teste;
	if (teste >=0) {
		pont = fopen("produtos.dat","wb");
		if (pont == NULL){ 
		printf("O arquivo n�o p�de ser aberto");
		return 1;}
		p[i].cod = teste;
		cout << "Descri��o do Produto: ";
		cin >> p[i].desc;
		cout << "Pre�o do Produto: ";
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
	printf("O arquivo n�o p�de ser aberto");
	return 1;}

while (i!=x){
fread (&p[x] , sizeof (PRODUTOS), 1, pont );
cout << "C�digo: " << p[i].cod << endl;
cout << "Descri��o: " << p[i].desc << endl;
cout << "Pre�o: " << p[i].prec << endl;
fclose(pont);
i++;
}
}
