#include <iostream>
using namespace std;
int main()
{
	float cel;
	cout << "*******Program is nunning*******\n================================\n\n";

	cout << "Enter Celsius temperature : ";
	cin >> cel;
	cout << "Fahrenheit = " << (1.8 * cel) + 32 << endl;
	cout << "Now weather in Thailand is " << (((1.8 * cel) + 32 > 70 ) ? "Hot ":"Cool " ) << endl << endl;
	cout << "================================\n";
	system("pause");
	return 0;
}