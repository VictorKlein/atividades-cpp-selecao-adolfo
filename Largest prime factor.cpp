#include <iostream>

using namespace std;

int main(){
    long long numero = 600851475143;
    int i;

                                //Algoritmo para fazer a fatoração:
    for (i=2; numero > 1; i++){     //Enquanto ainda houver divisor de numero, para cada valor i...
        while (numero%i == 0){      //Enquanto o número for divisível por i...
            numero/= i;                 //Divida numero por i.
        }
    }                           //Como, no final do for, i++ antes de verificar que numero = 1...
    i--;                        //i-- para i ser igual ao último (maior) divisor primo de numero

    cout<<"Resposta: "<<i<<endl;

    return 0;
}
