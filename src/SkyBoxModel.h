#pragma once

#include <DirectXmath.h>
#include <array>
#include <d3d11.h>

using std::array;
using DirectX::XMFLOAT3;
//����ÿ������±�
enum { TOP, BOTTOM, LEFT, RIGHT, FRONT, BACK };
class SkyBoxModel {
public:
	SkyBoxModel();
	virtual ~SkyBoxModel();
	//ͨ�������������������պеĶ���
	void setPosition(XMFLOAT3 camerapos);
	//ͨ���±���ʶ����Ӧ��������
	XMFLOAT3 getPosition(int index);
	array<int, 4> getvertexs(int index);

private:
	//���������4����
	array<XMFLOAT3, 8> postion_;
	array<array<int, 4>, 6> facevertexs_;
};
