#include <iostream>

using namespace std;

int main() {
  string challengeString = "Welcome";

  cout << "Find the length of the string: " << challengeString << endl;

  cout << "The length of the string is: " << challengeString.length() << endl;

  // Access all letters of the string:
  for (int i = 0; challengeString[i] != '\0'; i++) {
    cout << challengeString[i] << endl;
  }

  return 0;

}
