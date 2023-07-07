#include<iostream>
using namespace std;

int main() {
	int determinanter;
	int determinante;
	int determinantex;
    int determinantey;
	int determinantez;
	int i;
	int j;
	int matriz[4][4];
	int opc;
	int valorx;
	int valory;
	int valorz;
	cout << "Escribir (1) si es de 2x2 o (2) si es de 3x3 " << endl;
	cin >> opc;
	
	switch (opc) {
	case 1:
		for (i=1; i<=2; ++i) {
			for (j=1; j<=3; ++j) {
				cout << "Ingrese un numero para la posicion [" << i << "," << j << "]:" << endl;
				cin >> matriz[i-1][j-1];
			}
		}
		cout << "La matriz de numeros ingresados es:" << endl;
		for (i=1; i<=2; ++i) {
			for (j=1; j<=3; ++j) {
				cout << matriz[i-1][j-1] << " ";
			}
			cout << " " << endl;
		}
		determinanter = (matriz[0][0])*(matriz[1][1])-(matriz[0][1])*(matriz[1][0]);
		cout << " resultante " << determinanter << endl;
		determinantex = (matriz[0][2])*(matriz[1][1])-(matriz[0][1])*(matriz[1][2]);
		cout << " resultante x " << determinantex << endl;
		determinantey = (matriz[0][0])*(matriz[1][2])-(matriz[1][0])*(matriz[0][2]);
		cout << " resultante y " << determinantey << endl;
		valorx = (determinantex/determinanter);
		cout << " valor de x= " << valorx << endl;
		valory = (determinantey/determinanter);
		cout << " valor de y= " << valory << endl;
		break;
	case 2:
		for (i=1; i<=3; ++i) {
			for (j=1; j<=4; ++j) {
				cout << "Ingrese un numero para la posicion [" << i << "," << j << "]:" << endl;
				cin >> matriz[i-1][j-1];
			}
		}
		cout << "La matriz de numeros ingresados es:" << endl;
		for (i=1; i<=3; ++i) {
			for (j=1; j<=4; ++j) {
				cout << matriz[i-1][j-1] << " ";
			}
			cout << " " << endl;
		}
		determinanter = ((matriz[0][0])*(matriz[1][1])*(matriz[2][2])+(matriz[1][0])*(matriz[2][1])*(matriz[0][2])+(matriz[2][0])*(matriz[0][1])*(matriz[1][2]))-((matriz[1][0])*(matriz[0][1])*(matriz[2][2])+(matriz[0][0])*(matriz[2][1])*(matriz[1][2])+(matriz[2][0])*(matriz[1][1])*(matriz[0][2]));
		cout << " resultante " << determinanter << endl;
		determinantex = ((matriz[0][3])*(matriz[1][1])*(matriz[2][2])+(matriz[1][3])*(matriz[2][1])*(matriz[0][2])+(matriz[2][3])*(matriz[0][1])*(matriz[1][2]))-((matriz[1][3])*(matriz[0][1])*(matriz[2][2])+(matriz[0][3])*(matriz[2][1])*(matriz[1][2])+(matriz[2][3])*(matriz[1][1])*(matriz[0][2]));
		cout << " resultante x " << determinantex << endl;
		determinantey = ((matriz[0][0])*(matriz[1][3])*(matriz[2][2])+(matriz[1][0])*(matriz[2][3])*(matriz[0][2])+(matriz[2][0])*(matriz[0][3])*(matriz[1][2]))-((matriz[1][0])*(matriz[0][3])*(matriz[2][2])+(matriz[0][0])*(matriz[2][3])*(matriz[1][2])+(matriz[2][0])*(matriz[1][3])*(matriz[0][2]));
		cout << " resultante y " << determinantey << endl;
		determinantez = ((matriz[0][0])*(matriz[1][1])*(matriz[2][3])+(matriz[1][0])*(matriz[2][1])*(matriz[0][3])+(matriz[2][0])*(matriz[0][1])*(matriz[1][3]))-((matriz[1][0])*(matriz[0][1])*(matriz[2][3])+(matriz[0][0])*(matriz[2][1])*(matriz[1][3])+(matriz[2][0])*(matriz[1][1])*(matriz[0][3]));
		cout << " resultante z " << determinantez << endl;
		valorx = (determinantex/determinanter);
		cout << " valor de x= " << valorx << endl;
		valory = (determinantey/determinanter);
		cout << " valor de y= " << valory << endl;
		valorz = (determinantez/determinanter);
		cout << " valor de z= " << valorz << endl;
		break;
	}
	return 0;
}


