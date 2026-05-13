#include <iostream>
using namespace std;
#include "Car.h"

Car::Car() {
	name = "";
	car_plate = "";
	owner_name = "";
}

Car::Car(string name, string car_plate, string owner_name) {
	this->name = name;
	this->car_plate = car_plate;
	this->owner_name = owner_name;
}

void Car::display() {
	cout << "Name: " << name << endl;
	cout << "Car Plate: " << car_plate << endl;
	cout << "Owner Name: " << owner_name << endl;
	cout << "---------------------------------------" << endl;

}