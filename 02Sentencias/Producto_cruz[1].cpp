
#include<iostream>
using namespace std;


int main() {
	float rx;
	float ry;
	float v1x;
	float v1y;
	float v2x;
	float v2y;
	cout << "Esta es una matriz de 2x2" << endl;
	cout << "Ingrese los valores del primer vector:" << endl;
	cin >> v1x >> v2x ;
	cout << "Ingrese los valores del segundo vector:" << endl;
	cin >> v1y >> v2y ;
	rx = (v1x)*(v1y)+(v1x)*(v2y);
	ry = (v2x)*(v1y)+(v2x)*(v2y);
	cout << "El resultado del producto cruz es: (" << rx << ", " << ry << ")" << endl;
	return 0;
}

