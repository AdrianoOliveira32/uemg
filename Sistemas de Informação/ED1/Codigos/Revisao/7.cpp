#include <iostream>

using namespace std;

int main()
{
	char matriz[5][7];

	matriz[0][0] = '1';
	matriz[0][1] = '6';
	matriz[0][2] = '1';
	matriz[0][3] = '0';
	matriz[0][4] = '0';
	matriz[0][5] = '0';
	matriz[0][6] = '1';

	matriz[1][0] = '1';
	matriz[1][1] = '7';
	matriz[1][2] = '1';
	matriz[1][3] = '0';
	matriz[1][4] = '0';
	matriz[1][5] = '0';
	matriz[1][6] = '2';

	matriz[2][0] = '1';
	matriz[2][1] = '7';
	matriz[2][2] = '1';
	matriz[2][3] = '0';
	matriz[2][4] = '0';
	matriz[2][5] = '0';
	matriz[2][6] = '3';

	matriz[3][0] = '1';
	matriz[3][1] = '7';
	matriz[3][2] = '2';
	matriz[3][3] = '0';
	matriz[3][4] = '0';
	matriz[3][5] = '0';
	matriz[3][6] = '4';

	matriz[4][0] = '1';
	matriz[4][1] = '8';
	matriz[4][2] = '1';
	matriz[4][3] = '0';
	matriz[4][4] = '0';
	matriz[4][5] = '0';
	matriz[4][6] = '5';

	string n;
	cout << "Digite o numero da matricula a ser buscado: ";
	cin >> n;
	bool achou = true;
	for (int i = 0; i < 5 ; ++i)
	{
		for (int j = 0; j < 7 ; ++j)
		{
			if((n[j] ) != matriz[i][j])
				achou = false;
		}
		if (achou)
		{
			cout << "Ano: " << matriz[i][0] << matriz[i][1];
		}
	}




	return 0;
}
