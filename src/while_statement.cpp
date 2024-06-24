#include <iostream>

int main()
{
  int sum = 0, value = 1;

  while(value <= 10)
    {
      sum += value;
      ++value;
    }

  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

  return 0;
}
