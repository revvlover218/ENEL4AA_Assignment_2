#include "Claims.H"
#include "iostream"
#include "string"

using namespace std;

ClaimsXY::ClaimsXY(){}

ClaimsXY::~ClaimsXY(){}

//Accessor and Mutator functions
//Accessor

int ClaimsXY::getNum()
{
	return N;
}


//Mutator
void ClaimsXY::setNum(int n)
{
	//**If(n >= 0) {N = n;} //error checking
	N = n;
}


int ClaimsXY::getSpace(string line)
{

	int pos;

	for (int i = 0; i < line.length(); i++)
		if (line[i] == ' ') pos = i;

	return pos;
}

int ClaimsXY::convertString(string line, int start, int finish)
{

	string txt;

	txt = line.substr(start, finish);

	return stoi(txt, nullptr);
}