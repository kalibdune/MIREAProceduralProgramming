#include <iostream>

using namespace std;

int monks[600][3] = { {0}, {0}, {0} };

int getMonkTree(int monk) {
    for (int i = 0; i < 600; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (monks[i][j] == monk) {
                return i + 1;
            }
        }
    }
    return 0;
}

int main() {
    int numRows;
    cout << "enter number of data rows: ";
    cin >> numRows;

    while (numRows != 0) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        monks[a - 1][0] = b;
        monks[a - 1][1] = c;
        monks[a - 1][2] = d;
        --numRows;
    }

    cout << "enter type of task and monk number\n";

    while (true) {
        int taskNum, num1, num2;
        cin >> taskNum;
        if (taskNum == 1) {
            cin >> num1;
            int tmp = getMonkTree(num1);
            if (tmp == 0) {
                cout << num1 << " is not a monk!\n";
            }
            else {
                cout << tmp << " ";
                while (tmp != 1) {
                    tmp = getMonkTree(tmp);
                    cout << tmp << " ";
                }
                cout << "\n";
            }
        }
        else {
            cin >> num1 >> num2;
            int tmp1 = getMonkTree(num1);
            int tmp2 = getMonkTree(num2);
            if (tmp1 == 0) {
                cout << num1 << " is not a monk!\n";

            }
            else if (tmp2 == 0) {
                cout << num2 << " is not a monk!\n";
            }
            else {
                int arr1[600];
                int arr2[600];
                int s = 0;
                while (tmp1 != 0 && tmp2 != 0) {
                    cout << getMonkTree(tmp1) << "\t" << s << "\n";
                    tmp1 = getMonkTree(tmp1);
                    tmp2 = getMonkTree(tmp2);
                    arr1[s] = tmp1;
                    arr2[s] = tmp2;
                    ++s;
                }

                for (int i = 0; i < s; ++i) {
                    for (int j = 0; j < s; ++j) {
                        if (arr1[i] == arr2[j]) {
                            cout << num1 << " and " << num2 << " monks. Teacher: " << arr1[i] << "\n";
                        }
                    }
                }
            }
        }
    }
}