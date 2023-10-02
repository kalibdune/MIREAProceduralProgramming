// Умножение матртиц
#include <iostream>
using namespace std;

int main() {
  const int A[3][4]{{5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0}

  };
  const float B[4][2]{{1.20, 0.50}, {2.80, 0.40}, {5.00, 1.00}, {2.00, 1.50}};
  float C[3][2]{{A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0] +
                     A[0][3] * B[3][0],
                 A[0][0] * B[0][1] + A[0][1] * B[1][1] + A[0][2] * B[2][1] +
                     A[0][3] * B[3][1]},
                {A[1][0] * B[0][0] + A[1][1] * B[1][0] + A[1][2] * B[2][0] +
                     A[1][3] * B[3][0],
                 A[1][0] * B[0][1] + A[1][1] * B[1][1] + A[1][2] * B[2][1] +
                     A[1][3] * B[3][1]},
                {A[2][0] * B[0][0] + A[2][1] * B[1][0] + A[2][2] * B[2][0] +
                     A[2][3] * B[3][0],
                 A[2][0] * B[0][1] + A[2][1] * B[1][1] + A[2][2] * B[2][1] +
                     A[2][3] * B[3][1]}};

  int maxIndex = 0;
  float max = C[0][0];
  int minIndex = 0;
  float min = C[0][0];

  int maxComIndex = 0;
  float maxCom = C[0][1];
  int minComIndex = 0;
  float minCom = C[0][1];

  float sum = C[0][0];
  float sumCom = C[0][1];
  for (int i = 1; i < 3; i++) {
    if (max < C[i][0]) {
      maxIndex = i;
      max = C[i][0];
    }
    if (min > C[i][0]) {
      minIndex = i;
      min = C[i][0];
    }

    if (maxCom < C[i][1]) {
      maxComIndex = i;
      maxCom = C[i][1];
    }
    if (minCom > C[i][1]) {
      minComIndex = i;
      minCom = C[i][1];
    }
    sum += C[i][0];
    sumCom += C[i][1];
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << C[i][j] << ' ';
    }
    cout << endl;
  }
  cout << "1) больше всего: продавец №" << maxIndex + 1 << endl;
  cout << "1) меньше всего: продавец №" << minIndex + 1 << endl;
  cout << "2) больше всего комиссионных: продавец №" << maxComIndex + 1 << endl;
  cout << "2) меньше всего комиссионных: продавец №" << minComIndex + 1 << endl;
  cout << "3) Общая сумма:" << sum << endl;
  cout << "4) Общая сумма комиссионых: " << sumCom << endl;
  cout << "5) Общая сумма денег, пройденных через руки продавцов: "
       << sum - sumCom << endl;
  return 0;
}