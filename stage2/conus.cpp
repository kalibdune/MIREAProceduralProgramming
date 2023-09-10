#include <iostream>
#include <cmath>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  
  double h, R, r;
  cout << "Введите h, R, r через пробел\n";
  cin >> h >> R >> r;
  double V = 1.0 / 3 * M_PI * h * (R * R + R * r + r * r);
  double l = sqrt(h * h + (R - r) * (R - r));
  double S = M_PI * (R * R + l * (r + R) + r * r);
  cout << "V=" << V << "\nS=" << S << "\n";
}