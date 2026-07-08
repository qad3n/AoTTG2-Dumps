using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040E")]
internal sealed class MemberPrimitiveTyped
{
	[Token(Token = "0x40010D1")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum;

	[Token(Token = "0x40010D2")]
	[FieldOffset(Offset = "0x18")]
	internal object value;

	[Token(Token = "0x6002060")]
	[Address(RVA = "0x4EBDFD0", Offset = "0x4EBDFD0", VA = "0x4EBDFD0")]
	internal MemberPrimitiveTyped()
	{
	}

	[Token(Token = "0x6002061")]
	[Address(RVA = "0x4EBDFE0", Offset = "0x4EBDFE0", VA = "0x4EBDFE0")]
	internal void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, object value)
	{
	}

	[Token(Token = "0x6002062")]
	[Address(RVA = "0x4EBE000", Offset = "0x4EBE000", VA = "0x4EBE000", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002063")]
	[Address(RVA = "0x4EBE070", Offset = "0x4EBE070", VA = "0x4EBE070", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002064")]
	[Address(RVA = "0x4EBE0C0", Offset = "0x4EBE0C0", VA = "0x4EBE0C0")]
	public void Dump()
	{
	}
}
