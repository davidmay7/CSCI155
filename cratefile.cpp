#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
  ofstream outputFile;
  const double COST_PER_CUBIC_FOOT = 0.23;
  const double CHARGE_PER_CUBIC_FOOT = 0.5;
  double length, width, height, volume, cost, charge, profit;
  
  cout << setprecision(2) << fixed << showpoint;
  cout << "Enter the dimensions of the crate (in feet): " << endl;
  cout << "Length: ";
  cin >> length;
  cout << "Width: ";
  cin >> width;
  cout << "Height: ";
  cin >> height;
  
  volume = length * width * height;
  cost = volume * COST_PER_CUBIC_FOOT;
  charge = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;
  
  outputFile.open ("Crate.txt");
  outputFile << volume << endl;
   outputFile << cost << endl;
   outputFile << charge << endl;
   outputFile << profit << endl;
  outputFile.close();
  
  cout << "The volume of the crate is " << volume << " cubic feet" << endl;
  cout << "Cost to build: $" << cost << endl;
  cout << "Charge to customer: $" << profit << endl;
  
  return 0;
}
