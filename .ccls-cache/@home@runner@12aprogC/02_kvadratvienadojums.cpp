
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