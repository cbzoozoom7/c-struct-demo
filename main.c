//main.c
//Christopher Bowman
//Created Mon 9 Oct 2023
#include <stdio.h>
#include "point.h"
int main() {
	Point a;
	Point b;
	printf("X value for A: ");
	scanf("%lf", &a.x);
	printf("Y value for A: ");
	scanf("%lf", &a.y);
	printf("Z value for A: ");
	scanf("%lf", &a.z);
	printf("X value for B: ");
	scanf("%lf", &b.x);
	printf("Y value for B: ");
	scanf("%lf", &b.y);
	printf("Z value for B: ");
	scanf("%lf", &b.z);
	Point midp;
	midpoint(a, b, &midp);
	double dist;
	distance(a, b, &dist);
	printf("midpoint: %.2lf, %.2lf, %.2lf\n", midp.x, midp.y, midp.z);
	printf("distance: %.2lf\n", dist);
	return 0;
}
