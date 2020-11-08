#include <iostream>
#include <cstring>

using namespace std;

int main()
{

  // Variables:
  char *stringLengthVar;


  cout << "Methods for Strings in C++" << endl;
  // to determine the length of any string:
  cout << "===========================" << endl;
  cout << "Enter string to determine its size" << endl;
// only takes a single word
  // cin >> stringLengthVar;
  cin.getline(stringLengthVar, 100);
  cout << strlen(stringLengthVar) << endl;
  cout << "strlen(<s>) returns the size of the string" << endl;



  return 0;

}
