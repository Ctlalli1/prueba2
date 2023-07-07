
#include<iostream>
using namespace std;



int main() {
	float a;
	float b;
	float c;
	float d;
	float determinante;
	float e;
	float f;
	float g;
	float h;
	float i;
	float opcion;
	cout << "Escribe la opción:" << endl;
	cout << "1- Determinante de una matriz 2x2" << endl;
	cout << "2- Determinante de una matriz 3x3" << endl;
	cin >> opcion;
	if ((opcion)==(1)) {
		cout << "Escribe los coeficientes de la matriz 2x2:" << endl;
		cin >> a >> b >> c >> d;
		cout << "Matriz ingresada:" << endl;
		cout << a << b << endl;
		cout << c << d << endl;
		determinante = a*d-b*c;
		cout << "Determinante:" << determinante << endl;
	} else {
		if ((opcion)==(2)) {
			cout << "Escribe los coeficientes de la matriz 3x3:" << endl;
			cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
			cout << "Matriz ingresada:" << endl;
			cout << a << b << c << endl;
			cout << d << e << f << endl;
			cout << g << h << i << endl;
			determinante = a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g);
			cout << "Determinante:" << determinante << endl;
		} else {
			cout << "No se puede ejecutar esta accion" << endl;
		}
	}
	return 0;
}

