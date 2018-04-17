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

// �C���X�^���X����
void Create(void);

// �������������
void Destroy(void);


// �E�B���h�E�N���X�Q��
EXTERN_MAIN std::shared_ptr<Window>win;

// �C���v�b�g�N���X
EXTERN_MAIN std::shared_ptr<Input>in;

// �T�E���h�N���X
EXTERN_MAIN std::shared_ptr<Sound>sound;

// �f�o�C�X�N���X
EXTERN_MAIN std::shared_ptr<Device>dev;