using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000006")]
[Flags]
public enum PenStatus
{
	[Token(Token = "0x400001E")]
	None = 0,
	[Token(Token = "0x400001F")]
	Contact = 1,
	[Token(Token = "0x4000020")]
	Barrel = 2,
	[Token(Token = "0x4000021")]
	Inverted = 4,
	[Token(Token = "0x4000022")]
	Eraser = 8
}
