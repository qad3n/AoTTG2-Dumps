using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000BC")]
internal ref struct DTSubString
{
	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x0")]
	internal ReadOnlySpan<char> s;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x10")]
	internal int index;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x14")]
	internal int length;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x18")]
	internal System.DTSubStringType type;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x1C")]
	internal int value;

	[Token(Token = "0x1700008C")]
	internal char this[int relativeIndex]
	{
		[Token(Token = "0x6000747")]
		[Address(RVA = "0x4FC8870", Offset = "0x4FC8870", VA = "0x4FC8870")]
		get
		{
			return default(char);
		}
	}
}
