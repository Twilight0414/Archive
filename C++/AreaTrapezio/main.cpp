#include <iostream>

using namespace std;
int main() {
  float Bmaior, Bmenor, altura, calc, area;

  cout << "Para calcular a area do trapézio digite\n";
  cout << "O valor da base maior: \n";
  cin >> Bmaior;
  cout << "O valor da base menor: \n";
  cin >> Bmenor;
  cout << "A altura: \n";
  cin >> altura;

  calc = (Bmaior + Bmenor) * altura;
  area = calc / 2;

  cout << "A area do trapézio é de: " << area << "\n";
}