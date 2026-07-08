using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F0")]
[Flags]
public enum PropertyAttributes
{
	[Token(Token = "0x400145C")]
	None = 0,
	[Token(Token = "0x400145D")]
	SpecialName = 0x200,
	[Token(Token = "0x400145E")]
	RTSpecialName = 0x400,
	[Token(Token = "0x400145F")]
	HasDefault = 0x1000,
	[Token(Token = "0x4001460")]
	Reserved2 = 0x2000,
	[Token(Token = "0x4001461")]
	Reserved3 = 0x4000,
	[Token(Token = "0x4001462")]
	Reserved4 = 0x8000,
	[Token(Token = "0x4001463")]
	ReservedMask = 0xF400
}
