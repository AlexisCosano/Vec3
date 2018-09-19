#pragma once
#include <iostream>
#include <stdio.h>
#include <math.h>

/*
Alexis Cosano Rodríguez
2018 - 2019
*/

using namespace std;


template <class data> class Vector3
{

private:
	data x, y, z = 0;

public:

	// Constructors --------------------------------------------------------------------

	Vector3() {}

	Vector3(const data &given_x, const data &given_y, const data &given_z) 
	{
		x = given_x;
		y = given_y;
		z = given_z;
	}

	Vector3(const Vector3 &vec_cpy)
	{
		x = vec_cpy.x;
		y = vec_cpy.y;
		z = vec_cpy.z;
	}
	
	// Destructors ---------------------------------------------------------------------

	~Vector3() {};

	// Methods -------------------------------------------------------------------------

	void Normalize()
	{
		data normal = 0;

		normal = sqrt((x*x) + (y*y) + (z*z));

		x = x / normal;
		y = y / normal;
		z = z / normal;
	}

	void Zero()
	{
		x = y = z = 0;
	}

	bool IsZero() const
	{
		return(x == 0 && y == 0 && z == 0);
	}

	data DistanceTo(const Vector3 &given_vec) const
	{
		Vector3 tmp_vec(x - given_vec.x, y - given_vec.y, z - given_vec.z);

		return(sqrt((tmp_vec.x*tmp_vec.x) + (tmp_vec.y*tmp_vec.y) + (tmp_vec.z*tmp_vec.z)));
	}

	const data GetX()
	{
		return(x);
	}

	const data GetY()
	{
		return(y);
	}

	const data GetZ()
	{
		return(z);
	}

	void ShowIntValues()
	{
		printf_s("This vector's values are: (%i, %i, %i)\n\n", x, y, z);
	}

	void ShowFloatValues()
	{
		printf_s("This vector's values are: (%f, %f, %f)\n\n", x, y, z);
	}

	// Operators -----------------------------------------------------------------------

	void operator=(const Vector3 &vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	bool operator==(const Vector3 &vec) const
	{
		return(x == vec.x && y == vec.y && z == vec.z);
	}

	Vector3 operator+(const Vector3 &vec) const
	{
		return(Vector3(x + vec.x, y + vec.y, z + vec.z));
	}

	Vector3 operator-(const Vector3 &vec) const
	{
		return(Vector3(x - vec.x, y - vec.y, z - vec.z));
	}

	void operator+=(const Vector3 &vec)
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;
	}

	void operator-=(const Vector3 &vec)
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
	}
};
// --------------------------------------------------------------------------------