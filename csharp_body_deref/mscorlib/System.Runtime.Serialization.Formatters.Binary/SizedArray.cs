// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SizedArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Serializable]
[Token(Token = "0x2000428")]
internal sealed class SizedArray : ICloneable
{
	[Token(Token = "0x4001202")]
	[FieldOffset(Offset = "0x10")]
	internal object[] objects;

	[Token(Token = "0x4001203")]
	[FieldOffset(Offset = "0x18")]
	internal object[] negObjects;

	[Token(Token = "0x17000459")]
	internal object this[int index]
	{
		[Token(Token = "0x6002190")]
		[Address(RVA = "0x3BB9ED0", Offset = "0x3BB9ED0", VA = "0x3BB9ED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002191")]
		[Address(RVA = "0x3BB9DD0", Offset = "0x3BB9DD0", VA = "0x3BB9DD0")]
		set
		{
		}
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x3BB4F30", Offset = "0x3BB4F30", VA = "0x3BB4F30")]
	internal SizedArray()
	{
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x3BB5090", Offset = "0x3BB5090", VA = "0x3BB5090")]
	internal SizedArray(int length)
	{
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x3BBB390", Offset = "0x3BBB390", VA = "0x3BBB390")]
	private SizedArray(System.Runtime.Serialization.Formatters.Binary.SizedArray sizedArray)
	{
	}

	[Token(Token = "0x600218F")]
	[Address(RVA = "0x3BBB470", Offset = "0x3BBB470", VA = "0x3BBB470", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x3BBB4C0", Offset = "0x3BBB4C0", VA = "0x3BBB4C0")]
	internal void IncreaseCapacity(int index)
	{
	}
}
