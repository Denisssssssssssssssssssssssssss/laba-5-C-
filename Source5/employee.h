#pragma once
#include "jobtitle.h"
#include "equipment.h"
#include "transport.h"
#include "weapon.h"
#include "checkfileextension.h"
#include <fstream>
#include <string>

using namespace std;

class employee {
public:
	employee(jobtitle jtitle, equipment equip, transport tran, weapon weap);
	employee(int allfields);
	employee();
	void output();
	void input();
	int empcost();
	void printcounter();
	void minuscounter();
	void minuscounter(int number);
	employee operator + (employee e1);
	employee& operator++(); //����������
	employee operator++(int); //�����������
	employee* get(); //�����, ������������ �������� ����� ���������
	employee& getadress(); //�����, ������������ �������� ����� ������
	void tofile(ofstream& file, string filename);
	void getfromfile(ifstream& file, string filename);
private:
	static int counter;
	int id; //�������������� �����
	jobtitle jtitle; //���������
	equipment equip; //����������
	transport tran; //���������
	weapon weap; //������
};
