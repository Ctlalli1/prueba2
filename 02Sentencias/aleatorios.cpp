#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int matriz [5][6];

    for (int fila = 0; fila < 5; fila++)
    {
        for (int columna = 0; columna < 6; columna++)
        {
            matriz[fila][columna] = rand() % 9;

            cout << matriz[fila][columna] << " ";
        }

        cout<<endl;
    }

   cout << "" << endl;

   system("pause");
}
