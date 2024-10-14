#include "Max.h"

int main(void)
{
	int a, b, Max;
	a = data_input();
	b = data_input();
	Max = comp(a, b);
	data_print(Max);
	return 0;
}
