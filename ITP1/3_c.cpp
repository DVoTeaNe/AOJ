#include <iostream>

int main()
{
  int x, c = 1;
  while(std::cin >> x){
    if (x == 0) break;
    std::cout << "Case " << c << ": " << x << std::endl;
    c++;
  }
  return 0;
}