#include<iostream>
#include <fstream>
#include <string>
#include <iomanip>

#include "v1.h" 

using namespace std;

int media_pick;

int main()
{
		cout << "Type in a number " << endl;
	  cin >> media_pick;
	  cout << "You typed " << media_pick << endl;
	
	Media c;  // Creating object
	c.display();
	c.display(media_pick);

	
	CD Dur;	
  Dur.setSongs(21);
  Dur.setDuration(64.58);

 
  
	cout << "Total number of songs on "   <<  "is "
	<< Dur.songs << " for a total of " << Dur.duration << " minutes" << endl;
	

	 
	
	return 0;
}


