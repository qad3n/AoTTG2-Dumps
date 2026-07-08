using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040D")]
internal sealed class BinaryCrossAppDomainMap
{
	[Token(Token = "0x40010D0")]
	[FieldOffset(Offset = "0x10")]
	internal int crossAppDomainArrayIndex;

	[Token(Token = "0x600205D")]
	[Address(RVA = "0x4EBDF90", Offset = "0x4EBDF90", VA = "0x4EBDF90")]
	internal BinaryCrossAppDomainMap()
	{
	}

	[Token(Token = "0x600205E")]
	[Address(RVA = "0x4EBDFA0", Offset = "0x4EBDFA0", VA = "0x4EBDFA0", Slot = "4")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600205F")]
	[Address(RVA = "0x4EBDFC0", Offset = "0x4EBDFC0", VA = "0x4EBDFC0")]
	public void Dump()
	{
	}
}
