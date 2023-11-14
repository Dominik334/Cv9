// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"
#include "VectorMath.h"

using namespace std;

int main()
{	
	vector3d u = { 1,2,3 };
	vector3d v = { 4,5,6 };
	
	int inp=3;
	typOperace t = (typOperace)inp;

	vector3d w = operace(u, v, t);
	if (inp == 1) {
		printf("sucet vekotorov %lf %lf %lf", w.x, w.y, w.z);
	}
	if (inp == 2) {
		printf("skalarny sucin %lf", w.x);
	}
	if (inp == 3) {
		printf("vektorovy sucin %lf %lf %lf", w.x, w.y, w.z);
	}
	tisk(w);


	return 0;
}
