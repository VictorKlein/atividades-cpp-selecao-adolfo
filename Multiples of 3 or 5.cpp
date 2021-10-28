#include <iostream>

using namespace std;

int main(){
    long int soma=0;
    for (int i=1; i<1000; i++){
        if (i%3 == 0 || i%5 == 0){
            soma += i;
        }
    }
    cout<<soma<<endl;

    return 0;
}