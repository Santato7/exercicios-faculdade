#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  float nota1, nota2, nota3, media;
  char temMedalha;
    
  cout << "As notas devem ser de 0.0 a 10.0\n";
    
  cout << "Insira a primeira nota: ";
  cin >> nota1;
    
  cout << "Insira a segunda nota: ";
  cin >> nota2;
    
  cout << "Insira a terceira nota: ";
  cin >> nota3;

  cout << "O aluno tem medalha? [S/N] ";
  cin >> temMedalha;
  temMedalha = toupper(temMedalha);
  
  media = (nota1 + nota2 + nota3) / 3;
  
  cout << "A média é: " << media << "\n";
  
  if ((media >= 6) || (temMedalha == 'S')) {
    if (media <= 5) {
      cout << "Aluno não atingiu a média necessária, mas foi aprovado por ter medalha.";  
    } else {
      cout << "O aluno foi aprovado!";
    }
  } else {
    cout << "O aluno foi reprovado.";
  }

  return 0;
}
