#pragma once
#ifndef DRAWPIXEL_H
#define DRAWPIXEL_H

const int width = 1000;
const int height = 800;
static float* pixels = new float[width*height * 3];
static void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}
#endif