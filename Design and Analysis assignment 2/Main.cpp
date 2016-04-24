#include "iostream"
#include "string"
#include "fstream"
#include "Claims.h"

using namespace std;

int main()
{

	//int claims[8];
	string line, lineout;
	string num;
	int N, xi, yi, xo, yo, spacepos;
	char c = '3';
	string sxi, syi;
	//int x[] = {0};
    //int y[] = {0};
	ClaimsXY pf;
	int t1;
	int t2;
	int t3;
	int begin , end, curr;

	ifstream claim("land.txt", ios::in);
	fstream txt("land.out.txt", ios::out | ios::in);


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

		/*	getline(claim, line);
			t1 = claim.tellg();
			cout << line << "\t\t\t" << t1 << endl;
			getline(claim, line);
			t2 = claim.tellg();
			cout << line << "\t\t\t" << t2 << endl;
			getline(claim, line);
			t3 = claim.tellg();
			cout << line << "\t\t\t" << t3 << endl;
			
			claim.seekg(4);
			getline(claim, line);
			cout << line << endl;
			getline(claim, line);
			t3 = claim.tellg();
			cout << line << "\t\t\t" << t3 << endl;*/
			cout << endl;

			begin = txt.tellg();
			txt.seekg(0, ios::end);
			end = txt.tellg();
			txt.seekg(begin);

			cout << end - begin << endl;

			if ((end - begin) == 2) //insert first record
			{
			}
				
			getline(claim, line);
				txt << line << endl;
				cout << line << endl;
			
			getline(claim, line);
			curr = txt.tellp();
			txt.seekp(curr - 5);
			txt << endl << line << endl;
			cout << line << endl;
		
			
		/*	
		

			txt << line << endl;*/

			//getline(txt, line);
			//cout << line << endl;
			
			

/*		while (getline(claim, line))
			{

				spacepos = pf.getSpace(line);
				xi = pf.convertString(line, 0, spacepos);
				yi = pf.convertString(line, spacepos + 1, line.length());

				txt << xi + 10 << " " << yi + 10 << endl;
			}*/
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