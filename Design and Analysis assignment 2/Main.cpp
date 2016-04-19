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
	//ofstream txt("land.out.txt", ios::out);
	//txt.close();*****place at end when complete.

	if (claim.is_open())
	{

		cout << "File land.txt has been sucessfully opened." << endl;

		getline(claim, num);  //reads the first line of the file. Gets the number of claims 

		N = stoi(num, nullptr);
		cout << "Total Number of claims to be sorted: " << N << endl;

		for (int i = 0; i < N; i++)
		{
			getline(claim, line);
			syi = line.substr(2, 2);
			sxi = line.substr(0, 1);

			cout << line << endl;
			cout << sxi << " " << syi << endl;

		}

		claim.close();
	}

	else
	{
		cout << "Unable to open file." << endl;
	}

	system("pause");
	return 0;
}