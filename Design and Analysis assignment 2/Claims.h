#ifndef CLAIMS_H
#define CLAIMS_H
#include "iostream"
#include "string"

using namespace std;

class Claims
{

private:
	int N; //number of times a program has to loop
	string sxi, syi;
	int xi, yi, xo, yo;

public:

	Claims();
	~Claims();

	/*int getSpace(string); //function which searches for a space in a string and returns the postion of it in the string.
	int convertString(string, int, int); //function which takes in as parameters the string, a start and finish value 
	//which is used to create a substring of the string. Once a substring has been
	//created, the function returns a converted integer version of the substring.
	*/
};

#endif