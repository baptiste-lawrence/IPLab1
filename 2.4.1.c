#include <stdio.h>
int main()
{
	int x = 1;
	float exp_x;
	exp_x = 1 + x + (float)x*x/2 + (float)x*x*x/6 + (float)x*x*x*x/24;
	printf("The value is %f\n",exp_x);
	return 0;
}
