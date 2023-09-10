#include <iostream>
#include <cmath>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  
  double x, a, w = 0.0;
  cout << "Введите x, a через пробел\n";
  cin >> x >> a;
  if (abs(x) < 1 && x != 0) {
    w = a * log(abs(x));
  } else if (abs(x) >= 1) {
    if (a - x * x >= 0) {
      w = sqrt(a - x * x);
    } else {
      cout << "выходит за область определения\n";
    }

  } else {
    cout << "выходит за область определения\n";
  }
  cout << w << "\n";
}