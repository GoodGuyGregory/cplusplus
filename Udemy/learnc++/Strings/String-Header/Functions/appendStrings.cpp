#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "hello";

  str.append(" world");

  cout << str.capacity() << endl;
  cout << str << endl;

  str.insert(6, "inserted Stuff ");

  cout << "lets replace what we added " << endl;

  str.replace(5,15,"");

  // get excited!!!
  str.push_back('!');

  cout << str << endl;
  // calmn the fuck down..
  str.pop_back();

  cout << str << endl;
  return 0;

}
