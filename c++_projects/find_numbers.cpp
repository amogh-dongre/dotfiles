#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  std::cout << "enter the value of the number to be searched :) \n";
  std::cout << "enter the number of elements :)";
  int n, num, sum;
  std::cin >> n >> num;
  int a[num];
  for (int i = 0; i < num; i++) {
    std::cin >> a[i];
  }
  for (int i = 0; i < num; i++) {
    sum += a[i];
  }
  int avg = sum / num;
  std::cout << "the sum of all of the elements is: " << sum << "\n";
  std::cout << "the average of all of the elements is: " << avg << "\n";
  return 0;
}
