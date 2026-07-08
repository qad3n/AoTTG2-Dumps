using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000E1")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ColorGamut.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public enum ColorGamut
{
	[Token(Token = "0x400026F")]
	sRGB,
	[Token(Token = "0x4000270")]
	Rec709,
	[Token(Token = "0x4000271")]
	Rec2020,
	[Token(Token = "0x4000272")]
	DisplayP3,
	[Token(Token = "0x4000273")]
	HDR10,
	[Token(Token = "0x4000274")]
	DolbyHDR,
	[Token(Token = "0x4000275")]
	P3D65G22
}
