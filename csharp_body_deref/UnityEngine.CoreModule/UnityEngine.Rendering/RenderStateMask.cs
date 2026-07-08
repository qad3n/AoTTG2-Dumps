using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F2")]
[Flags]
public enum RenderStateMask
{
	[Token(Token = "0x40008EA")]
	Nothing = 0,
	[Token(Token = "0x40008EB")]
	Blend = 1,
	[Token(Token = "0x40008EC")]
	Raster = 2,
	[Token(Token = "0x40008ED")]
	Depth = 4,
	[Token(Token = "0x40008EE")]
	Stencil = 8,
	[Token(Token = "0x40008EF")]
	Everything = 0xF
}
