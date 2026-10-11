#include <iostream>

int main()
{
  int a = 1;
  int tmp = 0;

  int count_EQL = 1;
  int result_EQL = 0;
  int count_MON = 1;
  int result_MON = 0;
  //std::cout << count << "\n";
  while (std::cin >> a)
  {

    if (a == 0)
    {
      break;
    }
    //4 задача
    if (tmp == a)
    {
      count_EQL++;
      if (count_EQL > result_EQL) 
      {
        result_EQL = count_EQL;
      }
    } else {
      count_EQL = 1;
      if (result_EQL == 0)
      {
        result_EQL = 1;
      }
    }
    
    tmp = a;
    //std::cout << result << "\n";
    }
  }
  std::cout << "Результат EQL: " << result_EQL << "\n";
  std::cout << "Результат MON: " << result_MON << "\n";
}
