
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <conio.h>
#include <vector>

using namespace std;

struct stuff
{
	string name;
	int value;
	float weight;
};

void file_open()
{
	fstream file;
	string name,s,item;
	vector<string> items;
	vector<int> values;
	vector<double> weights;
	int value, i = 0, w = 0, v = 0, n = 0;
	double weight;
	cin >> name;
	file.open(name, ios::in);
	if (file.good() == true)
	{
		cout << "Uzyskano dostep do pliku!" << endl;
		while (getline(file, s))
		{
			istringstream iss(s);
			if ((iss) >> item >> weight >> value)
			{
				items.push_back(item);
				weights.push_back(weight);
				values.push_back(value);
			}
		}
		for (int i = 0; i < items.size(); i++)
		{
			stuff all;
			all.name = items[i];
			all.value = values[i];
			all.weight = weights[i];
		}

	}
	else cout << "Nie udalo dostac sie do pliku!" << endl;
}





int main(int argc, char* argv[])
{
	 file_open();
}


