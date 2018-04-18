#pragma once
#include <d3d12.h>
#include <string>
#include <DirectXMath.h>

// ウィンドウサイズ
#define WINDOW_X 640
#define WINDOW_Y 480

// 円周率
#define PI ((FLOAT)3.14159265359f)
// ラジアン変換
#define RAD(X) (X) * (PI / 180.0f)

//PMD頂点データの構造体
typedef struct
{
	//座標
	DirectX::XMFLOAT3	pos;
	//法線
	DirectX::XMFLOAT3	normal;
	//uv
	DirectX::XMFLOAT2	uv;
	//ボーン番号
	USHORT				bornNum[2];
	//ウェイト
	UCHAR				bornWeight;
	//輪郭線フラグ
	UCHAR				edge;
}VERETX;

//ビューモード
static std::string mode[] =
{
	"頂点",
	"深度",
	"定数",
};