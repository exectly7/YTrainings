#include <iostream>

int main() {
  int a = 0;
  int b = 0;
  int c = 0;
  std::cin >> a >> b >> c;
  if (a + b > c && b + c > a && a + c > b) {
    std::cout << "YES";
    return 0;
  }
  std::cout << "NO";
  return 0;
}
