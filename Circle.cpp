#include "Circle.h"
#include "math.h"



void DrawCircle(float cx, float cy, float r, int num_segments, const float& red, const float& green, const float& blue)
{
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		drawPixel(x + cx, y + cy, red, green, blue);//output vertex

	}
}
Circle::Circle(const float& _cx, const float& _cy, const float _r, const int& _num,
	const float& _red, const float& _green, const float& _blue)
{
	initialize(_cx, _cy, _r, _num, _red, _green, _blue);
}
void Circle::initialize(const float& _cx, const float& _cy, const float _r, const int& _num,
	const float& _red, const float& _green, const float& _blue)
{
	cx = _cx;
	cy = _cy;
	r = _r;
	num_segments = _num;
	red = _red;
	green = _green;
	blue = _blue;
}
void Circle::draw()
{
	DrawCircle(cx, cy, r, num_segments, red, green, blue);
}