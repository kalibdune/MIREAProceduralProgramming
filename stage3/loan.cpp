#include <cmath>
#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  double s, m, n, r, p, eps;
  eps = 5.0;
  cout << "Введте S, m, n через пробел\n";
  cin >> s >> m >> n;

  for (int i = 1; i < 200; ++i) {
    p = i;
    r = p / 100;
    double fraction = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
    cout << "debug\t" << p << "\t" << fraction << "\n";
    if ((fraction - eps <= m) && (fraction + eps >= m)) {
      cout << "p=" << p << "\n";
      return 0;
    }
  }
  cout << "no\n";
}