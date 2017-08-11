#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, NULL);

    float valor;
    int opcao;

    do {
        system("cls");
        cout << "Digite o valor da venda: ";
        cin >> valor;
        cout << "1 - Venda a vista\n";
        cout << "2 - Venda a prazo 30 dias\n";
        cout << "3 - Venda a prazo 60 dias\n";
        cout << "4 - Venda a prazo 90 dias\n";
        cout << "5 - Venda com cartão de débito\n";
        cout << "6 - Venda com cartão de crédito\n";
        cout << "7 - Para sair do programa" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        if (opcao > 0 && opcao < 7) {

            switch (opcao) {
                case 1: {
                    cout << "Venda a vista" << endl;
                    cout << "O valor a ser pago e: " << valor * 0.9;
                }
                    break;
                case 2: {
                    cout << "Venda a prazo com 30 dias" << endl;
                    cout << "O valor a ser pago e: " << valor * 0.95;
                }
                    break;
                case 3: {
                    cout << "Venda a prazo com 60 dias" << endl;
                    cout << "O valor a ser pago e: " << valor;
                }
                    break;
                case 4: {
                    cout << "Venda a prazo com 90 dias" << endl;
                    cout << "O valor a ser pago e: " << valor * 1.05;
                }
                    break;
                case 5: {
                    cout << "Venda com cartao de debito " << endl;
                    cout << "O valor a ser pago e: " << valor * 0.92;
                }
                    break;
                case 6: {
                    cout << "Venda a prazo com 30 dias" << endl;
                    cout << "O valor a ser pago e: " << valor * 0.93;
                }
                    break;

            }
            system("pause");
        }
    } while (opcao > 0 && opcao < 7);

    return 0;
}
