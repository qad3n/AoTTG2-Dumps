using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x200000F")]
[Flags]
public enum FontFeatureLookupFlags
{
	[Token(Token = "0x400006E")]
	None = 0,
	[Token(Token = "0x400006F")]
	IgnoreLigatures = 4,
	[Token(Token = "0x4000070")]
	IgnoreSpacingAdjustments = 0x100
}
