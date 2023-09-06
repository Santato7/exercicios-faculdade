#include <iostream>
#include <algorithm>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int opcaoSelecionada;
    float num1, num2;
    int numeroOpcao[5] = {0,1,2,3,4};
    string descricaoOpcao[5] = {"0) Sair.", "1) Adição", "2) Subtração", "3) Multiplicação", "4) Divisão"};
    bool opcaoValida;

    do {
        do {
            cout << "Selecione a opção desejada." << endl;
            cout << descricaoOpcao[1] << endl;
            cout << descricaoOpcao[2] << endl;
            cout << descricaoOpcao[3] << endl;
            cout << descricaoOpcao[4] << endl;
            cout << descricaoOpcao[0] << endl;

            cin >> opcaoSelecionada;
            opcaoValida = find(begin(numeroOpcao), end(numeroOpcao), opcaoSelecionada) != end(numeroOpcao);
            system("cls || clear");
        } while (!opcaoValida);
        if (opcaoSelecionada == numeroOpcao[0]){break;}

        cout << descricaoOpcao[opcaoSelecionada] << endl;
        cout << "Digite o primeiro número" << endl;
        cin >> num1;
        system("cls || clear");
        cout << "Digite o segundo número" << endl;

        switch (opcaoSelecionada) {
            case 1:
                cout << num1 << " + ";
                cin >> num2;
                cout << num1 + num2 << endl;
                break;
            case 2:
                cout << num1 << " - ";
                cin >> num2;
                cout << num1 - num2 << endl;
                break;
            case 3:
                cout << num1 << " X ";
                cin >> num2;
                cout << num1 * num2 << endl;
                break;
            case 4:
                cout << num1 << " / ";
                cin >> num2;
                cout << num1 / num2 << endl;
                break;
        }
        system("pause");
        system("cls || clear");
    } while (opcaoSelecionada != 0);
    return 0;
}
