#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  
  double c, b;
  cout << "Введите коэфиценты b, c через пробел\n";
  cin >> b >> c;
  if (b == 0) {
    cout << "на ноль делить нельзя\n";
  } else if (c == 0) {
    cout << "Решение любое\n";
  } else {
    cout << -(c / b) << "\n";
  }
}