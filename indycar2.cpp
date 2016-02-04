#include <iostream>
#include <iomanip> 
using namespace std;


int main() {
  double time, speed;
  cout << "How many seconds did the lap take? ";
  cin >> time;
  speed = (2.5 / time * 3600);
  
  cout << "The average speed was " << speed << " mph" << endl ;
  cout << "If they continue at this average pace they will finish the race in " << setprecision (2) << 500 / speed << " hours" << endl;
  
  
  
return 0;  
}
