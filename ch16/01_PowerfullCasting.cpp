#include<iostream>
using namespace std;

class Car
{
private:
	int fuelGauge;

public:
	Car(int fuel): fuelGauge(fuel)
	{}
	void ShowCarState() { cout << "�ܿ� ���ᷮ : " << fuelGauge << endl; }

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
		cout << "ȭ���� ����: " << freightWeight << endl;
	}
};

int  main()
{
	Car* pcar1 = new Truck(80, 200);
	Truck* ptruck1 = (Truck*)pcar1;//����ȯ �� ����
	cout << endl;

	Car* pcar2 = new Car(120);
	Truck* ptruck2 = (Truck*)pcar2;
	ptruck2->showTruckState();

	

}