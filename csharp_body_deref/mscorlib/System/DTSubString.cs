// ==================== AoTTG2 cross-reference ====================
// Type: System.DTSubString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E4")]
internal ref struct DTSubString
{
	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x0")]
	internal ReadOnlySpan<char> s;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x10")]
	internal int index;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x14")]
	internal int length;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x18")]
	internal System.DTSubStringType type;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x1C")]
	internal int value;

	[Token(Token = "0x1700008C")]
	internal char this[int relativeIndex]
	{
		[Token(Token = "0x6000776")]
		[Address(RVA = "0x1B23740", Offset = "0x1B21D40", VA = "0x181B23740")]
		get
		{
			return default(char);
		}
	}
}
