using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000414")]
internal sealed class ObjectNull
{
	[Token(Token = "0x40010EE")]
	[FieldOffset(Offset = "0x10")]
	internal int nullCount;

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x4EBF360", Offset = "0x4EBF360", VA = "0x4EBF360")]
	internal ObjectNull()
	{
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x4EBF370", Offset = "0x4EBF370", VA = "0x4EBF370")]
	internal void SetNullCount(int nullCount)
	{
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x4EBF380", Offset = "0x4EBF380", VA = "0x4EBF380", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x4EBF470", Offset = "0x4EBF470", VA = "0x4EBF470")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x4EBF4C0", Offset = "0x4EBF4C0", VA = "0x4EBF4C0")]
	public void Dump()
	{
	}
}
