using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000412")]
internal sealed class MemberPrimitiveUnTyped
{
	[Token(Token = "0x40010EB")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation;

	[Token(Token = "0x40010EC")]
	[FieldOffset(Offset = "0x18")]
	internal object value;

	[Token(Token = "0x6002075")]
	[Address(RVA = "0x4EBF200", Offset = "0x4EBF200", VA = "0x4EBF200")]
	internal MemberPrimitiveUnTyped()
	{
	}

	[Token(Token = "0x6002076")]
	[Address(RVA = "0x4EBF210", Offset = "0x4EBF210", VA = "0x4EBF210")]
	internal void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation, object value)
	{
	}

	[Token(Token = "0x6002077")]
	[Address(RVA = "0x4EBF230", Offset = "0x4EBF230", VA = "0x4EBF230")]
	internal void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE typeInformation)
	{
	}

	[Token(Token = "0x6002078")]
	[Address(RVA = "0x4EBF240", Offset = "0x4EBF240", VA = "0x4EBF240", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002079")]
	[Address(RVA = "0x4EBF260", Offset = "0x4EBF260", VA = "0x4EBF260", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600207A")]
	[Address(RVA = "0x4EBF2A0", Offset = "0x4EBF2A0", VA = "0x4EBF2A0")]
	public void Dump()
	{
	}
}
