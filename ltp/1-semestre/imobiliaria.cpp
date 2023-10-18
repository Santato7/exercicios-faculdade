#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float salarioBase = 1500.00, salarioFinal;
    float comissaoFixa = 200.00, porcentagemComissao = 5.00;
    float valorTotalVendas;
    int imoveisVendidos;
    string nomeCorretor;

    cout << "Digite o nome do corretor" << endl;
    cin >> nomeCorretor;

    cout << "Digite a quantidade de imóveis vendidos" << endl;
    cin >> imoveisVendidos;

    cout << "Digite o valor total das vendas" << endl;
    cin >> valorTotalVendas;

    salarioFinal = salarioBase + (comissaoFixa * imoveisVendidos) + (valorTotalVendas / 100 * porcentagemComissao);

    cout << "O salário final do corretor " << nomeCorretor << " é:" << salarioFinal << endl;
    system("pause");
    return 0;
}
