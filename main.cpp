using namespace std;

#include <iostream>

void roman(int number);

int main()
{
	int SIZE = 1000;
	int array[SIZE];
	for(int i=0; i<SIZE; ++i)
	{
		array[i] = i+1;
	}

	for(int i=0; i<SIZE; ++i)
	{
		roman(array[i]);
		cout << "\t" << array[i] << "\t";
	}
	return 0;
}

void roman(int number)
{
	if(number < 1)
		return;
	if(number < 4)
	{
		for(int i=0; i<number; ++i)
		{
			cout << "I";
		}
		return;
	}
	if(number < 6)
	{
		roman(5 - number);
		cout << "V";
		return;
	}
	if(number < 9)
	{
		cout << "V";
		roman(number - 5);
		return;
	}
	if(number < 11)
	{
		roman(10 - number);
		cout << "X";
		return;
	}
	if(number < 40)
	{
		cout << "X";
		roman(number - 10);
		return;
	}
	if(number < 50)
	{
		cout << "XL";
		roman(number - 40);
		return;
	}
	if(number < 90)
	{
		cout << "L";
		roman(number - 50);	
		return;
	}
	if(number < 100)
	{
		cout << "XC";
		roman(number - 90);
		return;	
	}
	if(number < 400)
	{
		cout << "C";
		roman(number - 100);
		return;
	}
	if(number < 500)
	{
		cout << "CD";
		roman(number - 400);
		return;
	}
	if(number < 900)
	{
		cout << "D";
		roman(number - 500);
		return;
	}
	if(number < 1000)
	{
		cout << "CM";
		roman(number - 900);
		return;
	}
	if(number > 999)
	{
		cout << "M";
		roman(number - 1000);
		return;
	}
	cout << number;		
}
