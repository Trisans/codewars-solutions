// #include <bits/stdc++.h>
class Printer
{
public:
  static std::string printerError(const std::string &s) {
    std::string no = "nopqrstuvwxyz";
    std::string ans;
    int errorCount = 0;
    for (int i = 0; i < s.length(); i++) {
      for (int j = 0; j < no.length(); j++) {
        if (s[i] == no[j]) {
          errorCount++;
        }
      }
    }
    ans = std::to_string(errorCount) + "/" + std::to_string(s.length());
    return ans;
  }
};