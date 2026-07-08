using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040B")]
internal sealed class BinaryObjectString
{
	[Token(Token = "0x40010CC")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010CD")]
	[FieldOffset(Offset = "0x18")]
	internal string value;

	[Token(Token = "0x6002055")]
	[Address(RVA = "0x4EBDE20", Offset = "0x4EBDE20", VA = "0x4EBDE20")]
	internal BinaryObjectString()
	{
	}

	[Token(Token = "0x6002056")]
	[Address(RVA = "0x4EBDE30", Offset = "0x4EBDE30", VA = "0x4EBDE30")]
	internal void Set(int objectId, string value)
	{
	}

	[Token(Token = "0x6002057")]
	[Address(RVA = "0x4EBDE50", Offset = "0x4EBDE50", VA = "0x4EBDE50", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002058")]
	[Address(RVA = "0x4EBDED0", Offset = "0x4EBDED0", VA = "0x4EBDED0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002059")]
	[Address(RVA = "0x4EBDF20", Offset = "0x4EBDF20", VA = "0x4EBDF20")]
	public void Dump()
	{
	}
}
