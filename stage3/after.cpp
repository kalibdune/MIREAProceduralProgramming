#include <cmath>
#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int s, n;
  double m, r, p;

  cout << "Введите s, p, n через пробел\n";
  cin >> s >> p >> n;

  r = p / 100;
  if (12 * (pow(1 + r, n) - 1) != 0) {
    m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
    cout << m << "\n";
  } else {
    cout << "Выходит за ОДЗ\n";
  }
}