#include <iostream>

// #include <string>
using namespace std;

int main() {

  string str = "today";

  string::iterator it;

  for (it=str.begin(); it != str.end(); it++) {
    //  subtract 32 from the ASCII value of the string
    *it = *it-32;
  }

  cout << str << endl;
}
