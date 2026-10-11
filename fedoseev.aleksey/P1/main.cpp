#include <iostream>

int main()
{
  int a = 1;
  int tmp = 0;

  int count_EQL = 1;
  int result_EQL = 0;
  int count_MON = 1;
  int result_MON = 0;

  bool first = true;
  //std::cout << count << "\n";
  while (std::cin >> a)
  {

    if (a == 0)
    {
      break;
    }

    //4 задача
    if (first)
    {
      count_EQL = 1;
      result_EQL = 1;
    }
    else 
    {
      if (tmp == a)
      {
        count_EQL++;
        if (count_EQL > result_EQL) 
        {
          result_EQL = count_EQL;
        }
      } 
      else 
      {
        count_EQL = 1;
      }
    }
    //6 задача
    if (first)
    {
      count_MON = 1;
      result_MON = 1;
    }
    else 
    {
      if (a > tmp)
      {
        ++count_MON;
        if (count_MON > result_MON)
        {
          result_MON = count_MON;
        }
      }
      else 
      {
        count_MON = 1;
      }
    }
       
    tmp = a;
    first = false;
    //std::cout << result << "\n";
    }
  }
  std::cout << "Результат EQL: " << result_EQL << "\n";
  std::cout << "Результат MON: " << result_MON << "\n";
}
