#include <iostream>

using namespace std;

int main(){
    int soma=0;
    for (int i=1; i<1000; i++){         //Para cada valor de 1 a 1000...
        if (i%3 == 0 || i%5 == 0){      //Se o valor for divisível por 3 ou por 5...
            soma += i;                  //Soma o valor ao total
        }
    }
    cout<<soma<<endl;

    return 0;
}
