#include <iostream>
#include <windows.h>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    bool opcaoValida;
    string nomeContato, numeroContato;
    string fileName = "agenda.txt";
    string opcoes[3] = {"0) Sair\n", "1) Adicionar contato.\n", "2) Exibir contatos.\n"};
    int numeroOpcao[3] = {0, 1, 2};
    int opcaoSelecionada;

    fstream agendaTXT;
    string fileLine;

    while (true) {
        do {
        cout << "Selecione a opção desejada.\n";
        cout << opcoes[1];
        cout << opcoes[2];

        cout << opcoes[0];
        cin >> opcaoSelecionada;

        opcaoValida = find(begin(numeroOpcao), end(numeroOpcao), opcaoSelecionada) != end(numeroOpcao);
        system("cls || clear");
        } while (!opcaoValida);

        cout << opcoes[opcaoSelecionada];

        switch (opcaoSelecionada) {
            case 0:
                exit(0);
                break;
            case 1:
                cout << "Digite o nome do contato: ";
                cin >> nomeContato;
                cout << "Digite o número do contato: ";
                cin >> numeroContato;

                agendaTXT.open(fileName, ios::out | ios::app);
                agendaTXT << nomeContato << ": " << numeroContato << "\n";
                agendaTXT.close();
                system("cls || clear");
                break;
            case 2:
                agendaTXT.open(fileName, ios::in);
                if (agendaTXT.is_open()){
                    while(getline(agendaTXT, fileLine)){
                        cout << fileLine << "\n";
                    }
                    agendaTXT.close();
                    system("pause");
                    system("cls || clear");
                } else {
                    cout << "Arquivo 'agenda.txt' não encontrado!";
                    system("pause");
                    system("cls || clear");
                }
                break;
        }
    }

    return 0;
}
