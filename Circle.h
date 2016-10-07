#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "geometricalobject.h"
#include "DrawPixel.h"


class Circle : public  geometricalobject
{
private:
	float cx, cy, r, red, green, blue;
	int num_segments;
public:
	Circle(const float& _cx, const float& _cy, const float _r, const int& _num,
		const float& _red, const float& _green, const float& _blue);
	void initialize(const float& _cx, const float& _cy, const float _r, const int& _num,
		const float& _red, const float& _green, const float& _blue);
public:
	void draw();
};
#endif