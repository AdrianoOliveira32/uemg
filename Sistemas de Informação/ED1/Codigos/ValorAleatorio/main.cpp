#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); //padr�o aleat�rio de acordo com o tempo

    for (int i = 0; i < 20; ++i) {
        cout << (rand() % 6)+1 <<endl; // de 1 at� 6
    }
    return 0;
}