#include "SpreadsheetCell.h"
#include <iostream>

using namespace std;

int main() {
  int number = 10;
  cout << "The number is " << number << endl;
  string str;
  cin >> number >> str;

  cout << "-------------------------------" << endl;

  SpreadsheetCell myCell, anotherCell, aThirdCell;

  cin >> myCell >> anotherCell >> aThirdCell;
  cout << myCell << " " << anotherCell << " " << aThirdCell << endl;

  cout << "-------------------------------" << endl;

  operator>>(operator>>(operator>>(cin, myCell), anotherCell), aThirdCell);
  operator<<(operator<<(operator<<(operator<<(cout, myCell), anotherCell), aThirdCell), "\n");

  return 0;
}
