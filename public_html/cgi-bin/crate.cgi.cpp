#include <iostream>
#include <sstream> 
#include <string>
using namespace std;

int main() {
  
  string str = "";
  cin >> str;
  
  int number1, number2, number3, number4, charge, profit,cost,volume;
  const double COST_PER_CUBIC_FOOT = 0.23;
  const double CHARGE_PER_CUBIC_FOOT = 0.5;
  
  volume = number4;
  
  string str1 = str.substr(7,1);
  string str2 = str.substr(15,1);
  string str3 = str.substr(24,1);
  
  stringstream(str1) >> number1;

	stringstream(str2) >> number2;

	stringstream(str3) >> number3;

	number4 = number1 * number2 * number3;  
 
  
  cout << "Content-type: text/html" << endl << endl;
  cout << "<html><head><title>customer order</title></head></html>";
  cout << "Data recieved: " << str << endl << "<br>";
  cout << "Length: " << number1 << endl << "<br>";
  cout << "Width: " << number2 << endl << "<br>";
  cout << "Height: " << number3 << endl << "<br>";
  cout << "The total order: " << number4 << " cubic feet " << endl << "<br>";

  volume = number4;
  cost = volume * COST_PER_CUBIC_FOOT;
  charge = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;
  
  cout << "The volume of the crate is " << volume << " cubic feet" << endl << "<br>";
  cout << "Cost to build: $" << cost << endl << "<br>";
  cout << "Charge to customer: $" << profit << endl << "<br>";
  
  
  cout << "</body></html>" << endl;
  return 0;  
}
