#include <iostream>

int main()
{
  int a = 1;
  int tmp = 0;

  int count_EQL = 1;
  int result_EQL = -1;
  int count_MON = 1;
  int result_MON = -1;

  bool first = true;
  
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
      if (a >= tmp)
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
  }
  if (std::cin.fail() && !std::cin.eof())
  {
    std::cerr << "Bad input " << "\n";
    return 1;
  }

  bool error = false;
  if (result_EQL != -1)
  {
    std::cout << "Result EQL-SEQ: " << result_EQL << "\n";
  }
  else 
  {
    std::cerr << "Bad input" << "\n";
    error = true;
  }

  if (result_EQL != -1)
  {
    std::cout << "Result MON-INC: " << result_MON << "\n";
  }
  else
  {
    std::cerr << "Bad input" << "\n";
    error = true;
  }

  if (error)
  {
    return 2;
  }
}
