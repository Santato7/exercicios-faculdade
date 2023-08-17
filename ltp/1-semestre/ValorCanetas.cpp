#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  int quantidadeCaneta, valorNota;
  float troco;
  
  cout << "Quantas canetas foram compradas?\n";
  cin >> quantidadeCaneta;
  
  cout << "Qual o valor da nota que usou para pagar?\n";
  cin >> valorNota;
  
  cout << "Recebeu quanto de troco?\n";
  cin >> troco;
  
  cout << "Cada caneta custou R$" << (valorNota - troco) / quantidadeCaneta;;
  
  return 0;
}
