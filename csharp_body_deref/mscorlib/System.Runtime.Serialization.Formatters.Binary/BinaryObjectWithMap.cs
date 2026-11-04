// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200043E")]
internal sealed class BinaryObjectWithMap
{
	[Token(Token = "0x40010D5")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x40010D6")]
	[FieldOffset(Offset = "0x14")]
	internal int objectId;

	[Token(Token = "0x40010D7")]
	[FieldOffset(Offset = "0x18")]
	internal string name;

	[Token(Token = "0x40010D8")]
	[FieldOffset(Offset = "0x20")]
	internal int numMembers;

	[Token(Token = "0x40010D9")]
	[FieldOffset(Offset = "0x28")]
	internal string[] memberNames;

	[Token(Token = "0x40010DA")]
	[FieldOffset(Offset = "0x30")]
	internal int assemId;

	[Token(Token = "0x60020D4")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal BinaryObjectWithMap()
	{
	}

	[Token(Token = "0x60020D5")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	internal BinaryObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60020D6")]
	[Address(RVA = "0x1A0EB90", Offset = "0x1A0D190", VA = "0x181A0EB90")]
	internal void Set(int objectId, string name, int numMembers, string[] memberNames, int assemId)
	{
	}

	[Token(Token = "0x60020D7")]
	[Address(RVA = "0x1A0EBF0", Offset = "0x1A0D1F0", VA = "0x181A0EBF0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020D8")]
	[Address(RVA = "0x1A0EA80", Offset = "0x1A0D080", VA = "0x181A0EA80", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020D9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
