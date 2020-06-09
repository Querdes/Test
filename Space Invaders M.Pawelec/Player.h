#pragma once
#include "Game.h"


using namespace sf;

class Player
{
private:
	Sprite sprite;
	RectangleShape hitBox;
	Texture *texture;

	int level;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int score;
	int damage;
	int damageMax;
public:
	Player(Texture *texture);
	void Movement();
	void Update();
	void Draw();
};


