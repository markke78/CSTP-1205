
#include "3DPoint.h"
#include "Point.h"
#include <iostream>
#include<list>
#include "Node.h"
#include "Fraction.h"
#include "Employee.h"
#include "Player.h"
#include "GameManager.h"


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


void TestGame()
{
	Player p1 = GameManagement::GetPlayerInformation();
	
	GameManagement::WelcomePlayer(p1.GetName());

	bool isPlaying = true;
	while (isPlaying)
	{
		isPlaying = GameManagement::RunGame();
	}
}