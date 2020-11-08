#include <iostream>
#include <cstring>

using namespace std;


int main() {
  char s1[30] = "Dope Program for Copying";
  char s2[30] = "";

  strcpy(s2,s1);

  cout << s2 << endl;

  return 0;

}
