#include <iostream>

using namespace std;

int numeros[1000000];
bool eh_palindromo(int num){		//Verifica se num é palíndromo:
	int aux = num, inverso=0;		//aux = num
	while(aux){       			//Enquanto restarem dígitos no em aux...
		inverso *= 10;				//Cria um espaço (à direita) para mais um algarismo no número inverso...
		inverso += aux%10;			//Adiciona o próximo dígito de aux a inverso 
		aux /= 10;				//Remove de aux o dígito que foi adicionado a inverso
	}
	return inverso == num;			//Compara o número original com sua versão invertida
}

int main(){
    int aux, pos=0, resposta=0;
    						
    for (int i=0; i <= 999 ; i++){             
        for (int j = 0; j <= 999 ; j++){       //Para cada par de valores 0 <= i, j <= 1000...
            aux = i*j;					//Obtém o produto dos dois
            if (eh_palindromo(aux)){			//Se o produto for palíndromo,
                numeros[pos] = aux;				//Adiciona o valor a um array que armazena todos os palíndromos encontrados
                pos++;
            }
        }
    }						//Para encontrar o maior valor palíndromo armazenado
    for (int j = 0; j < pos; j++){		
        if (resposta < numeros[j])
            resposta = numeros[j];
    }
    if (resposta){				//Se encontrar uma resposta, imprime
        cout<<"resposta: "<<resposta<<endl;
        return 0;
    }					
    cout<<"falhou"<<endl;			//Para debugging
    return 0;
}
