#include <iostream>
using namespace std;
int main() {
  float preco1, preco2, calc;
  int desconto = 10;

  cout << "Qual o preço do produto? \n";
  cin >> preco1;

  calc = preco1 * desconto;
  preco2 = calc / 100;

  cout << "O valor do produto é de :" << preco2 << "\n";
}