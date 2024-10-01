#include <iostream>
#include "../include/main.h";

using namespace std;

int main() {
  int N = 15;

  cout << "(Iterative) SumIter = " << SumIter(N) << endl;
  cout << "(Recursion down, param decreasing) Sum1 = " << Sum1(N, N) << endl;
  cout << "(Recursion down, param increasing) Sum2 = " << Sum2(1, N) << endl;
  cout << "(Recursion up, param decreasing) Sum3 = " << Sum3(N, N) << endl;
  cout << "(Recursion up, param increasing) Sum4 = " << Sum4(1, N) << endl;

  return 0;
}