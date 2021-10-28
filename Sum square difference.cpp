//Sabendo que: 	(a1 + a2 + a3 + a4 + ... + an)^2 = a1*(a1 + a2 + ... + an) + a2*(a1 + a2 + ... + an) + ... + an*(a1 + a2 + ... + an) =
//		(a1^2 + a2^2 + ... + an^2) + (2*a1*a2 + 2*a1*a3 + ... + 2*a1*an) + (2*a2*a3 + 2*a2*a4 + ... + 2*a2*an) + ... + 2*a(n-1)*an
//Temos que:	(a1 + a2 + ... + an)^2 - (a1^2 + a2^2 + ... + an^2) = (2*a1*a2 + 2*a1*a3 + ... + 2*a1*an) + (2*a2*a3 + 2*a2*a4 + ... + 2*a2*an) + ... + 2*a(n-1)*an =
//ou 		= somatório(2*ai*aj), 1 <= i < j <= n


#include <iostream>

using namespace std;

int main(){
    long long resposta=0;
    
    for (int i=1; i<=100; i++){
		for(int j=1; j<i; j++){
			resposta += 2*i*j;	//resposta = (2*a1*a2 + 2*a1*a3 + ... + 2*a1*an) + (2*a2*a3 + 2*a2*a4 + ... + 2*a2*an) + ... + 2*a(n-1)*an
		}
	}
    cout<<"Resposta= "<<resposta<<endl;
    return 0;
} 
