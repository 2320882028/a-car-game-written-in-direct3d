#pragma once

#include <array>
#include <DirectXmath.h>

using std::array;
using namespace DirectX;

class Cube {
public:
	Cube();
	virtual ~Cube();

protected:
	//8������
	array<XMFLOAT3, 8> postion_;
	//ÿ�����Ӧ�Ķ���
	array<array<int, 4>, 6> facevertexs_;
};
