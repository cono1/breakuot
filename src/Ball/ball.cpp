#include "ball.h"

#include <time.h>
#include <cmath>
#include <cstdlib>

#include "sl.h"
int offset = 10;
namespace ball
{
void initBall(Ball& ball, float paddleX, float paddleY)
{
	srand(time(NULL));
	ball.dirX = rand() % 300 - 150;
	ball.dirY = 100.f;
	ball.width = 50.f;
	ball.height = 50.f;
	ball.x = paddleX;
	ball.y = paddleY + ball.height + offset;
	ball.speed = 3.f;
	ball.texture = slLoadTexture("res/watermelon.jpg");
}

void updateBall(Ball& ball)
{
	ball.x += ball.dirX * ball.speed * slGetDeltaTime();
	ball.y += ball.dirY * ball.speed * slGetDeltaTime();
}

void drawBall(Ball ball)
{
	slSprite(ball.texture, ball.x, ball.y, ball.width, ball.height);
}

void restartBall(Ball& ball, float paddleX, float paddleY)
{
	srand(time(NULL));
	ball.dirX = rand() % 300 - 150;
	ball.dirY = 100.f;
	ball.x = paddleX;
	ball.y = paddleY + ball.height + offset;
}
}