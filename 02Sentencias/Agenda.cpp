#include <iostream>
#include <string>
using namespace std;

int main(){
	string nombres[10] = {};
	string apellidos[10] = {};
	double numeros[10] = {};
	int registrar = 1;
	int i = 0;
	
	while(registrar == 1){
		cout<<"Ingresa nombre"<<endl;
		cin>>nombres[i];
		
		cout<<"Ingresa apellido"<<endl;
		cin>>apellidos[i];
		
		cout<<"Ingresa numero telefonico"<<endl;
		cin>>numeros[i];
		
		cout<<"Quieres agregar otro? 0 no, 1 si"<<endl;
		
		
		cin>>registrar;
		i++;
	}
	
//	for(int i = 0; i < 10; i++){
//		
//	}
	
	int tF;
	cout<<"Deseas consultar un contacto? 1 si, 0 no"<<endl;
	cin>>tF;
	
	if(tF == 1){
		int registro;
		cout<<"¿Que registro deseas consultar? selecciona del 0 al 9"<<endl;
		cin>>registro;
		
		cout<<"El registro numero: "<<registro<<" tiene el nombre de: "<<nombres[registro]<<" con el apellido: "<<apellidos[registro]<<" con el numero: "<<numeros[registro]<<".";
	} else {
		cout<<"mal"<<endl;
	}
	
	
	
	
	
	
	
	
//	for(int i = 0; i < 10; i++0(){
//			
//	}
	
}
