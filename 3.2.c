#include <stdio.h>
int main()
{
	float i,r1,r2,r3,r4,r5,t1,t2,t3,t4,t5,ta;
	printf("Enter Gross Income in £ :");
	scanf("%f",&i);
	if (i<=12500)
	{
		printf("Your take home salary is : %f\n",i);
		printf("The total tax paid is : 0\n");
	}
	else if(i>12500 && i<=14585)
	{
		r1 = i - 12500;
		t1 = r1 * 0.19;
		ta = i - t1;
		printf("Your take home salary is : %f\n",ta);
		printf("The total tax paid is : %f\n",t1);
	}
	else if(i>14585 && i<=25158)
	{
		r1 = 14585 - 12500;
	        t1 = r1 * 0.19;
		r2 = i - 14585;
		t2 = r2 * 0.20;
		ta = i - t1 - t2;
		printf("Your take home salary is : %f\n",ta);
		printf("The total tax paid is : %f\n",t1 + t2);
	}
	else if(i>25158 && i<=43430)
	{
		r1 = 14585 - 12500;
		//printf("r1%f\n",r1);
	        t1 = r1 * 0.19;
		//printf("t1%f\n",t1);
		r2 = 25158 - 14585;
		//printf("r2%f\n",r2);
		t2 = r2 * 0.20;
		//printf("t2%f\n",t2);
		r3 = i - 25158;
		//printf("r3%f\n",r3);
		t3 = r3 * 0.21;
		//printf("t3%f\n",t3);
		ta = i - t1 - t2 - t3;
		printf("Your take home salary is : %f\n",ta);
		printf("The total tax paid is : %f\n",t1 + t2 + t3);
	}
	else if(i>43430 && i<=150000)
	{
		r1 = 14585 - 12500;
	        t1 = r1 * 0.19;
		r2 = 25158 - 14585;
		t2 = r2 * 0.20;
		r3 = 43430 - 25158;
		t3 = r3 * 0.21;
		r4 = i - 43430;
		t4 = r4 * 0.41;
		ta = i - t1 - t2 - t3 - t4;
		printf("Your take home salary is : %f\n",ta);
		printf("The total tax paid is : %f\n",t1 + t2 + t3 + t4);
	}
	else
	{
		r1 = 14585 - 12500;
	        t1 = r1 * 0.19;
		r2 = 25158 - 14585;
		t2 = r2 * 0.20;
		r3 = 43430 - 25158;
		t3 = r3 * 0.21;
		r4 = 150000 - 43430;
		t4 = r4 * 0.41;
		r5 = i - 150000;
		t5 = r5 * 0.46;
		ta = i - t1 - t2 - t3 - t4 -t5;
		printf("Your take home salary is : %f\n",ta);
		printf("The total tax paid is : %f\n",t1 + t2 + t3 + t4 + t5);
	}
	return 0;
}
