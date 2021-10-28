#include <iostream>

using namespace std;

int main(){
    long long resposta=0;
    
    for (int i=1; i<=100; i++){
		for(int j=1; j<i; j++){
			resposta += 2*i*j;
		}
	}
    cout<<"resposta: "<<resposta<<endl;
    return 0;
} 