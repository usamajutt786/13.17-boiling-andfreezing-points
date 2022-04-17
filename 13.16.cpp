
#include<iostream>
using namespace std;
class freezingAndBoiling
{
	double temperature;
public:

	freezingAndBoiling()
	{
		temperature = 0;
	}
	bool isEthylFreezing(int  temp)
	{
		temperature = temp;
		double freezing_point = -141.1;
		if (freezing_point >= temperature)

			return true;
		else
			return false;

	}
	bool isEthylBoiling(int temp)
	{
		temperature = temp;
		double boiling_point = 78.37;
		if (boiling_point >= temperature)

			return true;
		else
			return false;

	}
	bool isOxygenFreezing(int  temp)
	{
		temperature = temp;
		double freezing_point = -218.8;
		if (freezing_point >= temperature)

			return true;
		else
			return false;

	}
	bool isOxygenBoiling(int temp)
	{
		temperature = temp;
		double boiling_point = -183;
		if (boiling_point >= temperature)

			return true;
		else
			return false;

	}
	bool isWaterFreezing(int  temp)
	{
		temperature = temp;
		double freezing_point = 0;
		if (freezing_point <= temperature)

			return true;
		else
			return false;

	}
	bool isWaterBoiling(int temp)
	{
		temperature = temp;
		double boiling_point = 100;
		if (boiling_point >= temperature)

			return true;
		else
			return false;

	}
};
	int main()
	{
		int tempr;
		cout << "enter the temperature:";
		cin >> tempr;
		freezingAndBoiling liquids;
		if (liquids.isEthylBoiling(tempr))
		{
			cout << "ethyle is boiling ." << endl;
		}
		if (liquids.isEthylFreezing(tempr))
		{
			cout << "ethylr is freezing ." << endl;
		}
		if (liquids.isOxygenBoiling(tempr))
		{
			cout << "oxygen is boiling ." << endl;
		}
		if (liquids.isOxygenFreezing(tempr))
		{
			cout << "oxygen is freezing ." << endl;
		}
		if (liquids.isWaterBoiling(tempr))
		{
			cout<<"water is boiling ."<<endl;
		}
		if (liquids.isWaterFreezing(tempr))
		{
			cout << "water is freezing " << endl;
		}
	}
	