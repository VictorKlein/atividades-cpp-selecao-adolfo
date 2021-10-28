#include <iostream>

using namespace std;



int main(){
    long int soma = 0, valor[2];
    

    valor[0] = 1;
    valor[1] = 1;
    while(valor[1] < 4000000){
        if (valor[1]%2 == 0)            
            soma += valor[1];                   //Soma os valores pares
        valor[1] = valor[1] + valor[0];     //O valor seguinte é a soma do valor atual com o do anterior
        valor[0] = valor[1] - valor[0];     //O valor seguinte torna-se o anterior (valor[0] = valor[1] + valor[0] - valor[0])
    }

    cout<<soma<<endl;

    return 0;
}
