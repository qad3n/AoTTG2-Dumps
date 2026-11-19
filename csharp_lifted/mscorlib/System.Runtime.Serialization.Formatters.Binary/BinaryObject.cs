// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000410")]
internal sealed class BinaryObject
{
	[Token(Token = "0x400101D")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x400101E")]
	[FieldOffset(Offset = "0x14")]
	internal int mapId;

	[Token(Token = "0x600208E")]
	[Address(RVA = "0x53AA6F0", Offset = "0x53A96F0", VA = "0x53AA6F0")]
	internal BinaryObject()
	{
	}

	[Token(Token = "0x600208F")]
	[Address(RVA = "0x53AA700", Offset = "0x53A9700", VA = "0x53AA700")]
	internal void Set(int objectId, int mapId)
	{
	}

	[Token(Token = "0x6002090")]
	[Address(RVA = "0x53AA710", Offset = "0x53A9710", VA = "0x53AA710", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002091")]
	[Address(RVA = "0x53AA790", Offset = "0x53A9790", VA = "0x53AA790", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002092")]
	[Address(RVA = "0x53AA7D0", Offset = "0x53A97D0", VA = "0x53AA7D0")]
	public void Dump()
	{
	}
}
