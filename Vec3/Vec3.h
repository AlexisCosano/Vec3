#pragma once
#include <iostream>
#include <stdio.h>
#include <math.h>
/*
Alexis Cosano Rodríguez "MrAlcoro"
2018 - 2019
*/
using namespace std;


template <class data> class Vector3
{

private:
	data x, y, z = 0;

public:

	// Constructors --------------------------------------------------------------------

	Vector3() 
	{
		x = y = z = 0;
	}

	Vector3(data given_x, data given_y, data given_z) 
	{
		x = given_x;
		y = given_y;
		z = given_z;
	}

	Vector3(Vector3& vec_cpy)
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
		data normal, a, b, c = 0;

		a = pow(x, 2);
		b = pow(y, 2);
		c = pow(z, 2);

		normal = sqrt(a + b + c);

		x = x / normal;
		y = y / normal;
		z = z / normal;
	}

	void Zero()
	{
		x = y = z = 0;
	}

	bool IsZero()
	{
		return(x == 0 && y == 0 && z == 0);
	}

	data DistanceTo(const Vector3 given_vec)
	{
		Vector3 tmp;
		data a, b, c = 0;

		tmp.x = x - given_vec.x;
		tmp.y = y - given_vec.y;
		tmp.z = z - given_vec.z;

		a = pow(tmp.x, 2);
		b = pow(tmp.y, 2);
		c = pow(tmp.z, 2);

		return(sqrt(a + b + c));
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

	void ShowValues()
	{
		printf_s("This vector's values are: (%i, %i, %i)\n\n", x, y, z);
	}

	// Operators -----------------------------------------------------------------------

	void operator=(const Vector3 vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	const bool operator==(const Vector3 vec)
	{
		return(x == vec.x && y == vec.y && z == vec.z);
	}

	void operator+(const Vector3 vec)
	{
		x = x + vec.x;
		y = y + vec.y;
		z = z + vec.z;
	}

	void operator-(const Vector3 vec)
	{
		x = x - vec.x;
		y = y - vec.y;
		z = z - vec.z;
	}

	void operator+=(const Vector3 vec)
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;
	}

	void operator-=(const Vector3 vec)
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
	}
};
// --------------------------------------------------------------------------------