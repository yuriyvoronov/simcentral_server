// simcentralApp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "tinyxml.h"
using namespace std;

class car {
	 
public:
	char name[30],
		car_class[20];
	void get_car(char name_ent[30], char car_class_ent[20])
	{
		name = name_ent;
		car_class = car_class_ent;
		cout << "Still working there\n Name is:" << name << "\n Car class is:"<< car_class;

		//cout << "Enter car name:\n";
		//cin >> name;
		_getch();
	}

};
class track {
private:
	int id;
	char name[20],
		track_class[20];
public:
	void get_track()
	{

		_getch();
	}
};

void main()
{
	char n[30], c[20];
	car Car;
	cout << "enter car name:\n";
	cin >> n;
	cout << "enter car class\n";
	cin >> c;
	Car.get_car(n,c);
	cout << "Name of car is:\n"<<Car.name;
	_getch();
    
	
}

