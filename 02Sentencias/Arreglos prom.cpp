/*
vamos a relizar un ejemplo  sobre el uso de flotantes para asignar notas a estudiantes
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float notas[20];
	int i = 0;
	float suma = 0;
	float media;
	
	//la entrada de datos
	for(i= 0; i < 20; i++){
		cout<<"Alumno : "<<i+1<< " Nota Final : \n";
		cin>>notas[i];
	}
	//Vamos a sumarlos
	for(i = 0; i < 20; i++);{
	suma = suma + notas[i];
}
//promedio
media = suma/20;
//mostrar los datos 
cout<<fixed<<setprecision(2);
cout<<endl<<"Nota promedio del curso : " <<media<<endl;
//quiero mostrar los valorres superiores a la media
cout<<"Alumnos superiores al promedio :\n";
for(i = 0; i<20; i++){
	if(notas[i] > media){
		cout<<"Id del alumno : "<<i+1<<endl;
		cout <<"Nota final: "<<notas[i]<<endl;
	}
}
	
}
