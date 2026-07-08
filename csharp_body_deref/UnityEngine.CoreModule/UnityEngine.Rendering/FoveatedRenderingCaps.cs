using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002C2")]
[Flags]
public enum FoveatedRenderingCaps
{
	[Token(Token = "0x40007ED")]
	None = 0,
	[Token(Token = "0x40007EE")]
	FoveationImage = 1,
	[Token(Token = "0x40007EF")]
	NonUniformRaster = 2
}
