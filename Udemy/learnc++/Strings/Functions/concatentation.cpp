#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char stringConcat1[10] = "Good";
  char stringConcat2[10] = " Morning";
  cout << "Now see the example strcat() with two strings" << endl;
  cout << "string1 " << stringConcat1 << endl;
  cout << "string2 " << stringConcat2 << endl;
  strcat(stringConcat1, stringConcat2);
  cout << "Combined " << stringConcat1 << endl;

  return 0;
}
