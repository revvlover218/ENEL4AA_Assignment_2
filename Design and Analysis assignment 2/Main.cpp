#include "iostream"
#include "string"
#include "fstream"

using namespace std;

typedef struct claims
{
	int x;
	int y;
};

int main()
{

	int claims[8];
	string line;
	string num;
	int N, xi, yi, xo, yo;
	char c = '3';
	string sxi, syi;

	ifstream claim("land.txt", ios::in);
	fstream txt("land.out.txt", ios::out);

	if (claim.is_open())
	{

		cout << "File land.txt has been sucessfully opened." << endl;
		getline(claim, num);  //reads the first line of the file. Gets the number of claims 
		N = stoi(num, nullptr);
		cout << "Total Number of claims to be sorted: " << N << endl;

		claim >> sxi >> syi; //stores the x and y values.
		xi = stoi(sxi, nullptr); //convert to integer
		yi = stoi(syi, nullptr); //convert to integer

		if (txt.is_open())
		{

			cout << "File: Land.out.txt has been sucessfully created." << endl;

			txt << sxi << " " << syi << endl;
			cout << sxi << " " << syi << endl;
		}

		else
			cout << "Error creating file" << endl;

		/*for (int i = 0; i < N; i++)
		{
			getline(claim, line);
			syi = line.substr(2, 2);
			sxi = line.substr(0, 1);

			cout << line << endl;
			cout << sxi << " " << syi << endl;

		}*/

	    txt.close();
		claim.close();
	}

	else
	{
		cout << "Unable to open file." << endl;
	}





	system("pause");
	return 0;
}