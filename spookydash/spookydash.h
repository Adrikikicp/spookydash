#pragma once
#include <vector>
#include "macros.h"
#include "MinHook.h"

#include "PlayLayer.h"
#include "GameManager.h"
#include "GJGameLevel.h"
#include "GJAccountManager.h"
#include "AchievementBar.h"
#include "AchievementNotifier.h"
#include "AchievementManager.h"
#include "EffectGameObject.h"
#include "GJBaseGameLayer.h"
#include "EditLevelLayer.h"
#include "FLAlertLayer.h"
#include "LevelEditorLayer.h"
#include "MenuOptions.h"
#include "PauseLayer.h"

#include "trampoline.h"
#include "hackpro.h"
#include "helpers.h"

namespace spookydash {
	bool is_initialized = false;

	int arr_index = 0;
	std::vector<PVOID> hooks;
	std::vector<PVOID>::iterator iter;

	void addHook(PVOID hook);
	MH_STATUS removeHook(PVOID hook);

	export MH_STATUS create_hook(PVOID target, void* original, LPVOID callback);
	export MH_STATUS remove_hook(LPVOID targetFunction);
	export MH_STATUS enable_hook(LPVOID target);
	export MH_STATUS initialize();
	export MH_STATUS uninitialize();
}