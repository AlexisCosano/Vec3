#include "Vec3.h"
//#include <stdio.h>


int main()
{
	Vector3<int> vec_test;
	printf_s("vec_test: \nA: %i, B: %i, C: %i \n\n", vec_test.x, vec_test.y, vec_test.z);

	Vector3<int> vec_test2(2, 3, 4);
	printf_s("vec_test2: \nA: %i, B: %i, C: %i \n\n", vec_test2.x, vec_test2.y, vec_test2.z);

	vec_test += vec_test2;
	printf_s("vec_test: \nA: %i, B: %i, C: %i \n\n", vec_test.x, vec_test.y, vec_test.z);

	vec_test - vec_test2;
	printf_s("vec_test: \nA: %i, B: %i, C: %i \n\n", vec_test.x, vec_test.y, vec_test.z);

	getchar();
	return 0;
}