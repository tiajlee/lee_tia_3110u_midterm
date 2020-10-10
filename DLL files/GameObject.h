#pragma once
#ifndef __Game_Object__
#define __Game_Object__
#include "Vector2D.h"
#include "plugItInSettings.h"


class GameObject
{
public: 
	GameObject();

	int GetID() const;
	void setID(int id = 0);

	Vector2D GetPosition() const;
	void SetPosition(float x = 0.0f, float y = 0.0f);

private:
	int m_id;
	Vector2D m_position;
};

#endif 
