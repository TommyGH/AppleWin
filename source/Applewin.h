#pragma once

#include "SaveState_Structs_common.h"
#include "Common.h"

void SetCurrentCLK6502();
void SetCurrentImageDir(const char* pszImageDir);
void SetCharsetType(void);

extern const UINT16* GetAppleWinVersion(void);
extern char VERSIONSTRING[];	// Constructed in WinMain()

extern TCHAR     *g_pAppTitle;

extern eApple2Type g_Apple2Type;
eApple2Type GetApple2Type(void);
void SetApple2Type(eApple2Type type);

extern bool       g_bFullSpeed;

//===========================================

// Win32
extern HINSTANCE  g_hInstance;

extern AppMode_e g_nAppMode;
bool GetLoadedSaveStateFlag(void);
void SetLoadedSaveStateFlag(const bool bFlag);

extern TCHAR      g_sProgramDir[MAX_PATH];
extern TCHAR      g_sCurrentDir[MAX_PATH];

extern BOOL       restart;

extern DWORD      g_dwSpeed;
extern double     g_fCurrentCLK6502;

extern int        g_nCpuCyclesFeedback;
extern DWORD      g_dwCyclesThisFrame;

extern FILE*      g_fh;				// Filehandle for log file
extern bool       g_bDisableDirectInput;				// Cmd line switch: don't init DI (so no DIMouse support)
extern bool       g_bDisableDirectSound;				// Cmd line switch: don't init DS (so no MB/Speaker support)
extern bool       g_bDisableDirectSoundMockingboard;	// Cmd line switch: don't init MB support
extern int        g_nMemoryClearType;					// Cmd line switch: use specific MIP (Memory Initialization Pattern)

extern SS_CARDTYPE g_Slot4;	// Mockingboard, Z80, Mouse in slot4
extern SS_CARDTYPE g_Slot5;	// Mockingboard, Z80,       in slot5  // change for "4 disk" needed(?)

extern HANDLE	g_hCustomRomF8;		// NULL if no custom rom

#ifdef USE_SPEECH_API
class CSpeech;
extern CSpeech g_Speech;
#endif

extern __interface IPropertySheet& sg_PropertySheet;
