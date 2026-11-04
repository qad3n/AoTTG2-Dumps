// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200043A")]
internal sealed class BinaryObjectString
{
	[Token(Token = "0x40010CE")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010CF")]
	[FieldOffset(Offset = "0x18")]
	internal string value;

	[Token(Token = "0x60020C4")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal BinaryObjectString()
	{
	}

	[Token(Token = "0x60020C5")]
	[Address(RVA = "0x1A0C0F0", Offset = "0x1A0A6F0", VA = "0x181A0C0F0")]
	internal void Set(int objectId, string value)
	{
	}

	[Token(Token = "0x60020C6")]
	[Address(RVA = "0x1A0E480", Offset = "0x1A0CA80", VA = "0x181A0E480", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020C7")]
	[Address(RVA = "0x1A0C0A0", Offset = "0x1A0A6A0", VA = "0x181A0C0A0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020C8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
