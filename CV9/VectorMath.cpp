#include "VectorMath.h"
#include <Math.h>
#include <stdio.h>
struct vector3d operace(struct vector3d u, struct vector3d v, enum
	typOperace typ)
{	
	vector3d w = { 0,0,0 };
	switch (typ)
	{
	case soucet:
		w.x = u.x + v.x;
		w.y = u.y + v.y;
		w.z = u.z + v.z;
		break;
	case skalarniSoucin:
		w.x = u.x * v.x + u.y * v.y + u.z * v.z;
		if (w.x == 0) {
			printf("su kolme");
		}
		break;
	case vektorovySoucin:
		w.x = u.y * v.z - u.z * v.y;
		w.y = u.z * v.x - u.x * v.z;
		w.z = u.x * v.y - u.y * v.x;
	}
	return w;
}
void tisk(struct vector3d u)
{
	u.x = sqrt(pow(u.x,2) + pow(u.y,2) + pow(u.z,2));
	printf("|W| %lf", u.x);
}