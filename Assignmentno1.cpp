#include <iostream>

using namespace std;

struct MovieData 
{
	string title;
	string director;
	int yr;
	float rtim;
	
};

void Info (MovieData s)
{
	cout << "Movie Title : " << s.title << endl;
	cout << "Movie Director : " << s.director << endl;
	cout << "Year of Release : " << s.yr << endl;
	cout << "Run Time in Minutes : " << s.rtim << endl;
}

void pinfo (MovieData *s)
{
	cout << "Movie Title : " << s->title << endl;
	cout << "Movie Director : " << s->director << endl;
	cout << "Year of Release : " << s->yr << endl;
	cout << "Run Time in Minutes : " << s->rtim << endl;
}

int main ()
{
	MovieData info = {"Avatar" , "James Cameron" , 2022 , 162};
	MovieData movie = {"Spy X Family" , "Kazuhiro Furuhashi" , 2022 , 1500};
	
	Info (info);
	cout << "-------------------------------" << endl;
	Info (movie);
	
	cout << endl;
	cout << "__________Displaying Using Pointers____________" << endl;
	cout << endl;
	
	pinfo (&info);
	cout << "-----------------------------------------" << endl;
	pinfo (&movie);
	
	
}
