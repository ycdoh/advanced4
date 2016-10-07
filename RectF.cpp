#include "RectF.h"


void drawRectF(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue)
{
	int i, j;
	for (i = i0; i <= i1; i++)
	{
		for (j = j0; j <= j1; j++)
		{
			drawPixel(i, j, red, green, blue);
		}
	}
}//
RectF::RectF(const int& _sx, const int& _sy, const int& _ex, const int& _ey
	, const float& _red, const float& _green, const float& _blue)
{
	initialize(_sx, _sy, _ex, _ey, _red, _green, _blue);
}
void RectF::initialize(const int& _sx, const int& _sy, const int& _ex, const int& _ey
	, const float& _red, const float& _green, const float& _blue)
{
	i0 = _sx;
	j0 = _sy;
	i1 = _ex;
	j1 = _ey;
	red = _red;
	green = _green;
	blue = _blue;
}

void RectF::draw()
{
	drawRectF(i0, j0, i1, j1, red, green, blue);
}
