// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RuntimePlatform
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200009B")]
public enum RuntimePlatform
{
	[Token(Token = "0x4000169")]
	OSXEditor = 0,
	[Token(Token = "0x400016A")]
	OSXPlayer = 1,
	[Token(Token = "0x400016B")]
	WindowsPlayer = 2,
	[Token(Token = "0x400016C")]
	[Obsolete("WebPlayer export is no longer supported in Unity 5.4+.", true)]
	OSXWebPlayer = 3,
	[Token(Token = "0x400016D")]
	[Obsolete("Dashboard widget on Mac OS X export is no longer supported in Unity 5.4+.", true)]
	OSXDashboardPlayer = 4,
	[Token(Token = "0x400016E")]
	[Obsolete("WebPlayer export is no longer supported in Unity 5.4+.", true)]
	WindowsWebPlayer = 5,
	[Token(Token = "0x400016F")]
	WindowsEditor = 7,
	[Token(Token = "0x4000170")]
	IPhonePlayer = 8,
	[Token(Token = "0x4000171")]
	[Obsolete("Xbox360 export is no longer supported in Unity 5.5+.")]
	XBOX360 = 10,
	[Token(Token = "0x4000172")]
	[Obsolete("PS3 export is no longer supported in Unity >=5.5.")]
	PS3 = 9,
	[Token(Token = "0x4000173")]
	Android = 11,
	[Token(Token = "0x4000174")]
	[Obsolete("NaCl export is no longer supported in Unity 5.0+.")]
	NaCl = 12,
	[Token(Token = "0x4000175")]
	[Obsolete("FlashPlayer export is no longer supported in Unity 5.0+.")]
	FlashPlayer = 15,
	[Token(Token = "0x4000176")]
	LinuxPlayer = 13,
	[Token(Token = "0x4000177")]
	LinuxEditor = 16,
	[Token(Token = "0x4000178")]
	WebGLPlayer = 17,
	[Token(Token = "0x4000179")]
	[Obsolete("Use WSAPlayerX86 instead")]
	MetroPlayerX86 = 18,
	[Token(Token = "0x400017A")]
	WSAPlayerX86 = MetroPlayerX86,
	[Token(Token = "0x400017B")]
	[Obsolete("Use WSAPlayerX64 instead")]
	MetroPlayerX64 = 19,
	[Token(Token = "0x400017C")]
	WSAPlayerX64 = MetroPlayerX64,
	[Token(Token = "0x400017D")]
	[Obsolete("Use WSAPlayerARM instead")]
	MetroPlayerARM = 20,
	[Token(Token = "0x400017E")]
	WSAPlayerARM = MetroPlayerARM,
	[Token(Token = "0x400017F")]
	[Obsolete("Windows Phone 8 was removed in 5.3")]
	WP8Player = 21,
	[Token(Token = "0x4000180")]
	[Obsolete("BlackBerryPlayer export is no longer supported in Unity 5.4+.")]
	BlackBerryPlayer = 22,
	[Token(Token = "0x4000181")]
	[Obsolete("TizenPlayer export is no longer supported in Unity 2017.3+.")]
	TizenPlayer = 23,
	[Token(Token = "0x4000182")]
	[Obsolete("PSP2 is no longer supported as of Unity 2018.3")]
	PSP2 = 24,
	[Token(Token = "0x4000183")]
	PS4 = 25,
	[Token(Token = "0x4000184")]
	[Obsolete("PSM export is no longer supported in Unity >= 5.3")]
	PSM = 26,
	[Token(Token = "0x4000185")]
	XboxOne = 27,
	[Token(Token = "0x4000186")]
	[Obsolete("SamsungTVPlayer export is no longer supported in Unity 2017.3+.")]
	SamsungTVPlayer = 28,
	[Token(Token = "0x4000187")]
	[Obsolete("Wii U is no longer supported in Unity 2018.1+.")]
	WiiU = 30,
	[Token(Token = "0x4000188")]
	tvOS = 31,
	[Token(Token = "0x4000189")]
	Switch = 32,
	[Token(Token = "0x400018A")]
	[Obsolete("Lumin is no longer supported in Unity 2022.2")]
	Lumin = 33,
	[Token(Token = "0x400018B")]
	[Obsolete("Stadia is no longer supported in Unity 2023.1")]
	Stadia = 34,
	[Token(Token = "0x400018C")]
	[Obsolete("CloudRendering is deprecated, please use LinuxHeadlessSimulation (UnityUpgradable) -> LinuxHeadlessSimulation", false)]
	CloudRendering = -1,
	[Token(Token = "0x400018D")]
	LinuxHeadlessSimulation = 35,
	[Token(Token = "0x400018E")]
	[Obsolete("GameCoreScarlett is deprecated, please use GameCoreXboxSeries (UnityUpgradable) -> GameCoreXboxSeries", false)]
	GameCoreScarlett = CloudRendering,
	[Token(Token = "0x400018F")]
	GameCoreXboxSeries = 36,
	[Token(Token = "0x4000190")]
	GameCoreXboxOne = 37,
	[Token(Token = "0x4000191")]
	PS5 = 38,
	[Token(Token = "0x4000192")]
	EmbeddedLinuxArm64 = 39,
	[Token(Token = "0x4000193")]
	[Obsolete("32-bit embedded platforms are no longer supported")]
	EmbeddedLinuxArm32 = 40,
	[Token(Token = "0x4000194")]
	EmbeddedLinuxX64 = 41,
	[Token(Token = "0x4000195")]
	[Obsolete("32-bit embedded platforms are no longer supported")]
	EmbeddedLinuxX86 = 42,
	[Token(Token = "0x4000196")]
	LinuxServer = 43,
	[Token(Token = "0x4000197")]
	WindowsServer = 44,
	[Token(Token = "0x4000198")]
	OSXServer = 45,
	[Token(Token = "0x4000199")]
	[Obsolete("32-bit embedded platforms are no longer supported")]
	QNXArm32 = 46,
	[Token(Token = "0x400019A")]
	QNXArm64 = 47,
	[Token(Token = "0x400019B")]
	QNXX64 = 48,
	[Token(Token = "0x400019C")]
	[Obsolete("32-bit embedded platforms are no longer supported")]
	QNXX86 = 49,
	[Token(Token = "0x400019D")]
	VisionOS = 50,
	[Token(Token = "0x400019E")]
	Switch2 = 51,
	[Token(Token = "0x400019F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete]
	KeplerArm64 = 52,
	[Token(Token = "0x40001A0")]
	[Obsolete]
	[EditorBrowsable(EditorBrowsableState.Never)]
	KeplerX64 = 53
}
