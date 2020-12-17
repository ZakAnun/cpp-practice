#include <iostream>
#include <string>

using namespace std;

int main() {

  // practice-01
  string first_name;
  string last_name;

  cout << "Hello World!\n";
  cout << "Please enter your name: \n";
  cout << "first name: ";
  cin >> first_name;
  cout << "last name: ";
  cin >> last_name;
  cout << "Hello " + last_name + " " + first_name + ", Welcome cpp !!\n";

  return 0;
}