#pragma once
#include "../main.h"
#include <string>
#include <list>

class RenderObject;

class CRenderer
{
public:
	CRenderer() { 
		Buffer = "Buffer"; 
		Buffer2 = "Buffer2";
		Device = "Device";
	}
	~CRenderer() {}

public:
	bool Init();
	void Uninit();
	void Update();
	void Draw();
private:
	std::list<RenderObject*> objectlist_;
	std::string Buffer;
	std::string Buffer2;
	std::string Device;
};