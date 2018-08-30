#pragma once
#include "../Renderer/renderer.h"

class RenderObject
{
public:
	RenderObject() {}
	~RenderObject() {}

	virtual void Init() {}
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Uninit() = 0;
};