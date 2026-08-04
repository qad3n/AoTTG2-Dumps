// ==================== AoTTG2 cross-reference ====================
// Type: System.DTSubString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3CAE390", Offset = "0x3CAE390", VA = "0x3CAE390")]
		get
		{
			return default(char);
		}
	}
}
