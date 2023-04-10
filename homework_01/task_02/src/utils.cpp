#include "utils.hpp"
#include <stack>
using namespace std;

int Calculate(const std::string& data) {
  char operat = data[1];
  char a1 = data[0];
  char b1 = data[2];
  int a = a1 - '0';
  int b = b1 - '0';
  switch (operat)
  {
    case '-':
        cout << a - b <<'\n';
        break;

    case '+':
        cout << a + b << '\n';
        break;
    case '*':
        cout << a * b << '\n';
        break;
    case '/':
        cout << a / b << '\n';
        break;
    default:
        cout << "Error\n";
        break;
    }
  return 0;
}
