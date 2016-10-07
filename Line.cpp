#include "Line.h"


void drawLine(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue)
{
	int i, j;
	if (i0 == i1)
	{
		for (j = j0; j <= j1; j++)
			drawPixel(i0, j, red, green, blue);
	}
	else
	{
		if (j0 == j1)
		{
			for (i = i0; i <= i1; i++)
				drawPixel(i, j0, red, green, blue);
		}
		else
		{
			for (i = i0; i <= i1; i++)
			{
				if (j0 < j1)
				{
					for (j = j0; j <= j1; j++)
					{
						if (i == (i1 - i0)*(j - j0) / (j1 - j0) + i0)
							drawPixel(i, j, red, green, blue);
					}
				}
				else
				{
					for (j = j1; j <= j0; j++)
					{
						if (i == (i1 - i0)*(j - j0) / (j1 - j0) + i0)
							drawPixel(i, j, red, green, blue);
					}
				}
			}
		}
	}
}
Line::Line(const int& _sx, const int& _sy, const int& _ex, const int& _ey
	, const float& _red, const float& _green, const float& _blue)
{
	initialize(_sx, _sy, _ex, _ey, _red, _green, _blue);
}
void Line::initialize(const int& _sx, const int& _sy, const int& _ex, const int& _ey
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

void Line::draw()
{
	drawLine(i0, j0, i1, j1, red, green, blue);
}
