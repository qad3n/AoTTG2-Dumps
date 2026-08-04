// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040F")]
internal sealed class BinaryObjectWithMap
{
	[Token(Token = "0x40010D3")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x40010D4")]
	[FieldOffset(Offset = "0x14")]
	internal int objectId;

	[Token(Token = "0x40010D5")]
	[FieldOffset(Offset = "0x18")]
	internal string name;

	[Token(Token = "0x40010D6")]
	[FieldOffset(Offset = "0x20")]
	internal int numMembers;

	[Token(Token = "0x40010D7")]
	[FieldOffset(Offset = "0x28")]
	internal string[] memberNames;

	[Token(Token = "0x40010D8")]
	[FieldOffset(Offset = "0x30")]
	internal int assemId;

	[Token(Token = "0x6002065")]
	[Address(RVA = "0x3BA3BF0", Offset = "0x3BA3BF0", VA = "0x3BA3BF0")]
	internal BinaryObjectWithMap()
	{
	}

	[Token(Token = "0x6002066")]
	[Address(RVA = "0x3BA3C00", Offset = "0x3BA3C00", VA = "0x3BA3C00")]
	internal BinaryObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002067")]
	[Address(RVA = "0x3BA3C20", Offset = "0x3BA3C20", VA = "0x3BA3C20")]
	internal void Set(int objectId, string name, int numMembers, string[] memberNames, int assemId)
	{
	}

	[Token(Token = "0x6002068")]
	[Address(RVA = "0x3BA3C80", Offset = "0x3BA3C80", VA = "0x3BA3C80", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002069")]
	[Address(RVA = "0x3BA3DB0", Offset = "0x3BA3DB0", VA = "0x3BA3DB0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600206A")]
	[Address(RVA = "0x3BA3EC0", Offset = "0x3BA3EC0", VA = "0x3BA3EC0")]
	public void Dump()
	{
	}
}
