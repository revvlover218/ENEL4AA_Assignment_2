#include "iostream"
#include "string"
#include "fstream"
#include "Claims.h"

using namespace std;

int main()
{

	//int claims[8];
	string line;
	string num;
	int N, xi, yi, xo, yo, spacepos;
	char c = '3';
	string sxi, syi;
	//int x[] = {0};
    //int y[] = {0};
	ClaimsXY pf;

	ifstream claim("land.txt", ios::in);
	fstream txt("land.out.txt", ios::out);

	if (claim.is_open())
	{

		cout << "File land.txt has been sucessfully opened." << endl;
		getline(claim, num);  //reads the first line of the file. Gets the number of claims 
		N = stoi(num, nullptr);
		cout << "Total Number of claims to be sorted: " << N << endl;

		pf.setNum(N);
		
		if (txt.is_open())
		{

			cout << "File: Land.out.txt has been sucessfully created." << endl;

			while (getline(claim, line))
			{

				spacepos = pf.getSpace(line);
				xi = pf.convertString(line, 0, spacepos);
				yi = pf.convertString(line, spacepos + 1, line.length());

				txt << xi + 10 << " " << yi + 10 << endl;
			}
		}

		else
		{
			cout << "Error creating file" << endl;
		}
			
		txt.close();
		claim.close();
	}

	else
	{
		cout << "Unable to open file." << endl;
	}

	//for (int i = 0; i < N; i++)
		//cout << x[i] << " " << y[i] << endl;

	system("pause");
	return 0;
}