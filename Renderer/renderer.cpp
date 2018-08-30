#include "renderer.h"
#include "../RenderObject/renderobject.h"
#include "../RenderObject/Object/Tree.h"
#include <algorithm>

bool CRenderer::Init()
{
	RenderObject* pObject = new Tree(Buffer,Buffer2,Device);
	objectlist_.push_back(pObject);
	std::for_each(objectlist_.begin(), objectlist_.end(), [](RenderObject* pObject) {
		pObject->Init();
	});
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
	std::for_each(objectlist_.begin(), objectlist_.end(), [](RenderObject* pObject) {
		pObject->Update();
	});
}

void CRenderer::Draw()
{

	std::for_each(objectlist_.begin(), objectlist_.end(), [](RenderObject* pObject) {
		pObject->Draw();
	});
}
