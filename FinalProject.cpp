#include <iostream>
using namespace std;
#include "Car.h"
#include "CircularQueue.h"


int main() {
	CircularQueue parking;

	CircularQueue queue;

	string name;
	string car_plate;
	string owner_name;

	string choose;
	int count = 1;

	while (choose != "4") {


		cout << "Welcome to Car Parking System!" << endl;
		cout << "1.addCar" << endl;
		cout << "2.removeCar" << endl;
		cout << "3.display" << endl;
		cout << "4.exit" << endl;

		cin >> choose;

		if (choose == "1")
		{
			if (queue.isFull()) {
				cout << "Parking Queue is full!" << endl;
				break;
			}


			cout << "Enter Owner Name: ";
			cin >> owner_name;
			cin.ignore();

			cout << "Enter car name: ";
			cin >> name;
			cin.ignore();

			cout << "Enter car plate: ";
			cin >> car_plate;
			cin.ignore();

			queue.enqueue(Car(name, car_plate, owner_name));


			cout << "Car added to parking!" << endl;

			cout << "---------------------------------------" << endl;

			queue.display();


		}
		else if (choose == "2"){
			queue.dequeue();
			cout << "Car removed from parking!" << endl;
			cout << "---------------------------------------" << endl;
			queue.display();
			cout << "---------------------------------------" << endl;
		}
		else if (choose == "3") {
			queue.display();
			

		}
		else if (choose == "4")
		{
			break;
		}


	}

	return 0;
}