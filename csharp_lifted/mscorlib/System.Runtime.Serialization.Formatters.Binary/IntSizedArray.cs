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
[Token(Token = "0x2000431")]
internal sealed class IntSizedArray : ICloneable
{
	[Token(Token = "0x4001166")]
	[FieldOffset(Offset = "0x10")]
	internal int[] objects;

	[Token(Token = "0x4001167")]
	[FieldOffset(Offset = "0x18")]
	internal int[] negObjects;

	[Token(Token = "0x1700045B")]
	internal int this[int index]
	{
		[Token(Token = "0x60021DB")]
		[Address(RVA = "0x53C3060", Offset = "0x53C2060", VA = "0x53C3060")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60021DC")]
		[Address(RVA = "0x53C30C0", Offset = "0x53C20C0", VA = "0x53C30C0")]
		set
		{
		}
	}

	[Token(Token = "0x60021D8")]
	[Address(RVA = "0x53C2E80", Offset = "0x53C1E80", VA = "0x53C2E80")]
	public IntSizedArray()
	{
	}

	[Token(Token = "0x60021D9")]
	[Address(RVA = "0x53C2F00", Offset = "0x53C1F00", VA = "0x53C2F00")]
	private IntSizedArray(System.Runtime.Serialization.Formatters.Binary.IntSizedArray sizedArray)
	{
	}

	[Token(Token = "0x60021DA")]
	[Address(RVA = "0x53C3010", Offset = "0x53C2010", VA = "0x53C3010", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60021DD")]
	[Address(RVA = "0x53C3160", Offset = "0x53C2160", VA = "0x53C3160")]
	internal void IncreaseCapacity(int index)
	{
	}
}
