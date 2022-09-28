/*
#include <iostream>

using namespace std;

int main() {
  int myNum = 5;                       // Integer (whole number)
  float myFloatNum = 5.99;             // Floating point number
  double myDoubleNum = 9.98;           // Floating point number
  char myLetter = 'D';                 // Character
  bool myBoolean = true;               // Boolean
  string myText = "Hello how are you"; // String

  cout << myNum << endl;
  cout << myText << endl;
  cout << "Size of Int : " << sizeof(int) << endl;
  cout << "Size of Text : " << sizeof(string) << endl;


int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;
cout << "/n/n/n";



  }
*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {

  int a, b, c;
  float diskrim;
  float x1, x2;
  cout << "Ievadi skaitli: ";
  cin >> a;
  cout << "Ievadi skaitli: ";
  cin >> b;
  cout << "Ievadi skaitli: ";
  cin >> c;
  diskrim = b * b - 4 * a * c;
  // ax^2+bx+c=0;
  if (a == 0 || b == 0 || c == 0) {
    cout << "Nederīgi ievadīti skaitļi";
  }
  if (diskrim >= 0) {
    x1 = (-b + sqrt(diskrim)) / (2 * a);
    x2 = (-b - sqrt(diskrim)) / (2 * a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  } else {
    cout << "Sakņu nav /n";
  }
}