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

[Token(Token = "0x2000030")]
internal class CodePointIndexer
{
	[Serializable]
	[Token(Token = "0x2000031")]
	internal struct TableRange
	{
		[Token(Token = "0x40000D4")]
		[FieldOffset(Offset = "0x0")]
		public readonly int Start;

		[Token(Token = "0x40000D5")]
		[FieldOffset(Offset = "0x4")]
		public readonly int End;

		[Token(Token = "0x40000D6")]
		[FieldOffset(Offset = "0x8")]
		public readonly int Count;

		[Token(Token = "0x40000D7")]
		[FieldOffset(Offset = "0xC")]
		public readonly int IndexStart;

		[Token(Token = "0x40000D8")]
		[FieldOffset(Offset = "0x10")]
		public readonly int IndexEnd;

		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x3AD16F0", Offset = "0x3AD16F0", VA = "0x3AD16F0")]
		public TableRange(int start, int end, int indexStart)
		{
		}
	}

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x10")]
	private readonly TableRange[] ranges;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x18")]
	public readonly int TotalCount;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x1C")]
	private int defaultIndex;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x20")]
	private int defaultCP;

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x3AD1510", Offset = "0x3AD1510", VA = "0x3AD1510")]
	public CodePointIndexer(int[] starts, int[] ends, int defaultIndex, int defaultCP)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x3AD1710", Offset = "0x3AD1710", VA = "0x3AD1710")]
	public int ToIndex(int cp)
	{
		return default(int);
	}
}
