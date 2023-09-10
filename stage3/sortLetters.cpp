#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string line = "nivmxarosbehtqpfywkdjuclg";

  ofstream file;
  file.open("sort.txt", ios::out);
  if (file) {
    file << line;
    cout << "writing complete!\n";
  } else {
    cout << "err\n";
  }
  file.close();

  string output;
  ifstream file2;
  file2.open("sort.txt", ios::in);

  if (file2) {
    getline(file2, output);
    cout << "reading complete!\n";
  } else {
    cout << "err\n";
  }

  file2.close();
  sort(output.begin(), output.end());
  cout << output << "\n";
}