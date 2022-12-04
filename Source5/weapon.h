#pragma once
#include "checkfileextension.h"
#include <string>
#include <fstream>
using namespace std;

class weapon
{
	friend class employee;
private:
	string weptitle;
	int wepcost;

public:
	weapon();
	weapon(int allfields);
	weapon(string weptitle, int wepcost);
	void input();
	void output();
	void tofile(ofstream& file, string filename);
	void getfromfile(ifstream& file, string filename);
};

