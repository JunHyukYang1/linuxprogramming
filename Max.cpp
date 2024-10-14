#include <iostream>
#include "Max.hpp"

using namespace std;
void Max::input()
{
	cout << "Input:";
	cin >> a;
	cout << "Input:";
	cin >> b;
}
void Max::comp()
{
	if (a > b)	max = a;
	else if (a < b)	max = b;
}
void Max::print()
{	cout << "Max:" << max << endl;	}
