// simcentralApp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

class car {
	 
public:
	char name,
		car_class;
	void get_car(char name_ent, char car_class_ent)
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
	char name,
		track_class;
public:
	void get_track()
	{

		_getch();
	}
};

void main()
{
	char n, c;
	car Car;
	cout << "enter car name:\n";
	cin >> n;
	cout << "enter car class\n";
	cin >> c;
	Car.get_car(n,c);
	cout << "Name of car is:\n"<<Car.name;
	_getch();
    
	
}

