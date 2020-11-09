#include <iostream>

using namespace std;

int main() {
  //  Converting strings to Integers
  char s1[10] = "235";
  char s2[10] = "54.78";

  // mention the base of the interger for conversion last
  long int x = strtol(s1, NULL, 10);

  float y = strtof(s2, NULL);

  cout << x << endl;
  cout << y << endl;
  
  return 0;

}
