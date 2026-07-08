using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000236")]
[Flags]
public enum UsageHints
{
	[Token(Token = "0x400080B")]
	None = 0,
	[Token(Token = "0x400080C")]
	DynamicTransform = 1,
	[Token(Token = "0x400080D")]
	GroupTransform = 2,
	[Token(Token = "0x400080E")]
	MaskContainer = 4,
	[Token(Token = "0x400080F")]
	DynamicColor = 8
}
