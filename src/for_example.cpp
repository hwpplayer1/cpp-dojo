#include <iostream>

int main()
{
  int sum = 0;

  for (int value = 1; value <= 10; ++value)
    sum += value;
  std::cout << "Sum of 1 to 10 inclusive is "
	    << sum << std::endl;
  return 0;
}
