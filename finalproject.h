#ifndef MEDIA_H
#define MEDIA_H 

using namespace std;

class Media
{  
public:
   struct info
    {
    	string artist;
   	 	string album;
    	int year;
    };
			
 Media();

 info display() 
  {
  info media1;
	media1.artist="Johnny Cash";
	media1.album="The Legend of Johnny Cash";
	media1.year=2005;
  
  cout << "Artist : " << media1.artist << endl;
	cout << "Album : " << media1.album << endl;
  cout << "Year Released : " << media1.year << endl; 

return media1;
	
	 }
    
	 ~Media();
  

// overload function
void display(int media_pick) 
		{
     
  	cout << "overloaded" << endl;
      
		}
};

class CD : public Media
{
public:
int songs;
double duration;
string album;

//album = media1.album;

	int setSongs(int s)
      {
         songs = s;
				 return (s);
      }
			
	int setDuration(double d)
      {
         duration = d;
				 return (d);
      }
   

};




Media::Media()
	{
  cout << "constuctor " << endl;
	}


Media::~Media()
	{	
  cout << "destructor " << endl; 
	}



#endif 
