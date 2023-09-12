#include <iostream>
#include <string>

using namespace std;

int main() {

  int stars = 0;

  for (int i = 0; i < 13; ++i) {
    string line;
    if (stars < 6) {
      for (int j = 0; j < 8; ++j) {
        line += "+ ";
      }
      ++stars;
      for (int k = 0; k < 10; ++k) {
        if (i % 2 == 0) {
          line += "&&";
        } else {
          line += "##";
        }
      }
    } else {
      for (int k = 0; k < 18; ++k) {
        if (i % 2 == 0) {
          line += "&&";
        } else {
          line += "##";
        }
      }
    }
    cout << line << "\n";
  }
}