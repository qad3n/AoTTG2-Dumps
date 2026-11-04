// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.MemberReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000442")]
internal sealed class MemberReference
{
	[Token(Token = "0x40010EF")]
	[FieldOffset(Offset = "0x10")]
	internal int idRef;

	[Token(Token = "0x60020EA")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal MemberReference()
	{
	}

	[Token(Token = "0x60020EB")]
	[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
	internal void Set(int idRef)
	{
	}

	[Token(Token = "0x60020EC")]
	[Address(RVA = "0x1A14E80", Offset = "0x1A13480", VA = "0x181A14E80", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020ED")]
	[Address(RVA = "0x1A0D1E0", Offset = "0x1A0B7E0", VA = "0x181A0D1E0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020EE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
