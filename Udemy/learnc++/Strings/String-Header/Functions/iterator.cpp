#include <iostream>

// #include <string>
using namespace std;

int main() {

  string str = "today";

  string::iterator it;

  // Iterator Approach:
  for (it=str.begin(); it != str.end(); it++) {
    //  subtract 32 from the ASCII value of the string
    *it = *it-32;
  }

  cout << str << endl;

  cout << "basic iteration without an iterator object" << endl;

  for (int i = 0; str[i] != '\0'; i++) {
    cout << str[i] << endl;
    str[i] += 32;
  }

  cout << "Removes the Capital Letters" << endl;

  cout << str << endl;
}
