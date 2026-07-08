using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x20000D0")]
[Flags]
public enum CameraType
{
	[Token(Token = "0x4000219")]
	Game = 1,
	[Token(Token = "0x400021A")]
	SceneView = 2,
	[Token(Token = "0x400021B")]
	Preview = 4,
	[Token(Token = "0x400021C")]
	VR = 8,
	[Token(Token = "0x400021D")]
	Reflection = 0x10
}
