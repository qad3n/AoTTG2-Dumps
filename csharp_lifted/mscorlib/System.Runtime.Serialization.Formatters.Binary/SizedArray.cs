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
[Token(Token = "0x2000430")]
internal sealed class SizedArray : ICloneable
{
	[Token(Token = "0x4001164")]
	[FieldOffset(Offset = "0x10")]
	internal object[] objects;

	[Token(Token = "0x4001165")]
	[FieldOffset(Offset = "0x18")]
	internal object[] negObjects;

	[Token(Token = "0x1700045A")]
	internal object this[int index]
	{
		[Token(Token = "0x60021D5")]
		[Address(RVA = "0x53C1640", Offset = "0x53C0640", VA = "0x53C1640")]
		get
		{
			return null;
		}
		[Token(Token = "0x60021D6")]
		[Address(RVA = "0x53C1530", Offset = "0x53C0530", VA = "0x53C1530")]
		set
		{
		}
	}

	[Token(Token = "0x60021D1")]
	[Address(RVA = "0x53BC550", Offset = "0x53BB550", VA = "0x53BC550")]
	internal SizedArray()
	{
	}

	[Token(Token = "0x60021D2")]
	[Address(RVA = "0x53BC6B0", Offset = "0x53BB6B0", VA = "0x53BC6B0")]
	internal SizedArray(int length)
	{
	}

	[Token(Token = "0x60021D3")]
	[Address(RVA = "0x53C2B20", Offset = "0x53C1B20", VA = "0x53C2B20")]
	private SizedArray(System.Runtime.Serialization.Formatters.Binary.SizedArray sizedArray)
	{
	}

	[Token(Token = "0x60021D4")]
	[Address(RVA = "0x53C2C00", Offset = "0x53C1C00", VA = "0x53C2C00", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60021D7")]
	[Address(RVA = "0x53C2C50", Offset = "0x53C1C50", VA = "0x53C2C50")]
	internal void IncreaseCapacity(int index)
	{
	}
}
