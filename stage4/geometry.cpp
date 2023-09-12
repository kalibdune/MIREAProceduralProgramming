#include <cmath>
#include <iostream>

using namespace std;

int rectangleS(int a, int b) { return a * b; }

double triangleS(int a, int h) { return (a * 1.0 * h) / 2; }

double circleS(int r) { return 2 * 3.14 * r * r; }

int main() {
  cout << rectangleS(10, 2) << "\n";
  cout << triangleS(5, 2) << "\n";
  cout << circleS(5) << "\n";
}