#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ofstream file;
  string line = "lol man";
  file.open("lol.txt", ios::out);
  if (file) {
    file << line;
    cout << "writing complete!\n";
  } else {
    cout << "err\n";
  }
  file.close();

  string output;
  ifstream file2;
  file2.open("lol.txt", ios::in | ios::binary);
  if (file2) {
    getline(file2, output);
    cout << output << "\n";
  } else {
    cout << "err\n";
  }
  file2.close();
}