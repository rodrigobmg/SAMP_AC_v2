#pragma once

#define ADDRESS_LOADED *(int*)0xC8D4C0
#define GET_HWND *(HWND*)0xC97C1C
#define PLAYER_POINTER *(int*)0xB6F5F0
#define DIRECT_D3D9		*(IDirect3D9**)0xC97C20
#define DIRECT_DEVICE	*(IDirect3DDevice9**)0xC97C28
#define DIRECT_PARAMETERS	*( D3DPRESENT_PARAMETERS**)0xC9C040
#define SWITCH_RELOAD		(void*)0x060B4FA
#define FRAME_LIMITER		*(BYTE*)0xBA6794
#define RESOLUTION_X		*(int*)0xC9C040
#define RESOLUTION_Y		*(int*)0xC9C044
#define CURRENT_HWND		*(HWND*)0xC97C1C
#define SPRINT_KEY			*(BYTE*)0xB73478
#define CROUCH_KEY			*(BYTE*)0xB7347C
#define AIM_KEY				*(BYTE*)0xB73464

#define VAR_LITE_FOOT		(void*)0x60A71C
#define VAR_SHOT_TICK		*(int*)0xB5F898
#define VAR_GTA3_IMG_PATH					(void*)0x858AF4
#define VAR_CPED_SPECIAL_FLAGS		*(BYTE*)((PLAYER_POINTER) + 0x42)