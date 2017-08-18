#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    int matriz[10][10];

    srand(time(0));
    for (int i = 0; i < 10 ; ++i) {
        for (int j = 0; j < 10; ++j) {
            matriz[i][j] = rand() % 51;
        }
    }
    int n, cont = 0;
    cout << "Digite um numero: ";
    cin >> n;


    for (int i = 0; i < 10 ; ++i) {
        for (int j = 0; j < 10; ++j) {
            if(n == matriz[i][j])
                cont++;
            cout << matriz[i][j]<< " ";
        }
        cout << endl;
    }

    cout << "O numero " << n << " apareceu " << cont << " vezes";

    return 0;
}