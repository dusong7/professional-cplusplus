#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
  const string str("<body><h1>Header</h1><p>Some text</p></body>");
  regex r("<h1>(.*)</h1><p>(.*)</p>");
  const string format("H1=$1 and P=$2");
  string result = regex_replace(str, r, format);
  cout << "Original string: '" << str << "'" << endl;
  cout << "New string     : '" << result << "'" << endl;

  return 0;
}