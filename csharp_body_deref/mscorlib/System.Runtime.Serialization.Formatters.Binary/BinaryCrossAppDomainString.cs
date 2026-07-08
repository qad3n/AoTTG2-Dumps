using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040C")]
internal sealed class BinaryCrossAppDomainString
{
	[Token(Token = "0x40010CE")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010CF")]
	[FieldOffset(Offset = "0x14")]
	internal int value;

	[Token(Token = "0x600205A")]
	[Address(RVA = "0x4EBDF30", Offset = "0x4EBDF30", VA = "0x4EBDF30")]
	internal BinaryCrossAppDomainString()
	{
	}

	[Token(Token = "0x600205B")]
	[Address(RVA = "0x4EBDF40", Offset = "0x4EBDF40", VA = "0x4EBDF40", Slot = "4")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600205C")]
	[Address(RVA = "0x4EBDF80", Offset = "0x4EBDF80", VA = "0x4EBDF80")]
	public void Dump()
	{
	}
}
