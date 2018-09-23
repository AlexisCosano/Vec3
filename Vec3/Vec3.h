#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#include <math.h>

/*
Alexis Cosano Rodríguez
2018 - 2019
*/

template <class DATA> class Vector3
{

public:
	DATA x = 0.0f;
	DATA y = 0.0f;
	DATA z = 0.0f;

public:

	// Constructors --------------------------------------------------------------------

	Vector3() {}

	Vector3(const DATA &given_x, const DATA &given_y, const DATA &given_z) : x(given_x), y(given_y), z(given_z) {}

	Vector3(const Vector3 &vec_cpy) : x(vec_cpy.x), y(vec_cpy.y), z(vec_cpy.z) {}
	
	// Destructors ---------------------------------------------------------------------

	~Vector3() {};

	// Utility -------------------------------------------------------------------------

	Vector3 Normalize()
	{
		DATA normal = sqrt((x*x) + (y*y) + (z*z)); 

		x = x / normal;
		y = y / normal;
		z = z / normal;

		return(*this);
	}

	Vector3 Normalized() const
	{
		DATA normal = sqrt((x*x) + (y*y) + (z*z));

		return(Vector3(x / normal, y / normal, z / normal));
	}

	void Inverse()
	{
		x = -x;
		y = -y;
		z = -z;
	}

	void Zero()
	{
		x = y = z = 0.0f;
	}

	bool IsZero() const
	{
		return(x == 0.0f && y == 0.0f && z == 0.0f);
	}

	DATA DistanceTo(const Vector3 &initial_vec) const
	{
		Vector3 tmp_vec(x - initial_vec.x, y - initial_vec.y, z - initial_vec.z);
		return(sqrt((tmp_vec.x*tmp_vec.x) + (tmp_vec.y*tmp_vec.y) + (tmp_vec.z*tmp_vec.z)));
	}

	DATA DistanceSquared(const Vector3 &initial_vec) const
	{
		Vector3 tmp_vec(x - initial_vec.x, y - initial_vec.y, z - initial_vec.z);
		return((tmp_vec.x*tmp_vec.x) + (tmp_vec.y*tmp_vec.y) + (tmp_vec.z*tmp_vec.z));
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

	Vector3 operator=(const Vector3 &vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;

		return(*this);
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

	Vector3 operator+=(const Vector3 &vec)
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;

		return(*this);
	}

	Vector3 operator-=(const Vector3 &vec)
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;

		return(*this);
	}
};
// --------------------------------------------------------------------------------
#endif