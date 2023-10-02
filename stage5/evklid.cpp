#include <iostream>

using namespace std;

int divAlg(int a, int b) {
  while (a != 0 && b != 0) {
    if (a > b) {
      a %= b;
    } else {
      b %= a;
    }
  }
  return a + b;
}

int diffAlg(int a, int b) {
  while (a != b) {
    if (a > b) {
      a -= b;
    } else {
      b -= a;
    }
  }
  return a;
}

int main() {
  int a, b;

  cout << "enter a, b: ";
  cin >> a >> b;
  cout << divAlg(a, b) << "\n";
  cout << diffAlg(a, b) << "\n";
}