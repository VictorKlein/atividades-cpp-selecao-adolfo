//Cria-se um array para armazenar a fatoração dos 20 números de 1 a 20 da seguinte forma:
//A fatoração de 12, por exemplo, é 1^0 * 2^2 * 3^1 * 4^0 * 5^0 *..., o que seria armazenado assim:
//fatoracao[12] = [0, 2, 1, 0, 0, 0, ..., 0], pois armazenamos somente as bases em valores primos.
//Portanto, uma versão [5][5] de fatoracao seria:
//	1  2  3  4  5
//   1  0  0  0  0  0
//   2  0  1  0  0  0
//   3  0  0  1  0  0
//   4  0  2  0  0  0
//   5  0  0  0  0  1


#include <iostream>

using namespace std;

int main(){
    int resposta = 1, fatoracao[20][20]={}, fatresp[20]={};
    
    
    for (int i=0; i<20; i++){  		//Fatora cada valor de 1 a 20 e armazena os resultados na matriz fatoracao.
        int iaux = i+1;
        for (int j=2; iaux > 1; j++){
            while(iaux%j == 0){
                iaux/= j;
                fatoracao[i][j-1]++;
            }
        }
    }
	
							//Para mostrar a matriz de fatoração .
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
	
	
    for (int i=0; i<20; i++){			//Para obter a fatoração da resposta, pegamos os maiores expoentes de cada base encontrados nas fatorações.
        for (int j=0; j<20; j++){
            if (fatresp[j] < fatoracao[i][j]){	
                fatresp[j] = fatoracao[i][j];
            }
        }
    }
    for (int i=0; i<20; i++){			//A partir da fatoração da resposta, multiplicamos os fatores elevados aos respectivos expoentes e multiplicamos enter si.
        for (int j=0; j<fatresp[i]; j++){
            resposta *= i+1;
        }
    }
	
							//Para mostrar fatresp, a fatoração da resposta.
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
