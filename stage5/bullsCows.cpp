#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

bool isUniqe(int *arr, int num) {
  for (int i = 0; i < 4; ++i) {
    if (arr[i] == num) {
      return false;
    }
  }
  return true;
}

int *getRandomNum() {
  static int arr[4];
  int i = 0;
  while (i < 4) {
    srand(time(0));
    int num = rand() % 10;

    if (isUniqe(arr, num)) {
      cout << num << "\n";
      arr[i] = num;
      ++i;
    }
  }

  return arr;
}

int main() {

  int num = rand() % 10;
  int *arrNum = getRandomNum();

  cout << "just guess!\n";

  while (true) {
    int plus = 0;
    int minus = 0;

    int guess;
    cin >> guess;
    int arrGuess[4];

    arrGuess[0] = guess / 1000;
    arrGuess[1] = (guess % 1000) / 100;
    arrGuess[2] = (guess % 100) / 10;
    arrGuess[3] = guess % 10;

    for (int i = 0; i < 4; ++i) {
      if (arrGuess[i] == arrNum[i]) {
        ++plus;
      } else if (!isUniqe(arrNum, arrGuess[i])) {
        ++minus;
      } else {
        NULL;
      }
    }

    if (plus == 4) {
      cout << "Great!!\n";
      break;
    }

    cout << "Pluses: " << plus << "\nMinuses: " << minus << "\n\n";
  }
}