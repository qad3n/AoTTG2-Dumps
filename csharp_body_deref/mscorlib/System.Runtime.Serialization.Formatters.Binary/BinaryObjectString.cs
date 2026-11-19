// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000413")]
internal sealed class BinaryObjectString
{
	[Token(Token = "0x400102E")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x400102F")]
	[FieldOffset(Offset = "0x18")]
	internal string value;

	[Token(Token = "0x600209A")]
	[Address(RVA = "0x53AAB30", Offset = "0x53A9B30", VA = "0x53AAB30")]
	internal BinaryObjectString()
	{
	}

	[Token(Token = "0x600209B")]
	[Address(RVA = "0x53AAB40", Offset = "0x53A9B40", VA = "0x53AAB40")]
	internal void Set(int objectId, string value)
	{
	}

	[Token(Token = "0x600209C")]
	[Address(RVA = "0x53AAB60", Offset = "0x53A9B60", VA = "0x53AAB60", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600209D")]
	[Address(RVA = "0x53AABE0", Offset = "0x53A9BE0", VA = "0x53AABE0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600209E")]
	[Address(RVA = "0x53AAC30", Offset = "0x53A9C30", VA = "0x53AAC30")]
	public void Dump()
	{
	}
}
