#pragma once
#ifndef RECTF_H
#define RECTF_H
#include "geometricalobject.h"
#include "DrawPixel.h"

class RectF : public  geometricalobject
{
private:
	int i0, i1, j0, j1;
	float red, green, blue;
public:
	RectF(const int& _sx, const int& _sy, const int& _ex, const int& _ey
		, const float& _red, const float& _green, const float& _blue);
	void initialize(const int& _sx, const int& _sy, const int& _ex, const int& _ey
		, const float& _red, const float& _green, const float& _blue);
public:
	void draw();
};
#endif
