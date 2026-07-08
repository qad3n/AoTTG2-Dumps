using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000413")]
internal sealed class MemberReference
{
	[Token(Token = "0x40010ED")]
	[FieldOffset(Offset = "0x10")]
	internal int idRef;

	[Token(Token = "0x600207B")]
	[Address(RVA = "0x4EBF2B0", Offset = "0x4EBF2B0", VA = "0x4EBF2B0")]
	internal MemberReference()
	{
	}

	[Token(Token = "0x600207C")]
	[Address(RVA = "0x4EBF2C0", Offset = "0x4EBF2C0", VA = "0x4EBF2C0")]
	internal void Set(int idRef)
	{
	}

	[Token(Token = "0x600207D")]
	[Address(RVA = "0x4EBF2D0", Offset = "0x4EBF2D0", VA = "0x4EBF2D0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600207E")]
	[Address(RVA = "0x4EBF330", Offset = "0x4EBF330", VA = "0x4EBF330", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x600207F")]
	[Address(RVA = "0x4EBF350", Offset = "0x4EBF350", VA = "0x4EBF350")]
	public void Dump()
	{
	}
}
