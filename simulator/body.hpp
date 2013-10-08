#ifndef BODY_HPP
#define BODY_HPP

#include <ostream>

class Body {

public:
	double mass;

	double x, y, z;
	double vx, vy, vz;
	double Fx, Fy, Fz;

	Body(double mass, double x, double y, double z, double vx, double vy, double vz);

	void clearForce();
	void devideVelocityByMass();

	Body& operator +=(const Body& b);
	Body& operator *=(const double a);

	static void copyVelocityToPosition(const Body* source, Body* target);
	static void copyForceToVelocity(const Body* source, Body* target);
};

std::ostream& operator<<(std::ostream &out, const Body &body);

#endif // BODY_HPP