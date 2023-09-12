#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  ofstream file;
  file.open("test.txt", ios::out);
  if (file) {
    file << "10 11 12 7 89 0 8 99 13 14";
    cout << "ok\n";
  } else {
    cout << "err\n";
  }
  file.close();
  string output;
  ifstream file2;
  file2.open("test.txt", ios::in);

  if (file2) {
    getline(file2, output);
  } else {
    cout << "err\n";
  }
  string var = "";
  string nums[10];
  int j = 0;
  for (size_t i = 0; i < output.size(); ++i) {
    if (output[i] != ' ') {
      var += output[i];
    } else {
      nums[j] = var;
      var = "";
      ++j;
    }
  }

  int sum = 0;
  // translate string's num to int and sum
  for (int i = 0; i < 10; i++) {
    stringstream ss;
    ss << nums[i];
    int a;
    ss >> a;
    sum += a;
  }

  cout << sum;
}