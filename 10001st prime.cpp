#include <iostream>

using namespace std;

int main(){						//Cria um for que dura até a função retornar um valor
    for (int posicao=0, i=2, valor;;i++){		//Para cada valor i a partir de 2...
    	bool v=1;				//Verificador: será mudado para 0 se for descoberto se o valor for primo
	if (posicao == 10001){
		cout<<"Resposta: "<<valor<<endl;		//Quando encontrado o 10001° primo, dá a resposta e retorna a função main.
		return 0;
	}
	for (int j=2;v;j++){					//... Procura um valor j que divida i...
		if (i%j == 0){
			v = 0;
			valor = j;				//... E armazena j em valor...
		}
	}
    	if (i == valor)						//...E, se o menor divisor de i maior que 1 for igual a i, i é primo...
	posicao++;						//...Portanto, o posicao° primo foi encontrado, então posicao++.
	}
} 
