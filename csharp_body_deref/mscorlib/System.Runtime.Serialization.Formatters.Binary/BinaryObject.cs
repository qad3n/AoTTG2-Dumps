using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000408")]
internal sealed class BinaryObject
{
	[Token(Token = "0x40010BB")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010BC")]
	[FieldOffset(Offset = "0x14")]
	internal int mapId;

	[Token(Token = "0x6002049")]
	[Address(RVA = "0x4EBD7D0", Offset = "0x4EBD7D0", VA = "0x4EBD7D0")]
	internal BinaryObject()
	{
	}

	[Token(Token = "0x600204A")]
	[Address(RVA = "0x4EBD7E0", Offset = "0x4EBD7E0", VA = "0x4EBD7E0")]
	internal void Set(int objectId, int mapId)
	{
	}

	[Token(Token = "0x600204B")]
	[Address(RVA = "0x4EBD7F0", Offset = "0x4EBD7F0", VA = "0x4EBD7F0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600204C")]
	[Address(RVA = "0x4EBD870", Offset = "0x4EBD870", VA = "0x4EBD870", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600204D")]
	[Address(RVA = "0x4EBD8B0", Offset = "0x4EBD8B0", VA = "0x4EBD8B0")]
	public void Dump()
	{
	}
}
