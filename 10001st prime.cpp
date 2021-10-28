#include <iostream>

using namespace std;

int main(){
    for (int posicao=0, i=2, resposta;;i++){
    	bool v=1;
		if (posicao == 10001){
			cout<<"resposta: "<<resposta<<endl;
			return 0;
		}
		for (int j=2;v;j++){
			if (i%j == 0){
				v = 0;
				resposta = j;
			}
		}
    	if (i == resposta)
			posicao++;
	}
} 