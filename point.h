//point.h
//Christopher Bowman
//Created Mon 9 Oct 2023
#ifndef POINT_H
#define POINT_H
#include <math.h>


typedef struct Point_struct {
	double x;
	double y;
	double z;
} Point;

void midpoint(Point, Point, Point *);
void distance(Point, Point, double *);
#endif
