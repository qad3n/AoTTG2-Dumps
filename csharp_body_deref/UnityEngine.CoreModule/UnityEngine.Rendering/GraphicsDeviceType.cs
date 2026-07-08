using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002B1")]
[UnityEngine.Scripting.UsedByNativeCode]
public enum GraphicsDeviceType
{
	[Token(Token = "0x400077A")]
	[Obsolete("OpenGL2 is no longer supported in Unity 5.5+")]
	OpenGL2 = 0,
	[Token(Token = "0x400077B")]
	[Obsolete("Direct3D 9 is no longer supported in Unity 2017.2+")]
	Direct3D9 = 1,
	[Token(Token = "0x400077C")]
	Direct3D11 = 2,
	[Token(Token = "0x400077D")]
	[Obsolete("PS3 is no longer supported in Unity 5.5+")]
	PlayStation3 = 3,
	[Token(Token = "0x400077E")]
	Null = 4,
	[Token(Token = "0x400077F")]
	[Obsolete("Xbox360 is no longer supported in Unity 5.5+")]
	Xbox360 = 6,
	[Token(Token = "0x4000780")]
	[Obsolete("OpenGL ES 2.0 is no longer supported in Unity 2023.1")]
	OpenGLES2 = 8,
	[Token(Token = "0x4000781")]
	OpenGLES3 = 11,
	[Token(Token = "0x4000782")]
	[Obsolete("PVita is no longer supported as of Unity 2018")]
	PlayStationVita = 12,
	[Token(Token = "0x4000783")]
	PlayStation4 = 13,
	[Token(Token = "0x4000784")]
	XboxOne = 14,
	[Token(Token = "0x4000785")]
	[Obsolete("PlayStationMobile is no longer supported in Unity 5.3+")]
	PlayStationMobile = 15,
	[Token(Token = "0x4000786")]
	Metal = 16,
	[Token(Token = "0x4000787")]
	OpenGLCore = 17,
	[Token(Token = "0x4000788")]
	Direct3D12 = 18,
	[Token(Token = "0x4000789")]
	[Obsolete("Nintendo 3DS support is unavailable since 2018.1")]
	N3DS = 19,
	[Token(Token = "0x400078A")]
	Vulkan = 21,
	[Token(Token = "0x400078B")]
	Switch = 22,
	[Token(Token = "0x400078C")]
	XboxOneD3D12 = 23,
	[Token(Token = "0x400078D")]
	GameCoreXboxOne = 24,
	[Token(Token = "0x400078E")]
	[Obsolete("GameCoreScarlett is deprecated, please use GameCoreXboxSeries (UnityUpgradable) -> GameCoreXboxSeries", false)]
	GameCoreScarlett = -1,
	[Token(Token = "0x400078F")]
	GameCoreXboxSeries = 25,
	[Token(Token = "0x4000790")]
	PlayStation5 = 26,
	[Token(Token = "0x4000791")]
	PlayStation5NGGC = 27
}
