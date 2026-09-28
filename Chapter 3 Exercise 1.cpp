#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int gallons;
	cout << "How many gallons of gas can your car hold? ";
	cin >> gallons;

	int miles;
	cout << "How many miles can your car travel on a full tank? ";
	cin >> miles;

	cout << "Your car per gallon can drive " << miles/gallons << " miles." << endl;
}
