#include <iostream>
#include <cctype>

namespace fedoseev
{
  char * expand(const char * str, size_t new_size)
  {
    char * result = (char *)malloc(sizeof(char) * new_size);
    if (!result)
    {
      std::cerr << "Memory allocation error\n";
      return nullptr;
    }
    size_t i = 0;
    for (; str[i] != '\0'; ++i)
    {
      result[i] = str[i];
    }
    result[i] = '\0';

    return result;
  }
  char * read_line(const char * str)
  {
    size_t default_capacity = 16;
    size_t capacity = default_capacity;
    char * result = (char *)malloc(sizeof(char) * default_capacity);
    if (!result)
    {
      std::cerr << "Memory allocation error\n";
      return nullptr; 
    }
    char symbol;
    size_t i = 0;
    while (std::cin.get(symbol) && symbol != '\0')
    {
      if (i + 1 >= capacity)
      {
        capacity *= 2;
        result[i] = '\0';
        char * temp = result;
        result = expand(temp, capacity);
        if (!result)
        {
          free(temp);
          return nullptr;
        }
        free(temp);
      }
      result[i++] = symbol;
    }
    result[i] = '\0';
    return result;
  }
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
