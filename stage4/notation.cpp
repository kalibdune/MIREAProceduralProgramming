#include <cmath>
#include <iostream>
#include <string>

using namespace std;

string alphabet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string fromDecimal(int num, int s) {
  string res;

  while (num > 0) {
    res += alphabet[num % s];
    num /= s;
  }
  string rev;
  for (size_t i = res.size(); i > 0; --i) {
    rev += res[i - 1];
  }

  return rev;
}

int toDecimal(string num, int s) {
  int res = 0;
  int j = 0;
  for (int i = num.size(); i > 0; --i) {
    if (alphabet.find(num[j]) > s - 1) {
      return 0;
    }
    res += pow(s, i - 1) * alphabet.find(num[j]);
    ++j;
  }
  return res;
}

int main() {
  int n, oldn;
  string num;
  cout << "enter num, old notation, new notation\n";
  cin >> num >> oldn >> n;
  int newNum = toDecimal(num, oldn);
  cout << fromDecimal(newNum, n) << "\n";
}
