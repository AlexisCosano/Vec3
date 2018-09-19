#include "Vec3.h"
//#include <stdio.h>


int main()
{

	Vector3<int> test_vector(1, 2, 3);
	test_vector.ShowIntValues();

	Vector3<int> test_vector2(3, 2, 1);
	Vector3<int> test_vector3;

	test_vector3 = test_vector - test_vector2;
	test_vector3.ShowIntValues();

	getchar();
	return 0;
}