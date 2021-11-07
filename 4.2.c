#include <stdio.h>
float ohm_law(float u, float r);
float series(int ra, int rb);
float parallel(int ra, int rb);
float parallel_three(float ra, float rb ,float rc);

float ohm_law(float u, float r)
{
	float i;
	i = u/r;
	return i;
}

float series(int ra, int rb)
{
	float rs = (float)ra + (float)rb;
	return rs;
}

float parallel(int ra, int rb)
{
	float rp;
	rp = ((float)ra*(float)rb)/((float)ra + (float)rb);
	return rp;
}

float parallel_three(float ra, float rb, float rc)
{
	float rp;
	rp=1/((1/ra) + (1/rb) + (1/rc));
	return rp;
}

int main()
{
	int r1 = 100, r2 = 200, r3 = 300, r4 = 400, r5 = 500, r6 = 600, r7 = 700;
	float ra, rb, rc, rg, i;
	ra = series(r1 ,r2);
        rb = parallel(r3, r4);
	rc = series(r5, parallel(r6, r7));
	rg = parallel_three(ra, rb, rc);
	i = ohm_law(12, rg);
	printf("The current is %f mA\n",1000*i);
	return 0;
}
		




