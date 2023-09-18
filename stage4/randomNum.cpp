#include <iostream>

using namespace std;

int randGen(int s, int m, int b, int c) {
  if (s == 0) {
    return 0;
  } else {
    return (m * randGen(s - 1, m, b, c) + b) % c;
  }
}

int main() {
  cout << randGen(2, 37, 3, 64) << "\n";
  cout << randGen(3, 25173, 13849, 65537) << "\n";
}