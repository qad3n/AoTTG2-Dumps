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
[Token(Token = "0x2000457")]
internal sealed class SizedArray : ICloneable
{
	[Token(Token = "0x4001204")]
	[FieldOffset(Offset = "0x10")]
	internal object[] objects;

	[Token(Token = "0x4001205")]
	[FieldOffset(Offset = "0x18")]
	internal object[] negObjects;

	[Token(Token = "0x1700045B")]
	internal object this[int index]
	{
		[Token(Token = "0x60021FF")]
		[Address(RVA = "0x1A37CC0", Offset = "0x1A362C0", VA = "0x181A37CC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002200")]
		[Address(RVA = "0x1A37D30", Offset = "0x1A36330", VA = "0x181A37D30")]
		set
		{
		}
	}

	[Token(Token = "0x60021FB")]
	[Address(RVA = "0x1A37AE0", Offset = "0x1A360E0", VA = "0x181A37AE0")]
	internal SizedArray()
	{
	}

	[Token(Token = "0x60021FC")]
	[Address(RVA = "0x1A37B60", Offset = "0x1A36160", VA = "0x181A37B60")]
	internal SizedArray(int length)
	{
	}

	[Token(Token = "0x60021FD")]
	[Address(RVA = "0x1A37BE0", Offset = "0x1A361E0", VA = "0x181A37BE0")]
	private SizedArray(System.Runtime.Serialization.Formatters.Binary.SizedArray sizedArray)
	{
	}

	[Token(Token = "0x60021FE")]
	[Address(RVA = "0x1A37810", Offset = "0x1A35E10", VA = "0x181A37810", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002201")]
	[Address(RVA = "0x1A37910", Offset = "0x1A35F10", VA = "0x181A37910")]
	internal void IncreaseCapacity(int index)
	{
	}
}
