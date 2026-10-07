#include <iostream>

int main()
{
  int a = 1;
  int tmp = 0;
  int count = 1;
  int result = 0;
  //std::cout << count << "\n";
  do
  {
    std::cin >> a;
    if (a == 0)
    {
      break;
    }
    if (tmp == a)
    {
      count++;
      if (count > result) 
      {
        result = count;
      }
    } else {
      count = 1;
      if (result == 0)
      {
        result = 1;
      }
    }
    
    tmp = a;
    //std::cout << result << "\n";
  } while (std::cin);
  std::cout << result << "\n";
}
