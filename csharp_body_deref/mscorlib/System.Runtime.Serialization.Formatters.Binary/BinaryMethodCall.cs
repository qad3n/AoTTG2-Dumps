using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000409")]
internal sealed class BinaryMethodCall
{
	[Token(Token = "0x40010BD")]
	[FieldOffset(Offset = "0x10")]
	private string methodName;

	[Token(Token = "0x40010BE")]
	[FieldOffset(Offset = "0x18")]
	private string typeName;

	[Token(Token = "0x40010BF")]
	[FieldOffset(Offset = "0x20")]
	private object[] args;

	[Token(Token = "0x40010C0")]
	[FieldOffset(Offset = "0x28")]
	private object callContext;

	[Token(Token = "0x40010C1")]
	[FieldOffset(Offset = "0x30")]
	private Type[] argTypes;

	[Token(Token = "0x40010C2")]
	[FieldOffset(Offset = "0x38")]
	private bool bArgsPrimitive;

	[Token(Token = "0x40010C3")]
	[FieldOffset(Offset = "0x3C")]
	private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum;

	[Token(Token = "0x600204E")]
	[Address(RVA = "0x4EBD8C0", Offset = "0x4EBD8C0", VA = "0x4EBD8C0")]
	internal void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600204F")]
	[Address(RVA = "0x4EBDB70", Offset = "0x4EBDB70", VA = "0x4EBDB70")]
	internal void Dump()
	{
	}

	[Token(Token = "0x6002050")]
	[Address(RVA = "0x4EBDB80", Offset = "0x4EBDB80", VA = "0x4EBDB80")]
	public BinaryMethodCall()
	{
	}
}
