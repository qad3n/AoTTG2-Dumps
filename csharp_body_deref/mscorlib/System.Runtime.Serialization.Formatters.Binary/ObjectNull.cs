// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectNull
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000443")]
internal sealed class ObjectNull
{
	[Token(Token = "0x40010F0")]
	[FieldOffset(Offset = "0x10")]
	internal int nullCount;

	[Token(Token = "0x60020EF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal ObjectNull()
	{
	}

	[Token(Token = "0x60020F0")]
	[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
	internal void SetNullCount(int nullCount)
	{
	}

	[Token(Token = "0x60020F1")]
	[Address(RVA = "0x1A1B510", Offset = "0x1A19B10", VA = "0x181A1B510", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020F2")]
	[Address(RVA = "0x1A1B4A0", Offset = "0x1A19AA0", VA = "0x181A1B4A0")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60020F3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
