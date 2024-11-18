#include <iostream>
using namespace std;
int main() {
  float nota1, nota2, media, total;
  int peso2 = 2, peso3 = 3;

  cout << "Digite a primeira nota: \n";
  cin >> nota1;
  cout << "Digite a segunda nota: \n";
  cin >> nota2;

  media = (nota1 * peso2) + (nota2 * peso3);
  total = media / (peso2 + peso3);

  cout << "Sua media é: " << total << "\n";
}