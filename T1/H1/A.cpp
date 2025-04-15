#include <iostream>
#include <string>

int main() {
  int tRoom = 0;
  int tCond = 0;
  std::string mode = "";
  std::cin >> tRoom >> tCond >> mode;
  int tMin = tRoom > tCond ? tCond : tRoom;
  int tMax = tRoom + tCond - tMin;
  if (mode == "freeze") {
    std::cout << tMin;
    return 0;
  }
  if (mode == "heat") {
    std::cout << tMax;
    return 0;
  }
  if (mode == "auto") {
    std::cout << tCond;
    return 0;
  }
  if (mode == "fan") {
    std::cout << tRoom;
    return 0;
  }
  return 0;
}
