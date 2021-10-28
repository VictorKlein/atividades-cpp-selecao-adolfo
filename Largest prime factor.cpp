#include <iostream>

using namespace std;

int main(){
    long long numero = 600851475143;
    int i;


    for (i=2; numero > 1; i++){
        while (numero%i == 0){
            numero/= i;
        }
    }
    i--;

    cout<<i<<endl;

    return 0;
}