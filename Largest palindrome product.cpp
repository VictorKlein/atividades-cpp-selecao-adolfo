#include <iostream>

using namespace std;

int numeros[1000000];
bool eh_palindromo(int num){
	int aux = num, inverso=0;
	while(aux){       
		inverso *= 10;
		inverso += aux%10;
		aux /= 10;
	}
	return inverso == num;
}

int main(){
    int aux, pos=0, resposta=0;
    
    for (int i=0; i <= 999 ; i++){             //Começa de 999x999 e calcula todas as possibilidades até 991X991
        for (int j = 0; j <= 999 ; j++){       //Depois, vai de 989x989 até 981x981
            aux = i*j;
            if (eh_palindromo(aux)){
                numeros[pos] = aux;
                pos++;
            }
        }
    }
    for (int j = 0; j < pos; j++){
        if (resposta < numeros[j])
            resposta = numeros[j];
    }
    if (resposta){
        cout<<"resposta: "<<resposta<<endl;
        return 0;
    }
    cout<<"falhou"<<endl;
    return 0;
}