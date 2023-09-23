#include "bricks.h"

#include <iostream>

#include "sl.h"

namespace bricks
{
void initBrick(Brick brick[quantY][quantX])
{
	int firstBrickYPosition = 500;
	int space = 13;

	for (int i = 0; i < quantY; i++)
	{
		for (int j = 0; j < quantX; j++)
		{
			brick[i][j].width = 60.f;
			brick[i][j].height = 35.5f;
			brick[i][j].x = j * (brick[i][j].width + space) + brick[i][j].width / 2;
			brick[i][j].y = i * (brick[i][j].height + space) + firstBrickYPosition;
			brick[i][j].isActive = true;
		}
	}
}

void drawBrick(Brick brick[quantY][quantX])
{
	slSetForeColor(1, 1, 1, 1);
	for (int i = 0; i < quantY; i++)
	{
		for (int j = 0; j < quantX; j++)
		{
			slRectangleFill(brick[i][j].x, brick[i][j].y, brick[i][j].width, brick[i][j].height);
		}
	}
}
}