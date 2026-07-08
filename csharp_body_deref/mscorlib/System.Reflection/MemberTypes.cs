using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004E4")]
[Flags]
public enum MemberTypes
{
	[Token(Token = "0x4001406")]
	Constructor = 1,
	[Token(Token = "0x4001407")]
	Event = 2,
	[Token(Token = "0x4001408")]
	Field = 4,
	[Token(Token = "0x4001409")]
	Method = 8,
	[Token(Token = "0x400140A")]
	Property = 0x10,
	[Token(Token = "0x400140B")]
	TypeInfo = 0x20,
	[Token(Token = "0x400140C")]
	Custom = 0x40,
	[Token(Token = "0x400140D")]
	NestedType = 0x80,
	[Token(Token = "0x400140E")]
	All = 0xBF
}
