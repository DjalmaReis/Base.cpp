/*mat. 2019100395 - Djalma dos Reis Carvalho Junior

*/

#include <stdlib.h>
#include <iostream>
#include <locale>
#include <string>

using namespace std;

void imprime(int n){
	int i;
	for(i=1;i<=n;i++)
	cout<<"linha "<<i<<endl;
}
main(){
setlocale(LC_ALL,"Portuguese");

imprime(5);
system("pause");
	return 0;
	}
