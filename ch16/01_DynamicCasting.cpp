#include<iostream>
using namespace std;

class Car
{
private:
	int fuelGauge;

public:
	Car(int fuel) : fuelGauge(fuel)
	{}
	void ShowCarState() { cout << "잔여 연료량 : " << fuelGauge << endl; }

};

class Truck :public Car
{
private:
	int freightWeight;

public:
	Truck(int fuel, int weight)
		:Car(fuel), freightWeight(weight)
	{}
	void showTruckState()
	{
		ShowCarState();
		cout << "화물의 무게: " << freightWeight << endl;
	}
};

int main()
{
	Car* pcar1 = new Truck(80, 200);
	//Truck* ptruck1 = dynamic_cast<Truck*>(pcar1);	//	error


	Car* pcar2 = new Car(120);
	//Truck* ptruck2 = dynamic_cast<Truck*>(pcar2);	//	error

	Truck* ptruck3 = new Truck(70, 150);	//	유도클래스
	//ptruck3->ShowCarState();
	//ptruck3->showTruckState();
	Car* pcar3 = dynamic_cast<Car*>(ptruck3);	//	참조클래스
	//pcar3->ShowCarState();

	return 0;

}