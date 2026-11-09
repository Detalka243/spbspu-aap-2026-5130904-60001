#include <iostream>
#include <cctype>

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
        result[index++] = str1[i];
      }
      if (str2[i] != '\0')
      {
        result[index++] = str2[i];
      }
      ++i;
    }
    result[index] = '\0';
  }
  void shr_sym(const char * str, char * result)
  {
    size_t number_char = 26;
    size_t index = 0;
    for (size_t i = 0; i < number_char; ++i)
    {
      int found = 0;
      for (size_t j = 0; str[j] != '\0'; ++j)
      {
        if (!(('a' + j == str[i]) || ('A' + j == str[i])))
        {
          result[index++] = 'a' + i;
        }
      }
      if (found == 0)
      {
        result[index++] = 'a' + i;
      }
    }
    result[index] = '\0';
  }
}
int main()
{

}
