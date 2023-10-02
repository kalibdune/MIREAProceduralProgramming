#include <iostream>

using namespace std;

bool prime(int num) {
  for (int i = 2; i < num; ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  --n;
  int arr[n];
  int primes[n];
  primes[0] = 2;

  int j = 2;
  for (int i = 0; i < n; ++i) {
    arr[i] = j;
    ++j;
  }

  int k = 1;
  for (int num : arr) {
    bool flag = true;
    for (int i = 0; i < k; ++i) {
      if (num % primes[i] == 0) {
        flag = false;
      }
    }

    if (flag) {
      primes[k] = num;
      ++k;
    }
  }

  for (int i = 0; i < k; ++i) {
    cout << primes[i] << "\n";
  }
}