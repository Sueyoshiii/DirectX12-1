#pragma once
#include <d3d12.h>
#include <string>
#include <DirectXMath.h>

// �E�B���h�E�T�C�Y
#define WINDOW_X 640
#define WINDOW_Y 480

// �~����
#define PI ((FLOAT)3.14159265359f)
// ���W�A���ϊ�
#define RAD(X) (X) * (PI / 180.0f)

//PMD���_�f�[�^�̍\����
typedef struct
{
	//���W
	DirectX::XMFLOAT3	pos;
	//�@��
	DirectX::XMFLOAT3	normal;
	//uv
	DirectX::XMFLOAT2	uv;
	//�{�[���ԍ�
	USHORT				bornNum[2];
	//�E�F�C�g
	UCHAR				bornWeight;
	//�֊s���t���O
	UCHAR				edge;
}VERETX;

//�r���[���[�h
static std::string mode[] =
{
	"���_",
	"�[�x",
	"�萔",
};