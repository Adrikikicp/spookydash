#pragma comment(lib, "Winmm.lib")
#include <WinSock2.h>
#include <cocos2d.h>
#include "MinHook.h"
#include "spookydash.h"
#include <Windows.h>
#include <vector>

export MH_STATUS spookydash::initialize() {
	if (!is_initialized) {
		is_initialized = true;
		return MH_Initialize();
	}
	else {
		return MH_ERROR_ALREADY_INITIALIZED;
	}
}

export MH_STATUS spookydash::uninitialize() {
	if (is_initialized) {
		is_initialized = false;
		return MH_Uninitialize();
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}

export MH_STATUS spookydash::create_hook(PVOID target, void* original, LPVOID callback) {
	if (is_initialized) {
		MH_STATUS result = MH_CreateHook(target, callback, (LPVOID*)original);
		return result;
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}

export MH_STATUS spookydash::remove_hook(LPVOID targetFunction) {
	if (is_initialized) {
		return MH_RemoveHook(targetFunction);
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}

export MH_STATUS spookydash::enable_hook(LPVOID target) {
	if (is_initialized) {
		MH_EnableHook(target);
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}

export MH_STATUS spookydash::disable_hook(LPVOID target) {
	if (is_initialized) {
		MH_DisableHook(target);
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}