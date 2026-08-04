// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040B")]
internal sealed class BinaryObjectString
{
	[Token(Token = "0x40010CC")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010CD")]
	[FieldOffset(Offset = "0x18")]
	internal string value;

	[Token(Token = "0x6002055")]
	[Address(RVA = "0x3BA3940", Offset = "0x3BA3940", VA = "0x3BA3940")]
	internal BinaryObjectString()
	{
	}

	[Token(Token = "0x6002056")]
	[Address(RVA = "0x3BA3950", Offset = "0x3BA3950", VA = "0x3BA3950")]
	internal void Set(int objectId, string value)
	{
	}

	[Token(Token = "0x6002057")]
	[Address(RVA = "0x3BA3970", Offset = "0x3BA3970", VA = "0x3BA3970", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002058")]
	[Address(RVA = "0x3BA39F0", Offset = "0x3BA39F0", VA = "0x3BA39F0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002059")]
	[Address(RVA = "0x3BA3A40", Offset = "0x3BA3A40", VA = "0x3BA3A40")]
	public void Dump()
	{
	}
}
