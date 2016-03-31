
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
 
int main ()
{
   // local variable declaration:
   char grade;
   ofstream outputFile;
  
cout << "What is the grade : ";
  cin >> grade;
   switch(grade)
   {
   case 'A' :  
   case 'a' :
      cout << "Excellent!" << endl;
      break;
   case 'B' :
   case 'b' :
   case 'C' :
   case 'c' :
      cout << "Well done" << endl;
      break;
   case 'D' :
   case 'd' :
      cout << "You passed" << endl;
      break;
   case 'F' :
   case 'f' :
      cout << "Better try again" << endl;
      break;
   default :
      cout << "Invalid grade" << endl;
   }
  
  outputFile.open ("grade.txt");
  outputFile << grade << endl;
  outputFile.close();
   cout << "Your grade is " << grade << endl;
 
   return 0;
}
