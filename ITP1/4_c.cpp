#include <iostream>
#include <string>

int main()
{
  while (true) {
    int a,b;
    std::string op;
    std::cin >> a >> op >> b;
    if(op == "+"){
      std::cout << a + b << std::endl;
    } else if (op == "-") {
      std::cout << a - b << std::endl;
    } else if (op == "*") {
      std::cout << a * b << std::endl;
    } else if (op == "/") {
      std::cout << a / b << std::endl;
    } else {
      break;
    }
  }
}