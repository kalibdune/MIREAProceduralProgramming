#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string line;
  cout << "input substring\n";
  cin >> line;
  ifstream file;
  file.open("test.txt");

  string buffer;
  if (file.is_open()) {
    cout << "read\n";
    getline(file, buffer);
  }

  bool valid = true;
  for (size_t i = 0; i < size(buffer) - size(line); ++i) {
    for (size_t j = 0; j < size(line); ++j) {
      if (buffer[i + j] != line[j]) {
        valid = false;
        break;
      }
    }
    if (valid) {
      cout << "Yes\n" << i << " " << i + size(line) - 1 << "\n";
      return 0;
    }
    valid = true;
  }

  cout << "No\n";
}