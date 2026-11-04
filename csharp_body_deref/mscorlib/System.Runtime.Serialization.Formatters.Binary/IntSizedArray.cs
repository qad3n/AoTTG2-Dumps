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
[Token(Token = "0x2000458")]
internal sealed class IntSizedArray : ICloneable
{
	[Token(Token = "0x4001206")]
	[FieldOffset(Offset = "0x10")]
	internal int[] objects;

	[Token(Token = "0x4001207")]
	[FieldOffset(Offset = "0x18")]
	internal int[] negObjects;

	[Token(Token = "0x1700045C")]
	internal int this[int index]
	{
		[Token(Token = "0x6002205")]
		[Address(RVA = "0x1A2B140", Offset = "0x1A29740", VA = "0x181A2B140")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002206")]
		[Address(RVA = "0x1A2B1B0", Offset = "0x1A297B0", VA = "0x181A2B1B0")]
		set
		{
		}
	}

	[Token(Token = "0x6002202")]
	[Address(RVA = "0x1A2B0C0", Offset = "0x1A296C0", VA = "0x181A2B0C0")]
	public IntSizedArray()
	{
	}

	[Token(Token = "0x6002203")]
	[Address(RVA = "0x1A2AFA0", Offset = "0x1A295A0", VA = "0x181A2AFA0")]
	private IntSizedArray(System.Runtime.Serialization.Formatters.Binary.IntSizedArray sizedArray)
	{
	}

	[Token(Token = "0x6002204")]
	[Address(RVA = "0x1A2AC80", Offset = "0x1A29280", VA = "0x181A2AC80", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002207")]
	[Address(RVA = "0x1A2ADD0", Offset = "0x1A293D0", VA = "0x181A2ADD0")]
	internal void IncreaseCapacity(int index)
	{
	}
}
