#include <iostream>
using namespace std;
int main() {
  int i, n, t1 = 0, t2 = 1, next_Term = 0;
  std::cout << "Kindly enter the number of terms :)";
  std::cin >> n;
  std::cout << "Fibonacci Series:";
  for (i = 1; i <= n; ++i) {
    if (i == 1) {
      std::cout << t1 << ",";
    }
    if (i == 2) {
      std::cout << t2 << ",";
    }
    next_Term = t1 + t2;
    t1 = t2;
    t2 = next_Term;
    std::cout << next_Term << ",";
  }

  return 0;
}
