#pragma once
#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class GameSoundManager : public CCNode {
	static GameSoundManager* __fastcall sharedState() {
		return reinterpret_cast<GameSoundManager*(__fastcall*)()>(base + 0x24800)();
	}
	static PVOID _sharedState;
};

PVOID GameSoundManager::_sharedState = PVOID(base + 0x24800);