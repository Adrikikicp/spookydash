#pragma once
#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class MenuOptions : public CCLayerColor {
	bool init() {
		return reinterpret_cast<bool(__thiscall*)(MenuOptions* self)>(base + 0x1DE8F0)(this);
	}
	static PVOID _init;

	int __fastcall addToggle(const char* display, const char* key, const char* extrainfo) {
		return reinterpret_cast<int(__thiscall*)(MenuOptions * self, const char* display, const char* key, const char* extrainfo)>(base + 0x1DF6B0)(this, display, key, extrainfo);
	}
	static PVOID _addToggle;
};

PVOID MenuOptions::_init = PVOID(base + 0x1DE8F0);
PVOID MenuOptions::_addToggle = PVOID(base + 0x1DF6B0);