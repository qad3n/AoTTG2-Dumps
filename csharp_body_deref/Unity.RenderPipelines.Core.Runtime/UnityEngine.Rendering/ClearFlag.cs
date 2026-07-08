using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000065")]
[Flags]
public enum ClearFlag
{
	[Token(Token = "0x40001AD")]
	None = 0,
	[Token(Token = "0x40001AE")]
	Color = 1,
	[Token(Token = "0x40001AF")]
	Depth = 2,
	[Token(Token = "0x40001B0")]
	Stencil = 4,
	[Token(Token = "0x40001B1")]
	DepthStencil = 6,
	[Token(Token = "0x40001B2")]
	ColorStencil = 5,
	[Token(Token = "0x40001B3")]
	All = 7
}
