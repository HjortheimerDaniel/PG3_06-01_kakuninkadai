#pragma once
#include "Player.h"
#include "InputHandler.h"
#include "Command.h"

class StageScene
{
public:

	~StageScene();

	void Initialize();
	void Update();
	void Draw();

private:
	InputHandler* inputHandler_ = new InputHandler();
	ICommand* iCommand_ = nullptr;
	Player* player_ = new Player();
};

