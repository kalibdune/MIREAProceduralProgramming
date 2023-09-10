#include <iostream>
#include <cmath>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  
  double a, b, c, D;
  cout << "Введите коэфиценты a, b, c через пробел\n";
  cin >> a >> b >> c;

  if (a == 0) {
    if (b == 0) {
      cout << "на ноль делить нельзя\n";
    } else if (c == 0) {
      cout << "Решение любое\n";
    } else {
      cout << -(c / b) << "\n";
    }
  }

  D = b * b - 4 * a * c;
  // cout << D << "\n";
  if (D < 0) {
    cout << "нет решения\n";
  } else if (D == 0) {
    if (a != 0) {
      cout << -(b / (2 * a)) << "\n";
    }
  } else {
    double x1, x2;
    if (a != 0) {
      x1 = (-b + sqrt(D)) / (2 * a);
      x2 = (-b - sqrt(D)) / (2 * a);
      cout << "первый корень: " << x1 << "\n"
           << "второй корень: " << x2 << "\n";
    }
  }
}