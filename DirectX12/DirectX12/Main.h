#pragma once

#ifdef EXPORT_MAIN
#define EXTERN_MAIN
#else
#define EXTERN_MAIN extern
#endif

#include "Window.h"
#include "Input.h"
#include "Sound.h"
#include "Device.h"
#include <memory>

// インスタンス処理
void Create(void);

// メモリ解放処理
void Destroy(void);


// ウィンドウクラス参照
EXTERN_MAIN std::shared_ptr<Window>win;

// インプットクラス
EXTERN_MAIN std::shared_ptr<Input>in;

// サウンドクラス
EXTERN_MAIN std::shared_ptr<Sound>sound;

// デバイスクラス
EXTERN_MAIN std::shared_ptr<Device>dev;