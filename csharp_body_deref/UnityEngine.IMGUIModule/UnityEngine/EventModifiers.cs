using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000004")]
[Flags]
public enum EventModifiers
{
	[Token(Token = "0x400002C")]
	None = 0,
	[Token(Token = "0x400002D")]
	Shift = 1,
	[Token(Token = "0x400002E")]
	Control = 2,
	[Token(Token = "0x400002F")]
	Alt = 4,
	[Token(Token = "0x4000030")]
	Command = 8,
	[Token(Token = "0x4000031")]
	Numeric = 0x10,
	[Token(Token = "0x4000032")]
	CapsLock = 0x20,
	[Token(Token = "0x4000033")]
	FunctionKey = 0x40
}
