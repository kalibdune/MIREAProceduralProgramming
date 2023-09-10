#include <clocale>
#include <iostream>

using namespace std;

int main() {
  double x = -4.0;

  for (int i = 0; i < 17; ++i) {
    if (x - 1 != 0) {
      double equation = (x * x - 2 * x + 2) / (x - 1);
      cout << "y=" << equation << "\n";
      x += 0.5;
    } else {
      cout << "zero divison\n";
      x += 0.5;
    }
  }
}