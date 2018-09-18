#include "Vec3.h"
//#include <stdio.h>


int main()
{
	Vector3<int> vec_test;
	printf_s("vec_test: \nA: %i, B: %i, C: %i \n\n", vec_test.GetX(), vec_test.GetY(), vec_test.GetZ());

	Vector3<int> vec_test2(2, 2, 2);
	vec_test2.ShowValues();

	vec_test += vec_test2;
	vec_test.ShowValues();

	vec_test - vec_test2;
	vec_test.ShowValues();

	vec_test = vec_test2;
	vec_test.ShowValues();

	if (vec_test == vec_test2)
		printf_s("True.\n\n");
	else
		printf_s("False.\n\n");

	Vector3<int> vec_test3(vec_test2);
	vec_test3.ShowValues();

	vec_test3 + vec_test2;

	if (vec_test == vec_test3)
		printf_s("True.\n\n");
	else
		printf_s("False.\n\n");

	float distance = vec_test.DistanceTo(vec_test2);
	printf_s("Distance: %f\n\n", distance);

	vec_test3.Zero();

	if (vec_test3.IsZero())
		printf_s("True.\n\n");
	else
		printf_s("False.\n\n");

	Vector3<float> normal_vector(4.0, 5.0, 7.0);

	normal_vector.Normalize();
	printf_s("Normalized vector: (%f, %f, %f)\n\n", normal_vector.GetX(), normal_vector.GetY(), normal_vector.GetZ());

	getchar();
	return 0;
}