#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()

{

int score = 0;
int k = rand() % 5; int l= rand() % 5; int m= rand() % 5; int n = rand() % 5; int o = rand() % 5;
  int a;
 string qa, aa, qb, ab, qc, ac, qd, ad, qe, ae;
   ofstream outputFile;
  

cout << "Enter Question 1: " << endl;
getline(cin, qa);
cout << "Enter Answer 1: " << endl;
getline(cin, aa);
cout << "Enter Question 2: " << endl;
getline(cin, qb);
cout << "Enter Answer 2: " << endl;
  getline(cin, ab);
cout << "Enter Question 3: " << endl;
getline(cin, qc);
cout << "Enter Answer 3: " << endl;
getline(cin, ac);
cout << "Enter Question 4: " << endl;
getline(cin, qd);
cout << "Enter Answer 4: " << endl;
getline(cin, ad);
  cout << "Enter Question 5: " << endl;
getline(cin, qe);
cout << "Enter Answer 5: " << endl;
getline(cin, ae);
  
  string  ansarray[] = { aa, ab, ac, ad, ae};
 
cout << " " << qa << "?" << endl << endl;
cout << "Is this the answer?" << endl << endl;
  cout << ansarray[k] << endl << endl;
cout << " 1 = Yes & 2 = No : " << endl << endl;
cin >> a;

if( a == 1 && k == 0 ){
score++;
  cout << "Correct!" << endl << endl;
}
  
  else if( a == 2 && k != 0){
    score++;
    cout << "Correct" << endl << endl;
  }

else{
cout << "Incorrect" << endl << endl;
}
  
  cout << " " << qb << "?" << endl << endl;
cout << "Is this the answer?" << endl << endl;
  cout << ansarray[l] << endl << endl << endl;
cout << " 1 = Yes & 2 = No : " << endl << endl;
cin >> a;

if( a == 1 && l == 1){
score++;
  cout << "Correct!" << endl << endl;
}
  
  else if( a == 2 && l != 1){
    score++;
    cout << "Correct" << endl << endl;
  }

else{
cout << "Incorrect" << endl << endl;
}
  
  cout << " " << qc << "?" << endl << endl;
cout << "Is this the answer?" << endl << endl;
  cout << ansarray[m] << endl << endl;
cout << " 1 = Yes & 2 = No : " << endl << endl;
cin >> a;

if( a == 1 && m == 2 ){
score++;
  cout << "Correct!" << endl << endl;
}
  
  else if( a == 2 && m != 2){
    score++;
    cout << "Correct" << endl << endl;
  }

else{
cout << "Incorrect" << endl << endl;
}
  cout << " " << qd << "?" << endl << endl;
cout << "Is this the answer?" << endl << endl;
  cout << ansarray[n] << endl << endl;
cout << " 1 = Yes & 2 = No : " << endl << endl;
cin >> a;

if( a == 1 && n == 3 ){
score++;
  cout << "Correct!" << endl << endl;
}
  
  else if( a == 2 && n != 3){
    score++;
    cout << "Correct" << endl << endl;
  }

else{
cout << "Incorrect" << endl << endl;
}
  
  cout << " " << qe << "?" << endl << endl;
cout << "Is this the answer?" << endl << endl;
  cout << ansarray[o] << endl << endl;
cout << " 1 = Yes & 2 = No : " << endl << endl;
cin >> a;

if( a == 1 && o == 4 ){
score++;
  cout << "Correct!" << endl << endl;
}
  
  else if( a == 2 && o != 4){
    score++;
    cout << "Correct" << endl << endl;
  }

else{
cout << "Incorrect" << endl << endl;
}
  cout << "Score: " << score << "/5" << endl << endl;
  
  
  
  outputFile.open ("test.txt");
  outputFile << qa << endl;
  outputFile << aa << endl << endl;
  outputFile << qb << endl;
  outputFile << ab << endl << endl;
  outputFile << qc << endl;
  outputFile << ac << endl << endl;
  outputFile << qd << endl;
  outputFile << ad << endl << endl;
  outputFile << qe << endl;
  outputFile << ae << endl << endl;  
  outputFile.close();
  
return 0;
}

