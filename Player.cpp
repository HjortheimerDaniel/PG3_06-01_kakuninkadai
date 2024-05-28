#include "Player.h"
#include "Novice.h"

//Player::Player()
//{
//}

void Player::Initialize()
{
	player_.pos = { 30,100 };
	player_.size = { 20,20 };
	player_.speed = 3;
}

void Player::Update()
{
}

void Player::Draw()
{
	Novice::DrawBox((int)player_.pos.x, (int)player_.pos.y, (int)player_.size.x, (int)player_.size.y, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	this->player_.pos.x += this->player_.speed;
}

void Player::MoveLeft()
{
	this->player_.pos.x -= this->player_.speed;

}
