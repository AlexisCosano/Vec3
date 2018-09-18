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

public:
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

	Vector3 Normalize()
	{
		data normal, a, b, c = 0;
		Vector3 tmp;

		a = pow(x, x);
		b = pow(y, y);
		c = pow(z, z);

		normal = sqrt(a + b + c);

		tmp.x = x / normal;
		tmp.y = y / normal;
		tmp.z = z / normal;

		return(tmp);
	}

	void Zero()
	{
		x = y = z = 0;
	}

	bool IsZero()
	{
		return(x == 0 && y == 0 && z == 0);
	}

	data DistanceTo(Vector3 vec1, Vector3 vec2)
	{
		Vector3 tmp;
		data a, b, c = 0;

		tmp.x = vec1.x - vec2.x;
		tmp.y = vec1.y - vec2.y;
		tmp.z = vec1.z - vec2.z;

		a = pow(tmp.x, 2);
		b = pow(tmp.y, 2);
		c = pow(tmp.z, 2);

		return(sqrt(a + b + c));
	}

	// Operators -----------------------------------------------------------------------

	Vector3 operator=(Vector3 vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	Vector3 operator==(Vector3 vec)
	{
		return(x == vec.x && y == vec.y && z == vec.z);
	}

	void operator+(Vector3 vec)
	{
		x = x + vec.x;
		y = y + vec.y;
		z = z + vec.z;
	}

	void operator-(Vector3 vec)
	{
		x = x - vec.x;
		y = y - vec.y;
		z = z - vec.z;
	}

	void operator+=(Vector3 vec)
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;
	}

	void operator-=(Vector3 vec)
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
	}
};
// --------------------------------------------------------------------------------