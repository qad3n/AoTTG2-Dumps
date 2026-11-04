// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000441")]
internal sealed class MemberPrimitiveUnTyped
{
	[Token(Token = "0x40010ED")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation;

	[Token(Token = "0x40010EE")]
	[FieldOffset(Offset = "0x18")]
	internal object value;

	[Token(Token = "0x60020E4")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal MemberPrimitiveUnTyped()
	{
	}

	[Token(Token = "0x60020E5")]
	[Address(RVA = "0x1A0C0F0", Offset = "0x1A0A6F0", VA = "0x181A0C0F0")]
	internal void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation, object value)
	{
	}

	[Token(Token = "0x60020E6")]
	[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
	internal void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation)
	{
	}

	[Token(Token = "0x60020E7")]
	[Address(RVA = "0x1A14E50", Offset = "0x1A13450", VA = "0x181A14E50", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020E8")]
	[Address(RVA = "0x1A14E10", Offset = "0x1A13410", VA = "0x181A14E10", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020E9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
