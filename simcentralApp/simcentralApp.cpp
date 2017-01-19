// simcentralApp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;

class car {
private: 
	char name,
		car_class;
		 
public:
	void get_car(char name_ent, char car_class_ent)
	{
		name = name_ent;
		car_class = car_class_ent;
		cout << "Still working there\n" << name << "\n Car class is:"<< car_class;

		//cout << "Enter car name:\n";
		//cin >> name;
		getchar();
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

	getchar();
    
	
}

