// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Globalization.Unicode.CodePointIndexer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x200004E")]
internal class CodePointIndexer
{
	[Serializable]
	[Token(Token = "0x200004F")]
	internal struct TableRange
	{
		[Token(Token = "0x4000156")]
		[FieldOffset(Offset = "0x0")]
		public readonly int Start;

		[Token(Token = "0x4000157")]
		[FieldOffset(Offset = "0x4")]
		public readonly int End;

		[Token(Token = "0x4000158")]
		[FieldOffset(Offset = "0x8")]
		public readonly int Count;

		[Token(Token = "0x4000159")]
		[FieldOffset(Offset = "0xC")]
		public readonly int IndexStart;

		[Token(Token = "0x400015A")]
		[FieldOffset(Offset = "0x10")]
		public readonly int IndexEnd;

		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x1956B60", Offset = "0x1955160", VA = "0x181956B60")]
		public TableRange(int start, int end, int indexStart)
		{
		}
	}

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x10")]
	private readonly TableRange[] ranges;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x18")]
	public readonly int TotalCount;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x1C")]
	private int defaultIndex;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x20")]
	private int defaultCP;

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x1941800", Offset = "0x193FE00", VA = "0x181941800")]
	public CodePointIndexer(int[] starts, int[] ends, int defaultIndex, int defaultCP)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x1941770", Offset = "0x193FD70", VA = "0x181941770")]
	public int ToIndex(int cp)
	{
		return default(int);
	}
}
