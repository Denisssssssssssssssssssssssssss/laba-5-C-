#include "employee.h"
#include <conio.h>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <iostream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i, j;
    int a = 10000;
    string str = "Охранник водитель", str1 = "Дубинка",
        str2 = "Форма", str3 = "Легковое авто",
        filename = "text.txt";

    jobtitle jt3(str, a);
    weapon weap3(str1, a);
    equipment equip3(str2, a);
    transport trans3(str3, a);

    employee emp, emp3(jt3, equip3, trans3, weap3), arr1[3], arr2[2][2];
    employee(*AA)[3], BB[2][3];
    AA = BB;


    ofstream file;
    file.exceptions(ofstream::badbit | ofstream::failbit);
    try
    {
        file.open(filename, ios_base::app);
        emp3.tofile(file, filename);
        file.close();
    }
    catch (exception& ex1)
    {
        cout << ex1.what();
    }



    ifstream file1;
    file1.exceptions(ifstream::badbit | ifstream::failbit);
    try
    {
        file1.open(filename);
        for (i = 0; i < 3; i++) {
            arr1[i].getfromfile(file1, filename);
            arr1[i].output();
        }
        cout << endl;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                arr2[i][j].getfromfile(file1, filename);
                cout << "arr2[" << i << "]" << endl;
                arr2[i][j].output();
            }
        }
        file1.close();
    }
    catch (exception& ex2)
    {
        cout << ex2.what();
    }
    return 0;
}

