#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void printArr(int arr[21][21]) {
    for (int i = 0; i < 21; ++i) {
        for (int j = 0; j < 21; ++j) {
            if (arr[i][j] > 9) cout << arr[i][j] << " ";
            else cout << arr[i][j] << "  ";
        }
        cout << "\n";
    }
    cout << "after print\n";
}

int main() {
    ifstream dat("dat.txt");
    ifstream out("out.txt");
    int generation;
    cin >> generation;

    int present[21][21] = {{0}, {0}};
    int future[21][21] = {{0}, {0}};

    if (dat.is_open()) {

        int j = 0;

        while (j!=21) {
            string buffer;
            dat >> buffer;
            int i = 0;
            for (int let = 0; let < 21; ++let) {
                if (buffer[let] == 'X'){
                    present[j][i] = 1;
                }
                ++i;
            }
            ++j;
        }
        printArr(present);

        while(generation != 0) {
            for (int i =0; i < 21; ++i) {
                for (int j = 0; j < 21; ++j) {
                    int c = 0;

                    if (i - 1 >= 0) {
                        if (present[i-1][j] > 0) {
                            c++;
                        }
                    }
                    if (i + 1 < 21) {
                        if (present[i+1][j] > 0) {
                            c++;
                        }
                    }
                    if (j - 1 >= 0) {
                        if (present[i][j-1] > 0) {
                            c++;
                        }
                    }
                    if (j + 1 < 21) {
                        if (present[i][j+1] > 0) {
                            c++;
                        }
                    }

                    if (present[i][j] >= 1 && present[i][j] <= 11) {
                        if (c == 2 || c == 3) {
                            future[i][j] = present[i][j]+1;
                        } else {
                            future[i][j]=0;
                        }

                    } else if (present[i][j] == 0) {
                        future[i][j] = 1;
                    }
                    if (future[i][j] == 12){
                        future[i][j] = 0;
                    }
                }
            }
            //swap present and future
            for (int i = 0; i < 21; ++i) {
                for (int j = 0; j < 21; ++j) {
                    present[i][j] = future[i][j];
                }
            }
            usleep(1000000);
            system("clear");
            printArr(present);
            --generation;
            cout << generation << "\n";
        }
    }

    return 0;
}