//point.c
//Christopher Bowman
//Created Mon 9 Oct 2023
#include "point.h"
void midpoint(Point a, Point b, Point *midpoint) {
	midpoint->x = (a.x + b.x)/2;
	midpoint->y = (a.y + b.y)/2;
	midpoint->z = (a.z + b.z)/2;
}
void distance(Point a, Point b, double *distance) {
	double xDif = b.x - a.x;
	double yDif = b.y - a.y;
	double zDif = b.z - a.z;
	*distance = sqrt(pow(xDif, 2) + pow(yDif, 2) + pow(zDif, 2));
}
