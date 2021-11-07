#include <stdio.h>
int main()
{
	float h = 4;
	float l = 5;
	float w = 6;
	printf("The height of the box: %f\n",h);
	printf("The length of the box: %f\n",l);
	printf("The width  of the box: %f\n",w);
	printf("The total volume: %lf\n",h*l*w);
	printf("Total weight:%lf\n",h*l*w/1.5);
	return 0;
}
