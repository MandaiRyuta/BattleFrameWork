#include "Tree.h"
#include <iostream>

void Tree::Init()
{
	std::cout << "TreeInit" << std::endl;
	std::cout << Buf.c_str() << std::endl;
	std::cout << Buf2.c_str() << std::endl;
	std::cout << Device.c_str() << std::endl;
}

void Tree::Update()
{
	std::cout << "TreeUpdate" << std::endl;
	std::cout << Buf.c_str() << std::endl;
	std::cout << Buf2.c_str() << std::endl;
	std::cout << Device.c_str() << std::endl;
}

void Tree::Draw()
{
	std::cout << "TreeDraw" << std::endl;
	std::cout << Buf.c_str() << std::endl;
	std::cout << Buf2.c_str() << std::endl;
	std::cout << Device.c_str() << std::endl;
	std::cout << num_ << std::endl;
}

void Tree::Uninit()
{
	std::cout << "TreeUninit" << std::endl;
	std::cout << Buf.c_str() << std::endl;
	std::cout << Buf2.c_str() << std::endl;
	std::cout << Device.c_str() << std::endl;
}
