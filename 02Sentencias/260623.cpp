#include <iostream>
#include <string>
using namespace std;

int main(){
	//Definir arreglo
//	int edades[] = {1, 2, 3, 4, 5, 6, 7}
//	int limite = (sizeof(edades)/sizeof(edades[0]));
	//sizeof retorna el valor en bytes
	
	string titulos[5];
	string autores[5];
	
	cout<<"Ingresa la siguiente info";

	for(int i = 0; i < 5; i++){
		cout<<"\n Datos del libro: "<<i+1<<" \n";
		cout<<"Titulos";
		//cin>>titulos[i];
		getline(cin, titulos[i]);
		cout<<"Autor: ";
		//cin>>autores[i];
		getline(cin, autores[i]);
	}	
}
