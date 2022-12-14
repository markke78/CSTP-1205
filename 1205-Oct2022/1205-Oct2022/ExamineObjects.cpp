
#include "Point.h"
#include <iostream>
#include <list>
#include <vector>
#include "3DPoint.h"
#include "PhoneNumber.h"
#include "Node.h"
#include "Fraction.h"
#include "Employee.h"
#include "Player.h"
#include "GameManager.h"
#include "Motorcycle.h"
#include "Car.h"
#include "Pair.h"

using namespace std;


void TestPointObject()
{
	// constructor with no parameters called
	Point p1, p2;

	p1.Set(5, 7);
	p2.Set(0, 10);

	cout << "p1: " << p1.GetX() << ", " << p1.GetY() << endl;
	cout << "p2: " << p2.GetX() << ", " << p2.GetY() << endl;

	// constructor with 2 int parameters called
	Point p3(13, 89);

	// copy constructor called here
	Point p4 = p3;

	Point* pPoint1 = &p1;
	pPoint1->GetX();
	(*pPoint1).GetX();

	Point* point2Pointer = new Point();

	Point p5;
	p5.Set(1, 1);
	p2.AddX(p5);

	Point3D p3d1;
	p3d1.x = 0;
	p3d1.y = 0;
	p3d1.z = 0;
	
	int *intArr = new int[10];
	Point* pointArr = new Point[50];

	for (int i = 0; i < 50; ++i)
	{
		pointArr[i].Set(0, 0);

	}

	delete[] intArr;
}

void TestSTLObjectVector()
{
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(19);
	numbers.push_back(7);

	for (auto n : numbers)
	{
		cout << "number: " << n << endl;
	}

	cout << "capacity of numbers: " << numbers.capacity() << endl;

	vector<int> numbers2(10);
	cout << "capacity of number2: " << numbers2.capacity() << endl;
}

void ErrorHandlingMidLevel()
{
	cout << "Mind level function calls ErrorHandlingExample2 " << end;
	ErrorHandlingExample2();
}

void ErrorHandlingExample1() {
	char errorMessage[] = "Wrong Input!";
	cout << "Enter the size of the array youneed to create: " << endl;
	int size = 0;
	cin >> size;

	try
	{
		if (size <= 0)
		{
			throw errorMessage; // throws an exception
		}
		// some other code is here which you want to bypass
		// the size is less than or equal to zero, we don't wnat the control to continue after line 93

	}
	catch (char message[]) // catches the exception
	{
		cout << endl << "*** " << message << " ***" << endl;
	}

}

void ErrorHandlingExample2() {
	char errorMessage[] = "Wrong Input!";
	cout << "Enter the size of the array youneed to create: " << endl;
	int size = 0;
	cin >> size;

	
		if (size <= 0)
		{
			throw errorMessage; // throws an exception
		}
		// some other code is here which you want to bypass
		// the size is less than or equal to zero, we don't wnat the control to continue after line 93



}


void TestSTLObjects()
{
	list<int> listOfIntegers;
	listOfIntegers.push_back(5);
	listOfIntegers.push_back(17);

	list<int> numbers{ 5, 7, 90, 8,67 };

	for (auto n : numbers)
	{
		cout << "n: " << n << endl;
	}
	numbers.sort();

	for (auto n : numbers)
	{
		cout << "n: " << n << endl;
	}

}



void TestNode() {
	Node n1(5);

	Node n2(23);
	n2.SetNext(&n1);

	Node n3(7, &n2);	
}

void TestScope()
{
	Player player1;
	player1.SetName("Jimmy", "Brady");

	GameManagement::WelcomePlayer(player1.GetName());

	Player player3;
	Player player2;
	player3 = player2 = player1;

	return;
}

void RumGame()
{
	Player p1 = GameManagement::GetPlayerInformation();

	GameManagement::WelcomePlayer(p1.GetName());

	bool isPlaying = true;
	while (isPlaying)
	{
		isPlaying = GameManagement::RunGame();
	}
}

void PrintNumberOfWheels()
{
	Vehicle vehicle;
	Car car;
	Motorcycle motorcycle;

	Car car2("Toyota");

	cout << "vehicle: " << vehicle.GetNumberOfWheels() << endl;
	cout << "car: " << car.GetNumberOfWheels() << endl;
	cout << "motorcycle: " << motorcycle.GetNumberOfWheels() << endl;

	// Testing the polymorphic behavior of C++ OOP
	// through the virtual GetNumberOfWheels method
	// which has been overriden in the derived classes, Car and Motorcycle.
	Vehicle* pVehicle = &vehicle;
	cout << "ptr to vehicle: " << pVehicle->GetNumberOfWheels() << endl;

	// we do not need to convert the pointer to a Motorcycle*
	pVehicle = &motorcycle;
	cout << "ptr to motorcycle: " << pVehicle->GetNumberOfWheels() << endl;

	// we do not need to convert the pointer to a Car*
	pVehicle = &car;
	cout << "ptr to car: " << pVehicle->GetNumberOfWheels() << endl;

	Car* pCar = dynamic_cast<Car*>(pVehicle);
	if (pCar != nullptr)
	{
		cout << "pCar: " << pCar->GetNumberOfWheels() << endl;
	}
}

void TestPlayer()
{
	Player player1;
	Player player2;
	Player player3;

	player1.SetId(1);
	cout << "player1.id:" << player1.GetId() << endl;

	player2.SetId(2);
	cout << "player2.id:" << player2.GetId() << endl;

	player3.SetId(3);
	cout << "player3.id:" << player3.GetId() << endl;
}

void TestPairTemplate()
{
	Pair<int> pair1;
	pair1.First = 10;
	pair1.Last = 99;

	Pair<string> pair2;
	pair2.First = "first value";
	pair2.Last = "last value";
	pair2.SetFound(false);

	cout << "pairl of type int: " << pair1.First << " - " << pair1.Last << " - " << pair1.IsFound() << endl;
	cout << "pairl of type string: " << pair2.First << " - " << pair2.Last << " - " << pair2.IsFound() << endl;
}