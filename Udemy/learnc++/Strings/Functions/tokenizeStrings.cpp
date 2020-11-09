#include <iostream>


using namespace std;

int main() {
  char s1[20] = "x=10;y=20;z=35";

  //  Only Returns the First Token
  cout << strtok(s1, "=;") << endl;

  //  to Return all of the values inside the string it must be iterated
  char *token = strtok(s1, ";");

  while(token != NULL)
  {
    cout << token << endl;
    token = strtok(NULL, ";");
  }

  return 0;

}
