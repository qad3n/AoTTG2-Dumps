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
		[Address(RVA = "0x4DEBBD0", Offset = "0x4DEBBD0", VA = "0x4DEBBD0")]
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
	[Address(RVA = "0x4DEB9F0", Offset = "0x4DEB9F0", VA = "0x4DEB9F0")]
	public CodePointIndexer(int[] starts, int[] ends, int defaultIndex, int defaultCP)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4DEBBF0", Offset = "0x4DEBBF0", VA = "0x4DEBBF0")]
	public int ToIndex(int cp)
	{
		return default(int);
	}
}
