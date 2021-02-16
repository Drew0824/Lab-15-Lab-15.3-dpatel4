#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double s;
  double area;
  double n;
  double pi = 3.14159265359;

  cout << "Enter the number of side:" << endl;
  cin >> n;

  cout << "Enter the side:" << endl;
  cin >> s;

  area = n * s * s / (4 * (tan(pi/n)));

  cout << "The area of the hexagon is " << area << endl;


}