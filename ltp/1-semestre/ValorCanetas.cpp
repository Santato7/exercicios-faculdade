#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  int quantidadeCaneta, valorNota;
  float troco, valorCaneta;
  
  cout << "Quantas canetas foram compradas?\n";
  cin >> quantidadeCaneta;
  
  cout << "Qual o valor da nota que usou para pagar?\n";
  cin >> valorNota;
  
  cout << "Recebeu quanto de troco?\n";
  cin >> troco;
  
  valorCaneta = (valorNota - troco) / quantidadeCaneta;
  
  cout << "Cada caneta custou R$" << valorCaneta;
  
  return 0;
}
