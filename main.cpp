#include <iostream>
#include <cmath>
using namespace std;

double Sum1(int i, const int N) {
  if (i < 1) return 0;
  return (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i) + Sum1(i - 1, N);
}

double Sum2(int i, const int N) {
  if (i > N) return 0;
  return (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i) + Sum2(i + 1, N);
}

double Sum3(int i, const int N, double sum = 0) {
  sum += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
  if (i <= 1) return sum;
  return Sum3(i - 1, N, sum);
}

double Sum4(int i, const int N, double sum = 0) {
  sum += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
  if (i >= N) return sum;
  return Sum4(i + 1, N, sum);
}

double SumIter(int N) {
  double sum = 0;
  for (int i = 1; i <= N; i++) {
    sum += (sin(10.0 * i) + cos(10.0 / i)) / sqrt(i);
  }
  return sum;
}

int main() {
  int N = 15;

  cout << "(Iterative) SumIter = " << SumIter(N) << endl;
  cout << "(Recursion down, param decreasing) Sum1 = " << Sum1(N, N) << endl;
  cout << "(Recursion down, param increasing) Sum2 = " << Sum2(1, N) << endl;
  cout << "(Recursion up, param decreasing) Sum3 = " << Sum3(N, N) << endl;
  cout << "(Recursion up, param increasing) Sum4 = " << Sum4(1, N) << endl;

  return 0;
}