using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000288")]
internal sealed class BitHelper
{
	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _length;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x18")]
	private unsafe readonly int* _arrayPtr;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x20")]
	private readonly int[] _array;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x28")]
	private readonly bool _useStackAlloc;

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x41F1D90", Offset = "0x41F1D90", VA = "0x41F1D90")]
	internal unsafe BitHelper(int* bitArrayPtr, int length)
	{
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x41F1DC0", Offset = "0x41F1DC0", VA = "0x41F1DC0")]
	internal BitHelper(int[] bitArray, int length)
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x41F1DF0", Offset = "0x41F1DF0", VA = "0x41F1DF0")]
	internal void MarkBit(int bitPosition)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x41F1E50", Offset = "0x41F1E50", VA = "0x41F1E50")]
	internal bool IsMarked(int bitPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x41F1EB0", Offset = "0x41F1EB0", VA = "0x41F1EB0")]
	internal static int ToIntArrayLength(int n)
	{
		return default(int);
	}
}
