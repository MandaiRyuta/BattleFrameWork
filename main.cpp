#include "main.h"
#include "Renderer\renderer.h"
int main()
{
	std::cout << "main loop" << std::endl;

	CRenderer Render;

	Render.Init();
	for (;;) {
		Render.Update();
		Render.Draw();
	}
	Render.Uninit();
	getchar();
}