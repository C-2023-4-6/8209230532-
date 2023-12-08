#include<math.h>
#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3) {//�w�q��� �P�_���
	if (((side1 > 0) && (side2 > 0) && (side3 > 0)) && ((side1 + side2 > side3) || (side2 + side3 > side1) || (side3 + side1 > side2))) {
		return true;
	}
	else {
		return false;
	}
};
double double_area(double side1, double side2, double side3) {//�w�q���n���
	double s = (side1 + side2 + side3) / 2.0;
	double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
	
};