#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car {
public:
	Car();
	Car(string name, string car_plate, string owner_name);
	string name;
	string car_plate;
	string owner_name;

	void display();
};
#endif // !

