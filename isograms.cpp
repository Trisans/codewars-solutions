bool is_isogram(std::string str) {
  char temp;
  bool alreadyExists = false;
  
  for (int i = 0; i < str.length(); i++) {
  	str[i] = std::tolower(str[i]);
  }
  
  for (int i = 0; i < str.length(); i++) {
    temp = str[i];
    alreadyExists = false;
    for (int j = 0; j < str.length(); j++) {
      if (temp == str[j]) {
        if (alreadyExists == true) {
          return false;
        } else {
          alreadyExists = true;
        }
      }
    }
  }
  return true;
}