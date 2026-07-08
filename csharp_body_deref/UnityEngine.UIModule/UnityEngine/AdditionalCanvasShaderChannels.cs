using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000007")]
[Flags]
public enum AdditionalCanvasShaderChannels
{
	[Token(Token = "0x4000008")]
	None = 0,
	[Token(Token = "0x4000009")]
	TexCoord1 = 1,
	[Token(Token = "0x400000A")]
	TexCoord2 = 2,
	[Token(Token = "0x400000B")]
	TexCoord3 = 4,
	[Token(Token = "0x400000C")]
	Normal = 8,
	[Token(Token = "0x400000D")]
	Tangent = 0x10
}
