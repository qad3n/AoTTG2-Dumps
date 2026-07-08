using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200007F")]
public enum RuntimePlatform
{
	[Token(Token = "0x4000122")]
	OSXEditor = 0,
	[Token(Token = "0x4000123")]
	OSXPlayer = 1,
	[Token(Token = "0x4000124")]
	WindowsPlayer = 2,
	[Token(Token = "0x4000125")]
	[Obsolete("WebPlayer export is no longer supported in Unity 5.4+.", true)]
	OSXWebPlayer = 3,
	[Token(Token = "0x4000126")]
	[Obsolete("Dashboard widget on Mac OS X export is no longer supported in Unity 5.4+.", true)]
	OSXDashboardPlayer = 4,
	[Token(Token = "0x4000127")]
	[Obsolete("WebPlayer export is no longer supported in Unity 5.4+.", true)]
	WindowsWebPlayer = 5,
	[Token(Token = "0x4000128")]
	WindowsEditor = 7,
	[Token(Token = "0x4000129")]
	IPhonePlayer = 8,
	[Token(Token = "0x400012A")]
	[Obsolete("Xbox360 export is no longer supported in Unity 5.5+.")]
	XBOX360 = 10,
	[Token(Token = "0x400012B")]
	[Obsolete("PS3 export is no longer supported in Unity >=5.5.")]
	PS3 = 9,
	[Token(Token = "0x400012C")]
	Android = 11,
	[Token(Token = "0x400012D")]
	[Obsolete("NaCl export is no longer supported in Unity 5.0+.")]
	NaCl = 12,
	[Token(Token = "0x400012E")]
	[Obsolete("FlashPlayer export is no longer supported in Unity 5.0+.")]
	FlashPlayer = 15,
	[Token(Token = "0x400012F")]
	LinuxPlayer = 13,
	[Token(Token = "0x4000130")]
	LinuxEditor = 16,
	[Token(Token = "0x4000131")]
	WebGLPlayer = 17,
	[Token(Token = "0x4000132")]
	[Obsolete("Use WSAPlayerX86 instead")]
	MetroPlayerX86 = 18,
	[Token(Token = "0x4000133")]
	WSAPlayerX86 = 18,
	[Token(Token = "0x4000134")]
	[Obsolete("Use WSAPlayerX64 instead")]
	MetroPlayerX64 = 19,
	[Token(Token = "0x4000135")]
	WSAPlayerX64 = 19,
	[Token(Token = "0x4000136")]
	[Obsolete("Use WSAPlayerARM instead")]
	MetroPlayerARM = 20,
	[Token(Token = "0x4000137")]
	WSAPlayerARM = 20,
	[Token(Token = "0x4000138")]
	[Obsolete("Windows Phone 8 was removed in 5.3")]
	WP8Player = 21,
	[Token(Token = "0x4000139")]
	[Obsolete("BlackBerryPlayer export is no longer supported in Unity 5.4+.")]
	BlackBerryPlayer = 22,
	[Token(Token = "0x400013A")]
	[Obsolete("TizenPlayer export is no longer supported in Unity 2017.3+.")]
	TizenPlayer = 23,
	[Token(Token = "0x400013B")]
	[Obsolete("PSP2 is no longer supported as of Unity 2018.3")]
	PSP2 = 24,
	[Token(Token = "0x400013C")]
	PS4 = 25,
	[Token(Token = "0x400013D")]
	[Obsolete("PSM export is no longer supported in Unity >= 5.3")]
	PSM = 26,
	[Token(Token = "0x400013E")]
	XboxOne = 27,
	[Token(Token = "0x400013F")]
	[Obsolete("SamsungTVPlayer export is no longer supported in Unity 2017.3+.")]
	SamsungTVPlayer = 28,
	[Token(Token = "0x4000140")]
	[Obsolete("Wii U is no longer supported in Unity 2018.1+.")]
	WiiU = 30,
	[Token(Token = "0x4000141")]
	tvOS = 31,
	[Token(Token = "0x4000142")]
	Switch = 32,
	[Token(Token = "0x4000143")]
	[Obsolete("Lumin is no longer supported in Unity 2022.2")]
	Lumin = 33,
	[Token(Token = "0x4000144")]
	[Obsolete("Stadia is no longer supported in Unity 2023.1")]
	Stadia = 34,
	[Token(Token = "0x4000145")]
	[Obsolete("CloudRendering is deprecated, please use LinuxHeadlessSimulation (UnityUpgradable) -> LinuxHeadlessSimulation", false)]
	CloudRendering = -1,
	[Token(Token = "0x4000146")]
	LinuxHeadlessSimulation = 35,
	[Token(Token = "0x4000147")]
	[Obsolete("GameCoreScarlett is deprecated, please use GameCoreXboxSeries (UnityUpgradable) -> GameCoreXboxSeries", false)]
	GameCoreScarlett = -1,
	[Token(Token = "0x4000148")]
	GameCoreXboxSeries = 36,
	[Token(Token = "0x4000149")]
	GameCoreXboxOne = 37,
	[Token(Token = "0x400014A")]
	PS5 = 38,
	[Token(Token = "0x400014B")]
	EmbeddedLinuxArm64 = 39,
	[Token(Token = "0x400014C")]
	EmbeddedLinuxArm32 = 40,
	[Token(Token = "0x400014D")]
	EmbeddedLinuxX64 = 41,
	[Token(Token = "0x400014E")]
	EmbeddedLinuxX86 = 42,
	[Token(Token = "0x400014F")]
	LinuxServer = 43,
	[Token(Token = "0x4000150")]
	WindowsServer = 44,
	[Token(Token = "0x4000151")]
	OSXServer = 45,
	[Token(Token = "0x4000152")]
	QNXArm32 = 46,
	[Token(Token = "0x4000153")]
	QNXArm64 = 47,
	[Token(Token = "0x4000154")]
	QNXX64 = 48,
	[Token(Token = "0x4000155")]
	QNXX86 = 49
}
