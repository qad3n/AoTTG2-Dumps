// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000408")]
internal sealed class BinaryObject
{
	[Token(Token = "0x40010BB")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010BC")]
	[FieldOffset(Offset = "0x14")]
	internal int mapId;

	[Token(Token = "0x6002049")]
	[Address(RVA = "0x3BA32F0", Offset = "0x3BA32F0", VA = "0x3BA32F0")]
	internal BinaryObject()
	{
	}

	[Token(Token = "0x600204A")]
	[Address(RVA = "0x3BA3300", Offset = "0x3BA3300", VA = "0x3BA3300")]
	internal void Set(int objectId, int mapId)
	{
	}

	[Token(Token = "0x600204B")]
	[Address(RVA = "0x3BA3310", Offset = "0x3BA3310", VA = "0x3BA3310", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600204C")]
	[Address(RVA = "0x3BA3390", Offset = "0x3BA3390", VA = "0x3BA3390", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600204D")]
	[Address(RVA = "0x3BA33D0", Offset = "0x3BA33D0", VA = "0x3BA33D0")]
	public void Dump()
	{
	}
}
