#include <string>

std::string abbrevName(std::string name)
{
  for (int j = 0; j < name.length(); j++) {
    name[j] = std::toupper(name[j]);
  }

  std::string returnString(1, name[0]);
  returnString += ".";
  int i;
  for (i = 0; name[i] != ' '; i++) {}
  
  returnString += name[i + 1];
  
  return returnString;
}