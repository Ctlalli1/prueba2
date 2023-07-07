#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
	int columna, fila, suma;
	int matriz[5][6];
	
	for(fila = 0; fila <= 4; fila++){
		for(columna = 0; columna <= 5; columna++){
			matriz[fila][columna] = (rand() % 9) + 1;
		}
	}
	suma = 0;
	for(fila = 0; fila <= 4; fila++){
		for(columna = 0; columna <=5; columna++){
			cout<<matriz[fila][columna]<<" ";
			suma = suma + matriz[fila][columna];
		}
		cout<<" "<<endl;
	}
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	return 0;
}
