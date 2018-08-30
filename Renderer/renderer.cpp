#include "renderer.h"
#include "../RenderObject/renderobject.h"
#include "../RenderObject/Object/Tree.h"
#include <algorithm>
#include <vector>

//各シーンごとの初期化を一度に済ませる。
bool CRenderer::Init()
{
	InitDx9();

	InitTitle();
	
	InitGame();
	
	InitResult();
	return true;
}

void CRenderer::Uninit()
{
	std::for_each(objectlist_.begin(), objectlist_.end(), [](RenderObject* pObject) {
		pObject->Uninit();
	});
}

void CRenderer::Update()
{
	if (type_ == TITLE)
	{

	}
	if (type_ == GAME)
	{
		std::for_each(objectlist_.begin(), objectlist_.end(), [](RenderObject* pObject) {
			pObject->Update();
		});
	}
	if (type_ == RESULT)
	{

	}
}

void CRenderer::Draw()
{	//ダミーノード
	RenderObject* root;

	if (type_ == TITLE)
	{

	}
	if (type_ == GAME)
	{
		std::for_each(objectlist_.begin(), objectlist_.end(), [](RenderObject* pObject) {
			pObject->Draw();
		});
		root = new Tree(0,Buffer, Buffer2, Device);
		auto it = std::find(objectlist_.begin(), objectlist_.end(), root);
		it._Ptr->_Next->_Myval->Draw();
		std::cout << "Get!" << std::endl;
	}
	if (type_ == RESULT)
	{

	}
}

void CRenderer::InitDx9()
{
}

void CRenderer::InitTitle()
{
}

void CRenderer::InitGame()
{
	RenderObject* pObject = new Tree(0,Buffer, Buffer2, Device);
	objectlist_.push_back(pObject);
	pObject = new Tree(1, Buffer, Buffer2, Device);
	objectlist_.push_back(pObject);
	std::for_each(objectlist_.begin(), objectlist_.end(), [](RenderObject* pObject) {
		pObject->Init();
	});
}

void CRenderer::InitResult()
{
}
