#include <iostream>

using namespace std;

int main(){
    int resposta = 1, fatoracao[20][20]={}, fatresp[20]={};
    
    
    for (int i=0; i<20; i++){
        int iaux = i+1;
        for (int j=2; iaux > 1; j++){
            while(iaux%j == 0){
                iaux/= j;
                fatoracao[i][j-1]++;
            }
        }
    }
    cout<<"\t";
    for (int i=0; i<8; i++)
    	cout<<i+1<<"| ";
    for (int i=8; i<20; i++)
    	cout<<i+1<<"|";
    for(int i=0; i<20; i++){
    	cout<<endl<<i+1<<"\t";
		for(int j=0; j<20; j++){
			if (fatoracao[i][j])
				cout<<fatoracao[i][j]<<"| ";
			else
				cout<<" "<<"| ";
		}
	}
    for (int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            if (fatresp[j] < fatoracao[i][j]){
                fatresp[j] = fatoracao[i][j];
            }
        }
    }
    for (int i=0; i<20; i++){
        for (int j=0; j<fatresp[i]; j++){
            resposta *= i+1;
        }
    }
    cout<<endl<<"\t";
	for (int i=0; i<20; i++){
			if (fatresp[i])
				cout<<fatresp[i]<<"| ";
			else
				cout<<" "<<"| ";
	}
    cout<<endl<<"resposta: "<<resposta<<endl;
    return 0;
} 