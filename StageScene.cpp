#include "StageScene.h"
#include "Player.h"
#include "InputHandler.h"
#include "Command.h"

StageScene::~StageScene()
{
	delete inputHandler_;
	delete player_;
	delete iCommand_;
}

void StageScene::Initialize()
{
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();
	player_->Initialize();
}

void StageScene::Update()
{
	iCommand_ = inputHandler_->HandleInput();
	if(this->iCommand_)
	{
		iCommand_->Exec(*player_);
	}
}

void StageScene::Draw()
{
	player_->Draw();
}
