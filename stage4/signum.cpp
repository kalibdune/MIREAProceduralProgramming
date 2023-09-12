#include <cmath>
#include <iostream>

using namespace std;

int signum(int num) {
  if (num == 0) {
    return 0;
  } else if (num > 0) {
    return 1;
  } else {
    return -1;
  }
}

int main() {

  while (true) {
    int num;
    cin >> num;
    cout << signum(num) << "\n";
  }
}