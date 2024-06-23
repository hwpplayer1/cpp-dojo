#include <iostream>

int main()
{
  std::cout << "enter two numbers:" << std::endl;
  int value1 = 0, value2 = 0;
  std::cin >> value1 >> value2;
  std::cout << "The sum of " << value1 << " and " << value2
	    << " is " << value1 + value2 << std::endl;

  return 0;
}
