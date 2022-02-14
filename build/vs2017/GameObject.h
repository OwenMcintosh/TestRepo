#pragma once
#include <graphics/sprite.h>

class GameObject : public gef::Sprite
{
public:

	GameObject();
	void bruh() { yo++; };

private:
	int yo;
};

