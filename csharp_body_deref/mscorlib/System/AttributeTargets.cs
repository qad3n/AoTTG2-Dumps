using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000094")]
[Flags]
public enum AttributeTargets
{
	[Token(Token = "0x40001E7")]
	Assembly = 1,
	[Token(Token = "0x40001E8")]
	Module = 2,
	[Token(Token = "0x40001E9")]
	Class = 4,
	[Token(Token = "0x40001EA")]
	Struct = 8,
	[Token(Token = "0x40001EB")]
	Enum = 0x10,
	[Token(Token = "0x40001EC")]
	Constructor = 0x20,
	[Token(Token = "0x40001ED")]
	Method = 0x40,
	[Token(Token = "0x40001EE")]
	Property = 0x80,
	[Token(Token = "0x40001EF")]
	Field = 0x100,
	[Token(Token = "0x40001F0")]
	Event = 0x200,
	[Token(Token = "0x40001F1")]
	Interface = 0x400,
	[Token(Token = "0x40001F2")]
	Parameter = 0x800,
	[Token(Token = "0x40001F3")]
	Delegate = 0x1000,
	[Token(Token = "0x40001F4")]
	ReturnValue = 0x2000,
	[Token(Token = "0x40001F5")]
	GenericParameter = 0x4000,
	[Token(Token = "0x40001F6")]
	All = 0x7FFF
}
