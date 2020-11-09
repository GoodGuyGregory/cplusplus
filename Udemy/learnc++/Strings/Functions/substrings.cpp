#include <iostream>

using namespace std;

int main() {

  char s1[20] = "Programming";
  char s2[10] = "gram";


  // it is also possible to use the strstr method for substring checking
  if (strstr(s1, s2) != NULL) {
    // substring will find all occurances of the substring and display the remaining values
    cout << strstr(s1, s2) << endl;
  }
  else
    cout << "Not Found in the Original String" << endl;

    if (strchr(s1, 'D') != NULL) {
      // substring will find all occurances of the substring and display the remaining values
      cout << strchr(s1, 'D') << endl;
    }
    else
      cout << "Character " << 'D'  << " Not Found in the Original String" << endl;

    cout << "Compare Two Strings with strcmp(s1, s2)" << endl;

    cout << "S1: " << s1 << endl;
    cout << "S2: " << s2 << endl;

    cout << "This is the Diffrence of their ASCII Values " << strcmp(s1, s2) << endl;

  return 0;

}
