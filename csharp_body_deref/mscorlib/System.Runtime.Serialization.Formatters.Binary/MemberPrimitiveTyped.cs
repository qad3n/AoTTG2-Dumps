// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200043D")]
internal sealed class MemberPrimitiveTyped
{
	[Token(Token = "0x40010D3")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum;

	[Token(Token = "0x40010D4")]
	[FieldOffset(Offset = "0x18")]
	internal object value;

	[Token(Token = "0x60020CF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal MemberPrimitiveTyped()
	{
	}

	[Token(Token = "0x60020D0")]
	[Address(RVA = "0x1A0C0F0", Offset = "0x1A0A6F0", VA = "0x181A0C0F0")]
	internal void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, object value)
	{
	}

	[Token(Token = "0x60020D1")]
	[Address(RVA = "0x1A14DA0", Offset = "0x1A133A0", VA = "0x181A14DA0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020D2")]
	[Address(RVA = "0x1A14D50", Offset = "0x1A13350", VA = "0x181A14D50", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020D3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
