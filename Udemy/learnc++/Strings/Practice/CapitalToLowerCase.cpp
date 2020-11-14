#include <iostream>

using namespace std;

int main() {
  string challengeString = "CHALLENGE PHRASE TO BE CHANGED";

  cout << "change the case of the string: " << challengeString << endl;

  // Access all letters of the string:
  for (int i = 0; challengeString[i] != '\0'; i++) {
    challengeString[i] += 32;
    if (challengeString[i] == '@') {
      challengeString[i] = ' ';
    }
  }

  cout << challengeString << endl;

  return 0;

}
