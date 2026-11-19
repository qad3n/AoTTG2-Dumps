// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.BitHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000289")]
internal sealed class BitHelper
{
	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _length;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x18")]
	private unsafe readonly int* _arrayPtr;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x20")]
	private readonly int[] _array;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x28")]
	private readonly bool _useStackAlloc;

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x5E2B890", Offset = "0x5E2A890", VA = "0x5E2B890")]
	internal unsafe BitHelper(int* bitArrayPtr, int length)
	{
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x5E2B8C0", Offset = "0x5E2A8C0", VA = "0x5E2B8C0")]
	internal BitHelper(int[] bitArray, int length)
	{
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x5E2B8F0", Offset = "0x5E2A8F0", VA = "0x5E2B8F0")]
	internal void MarkBit(int bitPosition)
	{
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x5E2B950", Offset = "0x5E2A950", VA = "0x5E2B950")]
	internal bool IsMarked(int bitPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x5E2B9B0", Offset = "0x5E2A9B0", VA = "0x5E2B9B0")]
	internal static int ToIntArrayLength(int n)
	{
		return default(int);
	}
}
