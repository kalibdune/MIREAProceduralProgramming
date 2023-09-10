#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int a, b;
  cout << "Введите два числа a & b через пробел\n";
  cin >> a >> b;

  cout << a + b << "\n" << a - b << "\n" << a * b << "\n";
  if (b == 0) {
    cout << "на ноль делить нельзя"
         << "\n";
  } else {
    cout << a * 1.0 / b << "\n";
  }
  
}