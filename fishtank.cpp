#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
  double length, width, height, volume;
  cout << "What is the length? ";
  cin >> length;
  cout << "What is the width? ";
  cin >> width;
  cout << "What is the height ";
  cin >> height;
  volume = (length * width * height);
  cout << "The tank is " << (volume / 231) << " gallons" << endl;
  return 0;  
}
