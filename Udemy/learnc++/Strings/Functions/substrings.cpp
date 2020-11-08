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




  return 0;

}
