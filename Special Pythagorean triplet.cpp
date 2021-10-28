//A partir das equações mostradas, podemos limitar os valores de a, b e c:
//Sabendo que c > a e c > b mas c < a + b, sabemos que c > 333 e a, b, c < 500 

#include <iostream>

using namespace std;

int main(){
	
	for(int c = 333; c < 500; c++){     //Sabemos também que a < b < c
		for(int b = 1; b < c; b++){
			for(int a = 1; a < b; a++){
				if (((a*a)+(b*b) == (c*c)) && (a + b + c == 1000)){ //Ambas as condições
					cout<<"Resposta: "<<a*b*c<<endl;
					return 0;
				}
			}
		}
	}
} 
