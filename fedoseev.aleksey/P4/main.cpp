#include <iostream>

namespace fedoseev
{
  void uni_two(const char * str1, const char * str2, char * result)
  {
    size_t index = 0;
    size_t i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
      if (str1[i] != '\0')
      {
        result[++index] = str1[i];
      }
      if (str2[i] != '\0')
      {
        result[++index] = str2[i];
      }
      ++i;
    }
    result[index] = '\0';
  }
  void shr_sym(const char * str, char * result)
  {

  }
}
int main()
{

}
