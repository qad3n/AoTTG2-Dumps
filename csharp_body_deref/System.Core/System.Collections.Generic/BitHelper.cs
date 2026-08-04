// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.BitHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4516E90", Offset = "0x4516E90", VA = "0x4516E90")]
	internal unsafe BitHelper(int* bitArrayPtr, int length)
	{
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x4516EC0", Offset = "0x4516EC0", VA = "0x4516EC0")]
	internal BitHelper(int[] bitArray, int length)
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x4516EF0", Offset = "0x4516EF0", VA = "0x4516EF0")]
	internal void MarkBit(int bitPosition)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x4516F50", Offset = "0x4516F50", VA = "0x4516F50")]
	internal bool IsMarked(int bitPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x4516FB0", Offset = "0x4516FB0", VA = "0x4516FB0")]
	internal static int ToIntArrayLength(int n)
	{
		return default(int);
	}
}
