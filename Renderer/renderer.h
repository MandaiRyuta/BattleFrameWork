#pragma once
#include "../main.h"
#include <string>
#include <list>
class TitleObject;
class RenderObject;
class ResultObject;

class CRenderer
{
public:
	enum SCENE {
		TITLE,
		GAME,
		RESULT,
		NONE,
	};
public:
	CRenderer() :type_(1) {
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
	void InitDx9();
	void InitTitle();
	void InitGame();
	void InitResult();
private:
	std::list<RenderObject*> objectlist_;
	std::list<TitleObject*> title_objectlist_;
	std::list<ResultObject*> result_objectlist_;
	std::string Buffer;
	std::string Buffer2;
	std::string Device;

	int type_;
};