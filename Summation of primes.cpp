#define tam 2000000
#include <iostream>

using namespace std;

bool ehprimo[tam]; 				//Array que irá retornar 1 se o índice colocado é primo;

int main(){
	long long soma = 0;
	for (int i = 2; i < tam; i++) 		//Inicia em 2 porque 0 e 1 não são primos
		ehprimo[i] = 1;
	for (long long i = 2; i < tam; i++){
		if (ehprimo[i]){ 				//Sempre que encontrar um número primo:
			for (long long j = i*i; j < tam; j += i){	//Nenhum múltiplo desse valor é primo, começando de i^2 porque todos
				ehprimo[j] = 0;				//os múltiplos de i menores que i^2 já foram considerados para os primos anteriores
			}
	 	 	soma += i;                                 	//Soma o valor encontrado ao total
		}
	}
	cout<<"Resposta= "<<soma<<endl;
	return 0;
} 
