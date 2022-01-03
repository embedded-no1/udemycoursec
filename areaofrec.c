#include<stdio.h>
int main()
{
	double widthrec=0;
	double heightrec=0;
	scanf("%lf", &widthrec);
	scanf("%lf", &heightrec);
	double perimeter=(widthrec+heightrec)*2;
	double area=widthrec*heightrec;
	printf("The Height is %.1f\n The Width is %.1f\n The Perimeter is %.1f\n The area is %.1f", heightrec, widthrec, perimeter, area);
	return 0;
}