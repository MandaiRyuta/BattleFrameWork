#pragma once
#include "../renderobject.h"

class Tree : public RenderObject
{
public:
	Tree(std::string buffer, std::string buffer2, std::string device) :
		Buf(buffer), Buf2(buffer2), Device(device) {}
	~Tree() {}
public:
	void Init() override;
	void Update() override;
	void Draw() override;
	void Uninit() override;
private:
	std::string Buf;
	std::string Buf2;
	std::string Device;
};