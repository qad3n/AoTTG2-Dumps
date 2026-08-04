// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.IntSizedArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Serializable]
[Token(Token = "0x2000429")]
internal sealed class IntSizedArray : ICloneable
{
	[Token(Token = "0x4001204")]
	[FieldOffset(Offset = "0x10")]
	internal int[] objects;

	[Token(Token = "0x4001205")]
	[FieldOffset(Offset = "0x18")]
	internal int[] negObjects;

	[Token(Token = "0x1700045A")]
	internal int this[int index]
	{
		[Token(Token = "0x6002196")]
		[Address(RVA = "0x3BBB950", Offset = "0x3BBB950", VA = "0x3BBB950")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002197")]
		[Address(RVA = "0x3BBB9A0", Offset = "0x3BBB9A0", VA = "0x3BBB9A0")]
		set
		{
		}
	}

	[Token(Token = "0x6002193")]
	[Address(RVA = "0x3BBB770", Offset = "0x3BBB770", VA = "0x3BBB770")]
	public IntSizedArray()
	{
	}

	[Token(Token = "0x6002194")]
	[Address(RVA = "0x3BBB7F0", Offset = "0x3BBB7F0", VA = "0x3BBB7F0")]
	private IntSizedArray(System.Runtime.Serialization.Formatters.Binary.IntSizedArray sizedArray)
	{
	}

	[Token(Token = "0x6002195")]
	[Address(RVA = "0x3BBB900", Offset = "0x3BBB900", VA = "0x3BBB900", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002198")]
	[Address(RVA = "0x3BBBA30", Offset = "0x3BBBA30", VA = "0x3BBBA30")]
	internal void IncreaseCapacity(int index)
	{
	}
}
