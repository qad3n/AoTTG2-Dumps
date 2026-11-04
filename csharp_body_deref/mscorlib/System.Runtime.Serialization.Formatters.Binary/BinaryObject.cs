// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000437")]
internal sealed class BinaryObject
{
	[Token(Token = "0x40010BD")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010BE")]
	[FieldOffset(Offset = "0x14")]
	internal int mapId;

	[Token(Token = "0x60020B8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal BinaryObject()
	{
	}

	[Token(Token = "0x60020B9")]
	[Address(RVA = "0x1A0ED10", Offset = "0x1A0D310", VA = "0x181A0ED10")]
	internal void Set(int objectId, int mapId)
	{
	}

	[Token(Token = "0x60020BA")]
	[Address(RVA = "0x1A0ED20", Offset = "0x1A0D320", VA = "0x181A0ED20", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020BB")]
	[Address(RVA = "0x1A0D1A0", Offset = "0x1A0B7A0", VA = "0x181A0D1A0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020BC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
