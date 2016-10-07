#include "Rect.h"


void drawRect(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue)
{
	int i, j;
	for (i = i0; i <= i1; i++)
		drawPixel(i, j0, red, green, blue);
	for (i = i0; i <= i1; i++)
		drawPixel(i, j1, red, green, blue);
	for (j = j0; j <= j1; j++)
		drawPixel(i0, j, red, green, blue);
	for (j = j0; j <= j1; j++)
		drawPixel(i1, j, red, green, blue);
}
Rect::Rect(const int& _sx, const int& _sy, const int& _ex, const int& _ey
	, const float& _red, const float& _green, const float& _blue)
{
	initialize(_sx, _sy, _ex, _ey, _red, _green, _blue);
}
void Rect::initialize(const int& _sx, const int& _sy, const int& _ex, const int& _ey
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

void Rect::draw()
{
	drawRect(i0, j0, i1, j1, red, green, blue);
}