#include <iostream>
#include <string>

using namespace std;

int main() {

  string s = "Welcome";

  char str[10];

  s.copy(str, s.length());
  cout << "Copy the elements inside of s into an a Character array: ";
  cout << str << endl;

  // Find Method:
  string str2 = "How are you?";

  cout << "Find the value '?' in " << str2 << endl;
  cout << "Found at: " << str2.find("?");

  //  This can also be used with s.find_first_of(), and s.find_last_of()

  // Substrings
}
