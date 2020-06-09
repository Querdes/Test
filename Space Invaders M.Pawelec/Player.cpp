#include "Player.h"

Player::Player(Texture* texture) 
	:level(1), exp(0), expNext(100), hp(10), hpMax(10), damage(1), damageMax(2), score(0)
{

	this->texture = texture;
	this->sprite.setTexture(*this->texture);
}

void Player::Movement() {

}
void Player::Update() {

}
void Player::Draw() {

}