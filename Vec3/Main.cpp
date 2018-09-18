#include "Vec3.h"
//#include <stdio.h>


int main()
{
	Vector3<int> vec_test;
	printf_s("vec_test: \nA: %i, B: %i, C: %i \n\n", vec_test.GetX(), vec_test.GetY(), vec_test.GetZ());

	Vector3<int> vec_test2(2, 3, 4);
	vec_test2.ShowValues();

	vec_test += vec_test2;
	vec_test.ShowValues();

	vec_test - vec_test2;
	vec_test.ShowValues();

	Vector3<int> vec_test3(vec_test2);
	vec_test3.ShowValues();

	

	getchar();
	return 0;
}