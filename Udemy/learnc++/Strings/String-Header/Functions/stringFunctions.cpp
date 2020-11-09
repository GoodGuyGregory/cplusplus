#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "hello";

  if (str.empty() != true) {
    cout << "The String isn't empty!" << endl;

  cout << "String to compare is: " << str << endl;
  cout << "Length of the string is: " << str.length() << endl;
  cout << "The Capacity of the String is: " << str.capacity() << endl;
  cout << "The Max Size of a string is: " << str.max_size() << endl;

  }
}
