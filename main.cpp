#include <iostream>
#include <string>

using namespace std;
int myAtoi(string s) {
  int i =0;
  if (s.empty()) return 0;
  if (s[0] == ' ') {
    while (s[i] == ' ') i++;
  }
  int sign = 1;
  if (s[i] == '-') {
    sign = -1;
    i++;
  } else if (s[i] == '+') {
    i++;
  }

  long long res = 0;
  while (i < s.size() && isdigit(s[i])) {
    res = res * 10 + (s[i] - '0');
    if (res > INT_MAX) {
      return sign == 1 ? INT_MAX : INT_MIN;
    }
    i++;
  }
  return int(res)*sign;
}


int main() {
  std::cout << "Hello, World!" << std::endl;
  cout<<myAtoi(" -42")<<endl;
  return 0;
}
