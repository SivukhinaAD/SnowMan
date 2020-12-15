/*
 * Primitives.h
 *
 *  Created on: 10 дек. 2020 г.
 *      Author: Anastasiya
 */

#ifndef PRIMITIVES_H_
#define PRIMITIVES_H_
#include <GL/gl.h>
#include <GL/glu.h>
#include <cmath>

// D-Z
void cart2cyl(
		double x, double y, double z,
		double &cr, double &cphi, double &cz);
// Z-D
void cyl2cart(
		double cr, double cphi, double cz,
		double &x, double &y, double &z);

// D-C
void cart2sph(
		double x, double y, double z,
		double &sr, double &sphi, double &stheta);
// C-D
void sph2cart(
		double sr, double sphi, double stheta,
		double &x, double &y, double &z);

void make_cylinder_flat(int sides);
void make_cylinder_smooth(int sides);
void make_cone_flat(int sides);
void make_cone_smooth(int sides);
void make_sphere_flat(int rows, int cols);
void make_sphere_smooth(int rows, int cols);
void make_icosphere_flat(int rows, int cols);
void make_icosphere_smooth(int rows, int cols);

#endif
