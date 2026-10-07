#include <iostream>

int main()
{
  int a = 1;
  int tmp = 0;
  int count = 1;
  int result = 1;
  //std::cout << count << "\n";
  while (true)
  {
    std::cin >> a;
    if (tmp == a && a != 0)
    {
      count++;
      if (count > result) 
      {
        result = count;
      }
    } else {
      count = 1;
    }
    tmp = a;
    if (a == 0)
    {
      break;
    }
    //std::cout << result << "\n";
  }
  std::cout << result << "\n";
}
