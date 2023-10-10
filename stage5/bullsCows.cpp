#include <iostream>
#include <time.h>
#include <string>

using namespace std;

bool isUniqe(int* arr, int num) {
    for (int i = 0; i < 4; ++i) {
        if (arr[i] == num) {
            return false;
        }
    }
    return true;
}

int* getRandomNum() {
    static int arr[4];
    int i = 0;
    while (i < 4) {
        srand(time(0));
        int num = rand() % 10;

        if (isUniqe(arr, num)) {
            cout << num;
            arr[i] = num;
            ++i;
        }
    }

    return arr;
}

int main() {

    int* arrNum = getRandomNum();

    cout << "\njust guess!\n";

    while (true) {
        int guess;
        cin >> guess;
        if (guess > 9999) {
            cout << "num higher than 4 digits\n";
            break;
        }
        int arrGuess[4];

        arrGuess[0] = guess / 1000;
        arrGuess[1] = (guess % 1000) / 100;
        arrGuess[2] = (guess % 100) / 10;
        arrGuess[3] = guess % 10;

        string state;

        for (int i = 0; i < 4; ++i) {
            if (arrGuess[i] == arrNum[i]) {
                state += "+";
            }
            else if (!isUniqe(arrNum, arrGuess[i])) {
                state += "-";
            }
            else {
                state += "x";
            }
        }

        if (state == "++++") {
            cout << "Great!!\n";
            break;
        }

        cout << state + "\n";
    }
}