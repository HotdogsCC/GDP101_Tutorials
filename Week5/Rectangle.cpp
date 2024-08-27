#include "Rectangle.h"

void Rectangle::SetWidthHeight(int w, int h)
{
	width = w;
	height = h;
}

int Rectangle::Area()
{
	return width * height;
}
