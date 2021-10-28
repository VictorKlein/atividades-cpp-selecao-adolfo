#include <iostream>

using namespace std;



int main(){
    long int soma = 0, valor[2];
    

    valor[0] = 1;
    valor[1] = 1;
    while(valor[1] < 4000000){
        if (valor[1]%2 == 0)
            soma += valor[1];
        valor[1] = valor[1] + valor[0];
        valor[0] = valor[1] - valor[0];
    }

    cout<<soma<<endl;

    return 0;
}