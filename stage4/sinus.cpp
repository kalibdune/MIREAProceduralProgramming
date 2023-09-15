#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#define _USE_MATH_DEFINES

#include <cstdlib>
#include <unistd.h>

using namespace std;

void printFrame(vector<vector<char>> &frame) {
  for (size_t i = 0; i < frame.size(); ++i) {
    for (size_t j = 0; j < frame[i].size(); ++j) {
      cout << frame[i][j];
    }
    cout << "\n";
  }
}

vector<vector<char>> frameTemplate(int width, int height) {

  vector<vector<char>> frame;
  for (int i = 0; i < height; ++i) { // отрисовка всех линий
    vector<char> line;

    if (i == 0 || i == height - 1) { // отрисовка нижнего и верхнего барьеров
      for (int k = 0; k < width; ++k) {
        line.push_back('#');
      }
    } else {
      // отрисовка обозначений по оси Y
      if (i == 11) {
        line.push_back('0');
      } else if (i == 1 || i == height - 2) {
        line.push_back('1');
      } else {
        line.push_back('#');
      }
      // отрисвка заполнения -
      for (int j = 0; j < width - 2; ++j) {
        line.push_back('-');
      }

      line.push_back('#'); // отрисовка последнего символа барьера
    }
    frame.push_back(line);
  }
  return frame;
}

void addDotsToFrame(vector<vector<char>> &frame, int height, double rad = 0) {
  int x = 1;
  double s = rad;
  for (; rad < 0.017 * 700 + s; rad += 0.12) {
    double s = round(sin(rad) * 10);
    vector<char> line;
    line = frame[abs(s)];
    if (s >= 0) {
      line = frame[height / 2 - s];
      line[x] = '&';
      frame[height / 2 - s] = line;
    } else {
      line = frame[11 + abs(s)];
      line[x] = '&';
      frame[height / 2 + abs(s)] = line;
    }
    ++x;
  }
}

void animate() {
  int width = 100;
  int height = 23;
  double offset = 0;
  while (true) {

    vector<vector<char>> frame = frameTemplate(width, height);
    addDotsToFrame(frame, height, offset);
    printFrame(frame);
    usleep(100000);
    system("clear");
    frame.clear();
    offset += 0.17;
  }
}

int main() {
  int width = 100;
  int height = 23;

  vector<vector<char>> frame = frameTemplate(width, height);
  addDotsToFrame(frame, height);
  printFrame(frame);

  // animate();
}