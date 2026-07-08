using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040A")]
internal sealed class BinaryMethodReturn
{
	[Token(Token = "0x40010C4")]
	[FieldOffset(Offset = "0x10")]
	private object returnValue;

	[Token(Token = "0x40010C5")]
	[FieldOffset(Offset = "0x18")]
	private object[] args;

	[Token(Token = "0x40010C6")]
	[FieldOffset(Offset = "0x20")]
	private object callContext;

	[Token(Token = "0x40010C7")]
	[FieldOffset(Offset = "0x28")]
	private Type[] argTypes;

	[Token(Token = "0x40010C8")]
	[FieldOffset(Offset = "0x30")]
	private bool bArgsPrimitive;

	[Token(Token = "0x40010C9")]
	[FieldOffset(Offset = "0x34")]
	private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum;

	[Token(Token = "0x40010CA")]
	[FieldOffset(Offset = "0x38")]
	private Type returnType;

	[Token(Token = "0x40010CB")]
	[FieldOffset(Offset = "0x0")]
	private static object instanceOfVoid;

	[Token(Token = "0x6002051")]
	[Address(RVA = "0x4EBDB90", Offset = "0x4EBDB90", VA = "0x4EBDB90")]
	static BinaryMethodReturn()
	{
	}

	[Token(Token = "0x6002052")]
	[Address(RVA = "0x4EBDC40", Offset = "0x4EBDC40", VA = "0x4EBDC40")]
	internal BinaryMethodReturn()
	{
	}

	[Token(Token = "0x6002053")]
	[Address(RVA = "0x4EBDC50", Offset = "0x4EBDC50", VA = "0x4EBDC50", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002054")]
	[Address(RVA = "0x4EBDE10", Offset = "0x4EBDE10", VA = "0x4EBDE10")]
	public void Dump()
	{
	}
}
