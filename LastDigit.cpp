#include <string>
#include <cmath>

int Module(const std::string& str, int mod)
{
  int res = 0;
 
  for (int i = 0; i < str.size(); i++)
      res = (res * 10 + str[i] - '0') % mod;
 
  return res;
}

int last_digit(const std::string &str1, const std::string &str2) {
  if (str1.size() == 1 && str2.size() == 1 && str1[0] == '0' && str2[0] == '0')
  {
      return 1;
  }
  
  if(str1.size() == 1 && str1[0] == '0')
  {
    return 0;  
  }
  
  if(str2.size() == 1 && str2[0] == '0')
  {
    return 1;  
  }
  
  int exp = Module(str2, 4);
  exp = exp?exp:4;
  
  int res = std::pow(str1[str1.size() - 1] - '0', exp);
 
  // Return last digit of result
  return res % 10;
}