#include <iostream>

int main()
{
  // cinに連続して数値を入力するのがめちゃくちゃ簡単
  int a, b;
  std::cin >> a >> b;
  std::cout << a * b << " " << 2 * (a + b) << std::endl;
  return 0;
}