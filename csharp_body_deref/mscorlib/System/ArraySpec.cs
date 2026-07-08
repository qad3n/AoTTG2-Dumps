using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001AD")]
internal class ArraySpec : System.ModifierSpec
{
	[Token(Token = "0x40008AF")]
	[FieldOffset(Offset = "0x10")]
	private int dimensions;

	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x14")]
	private bool bound;

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x5035DA0", Offset = "0x5035DA0", VA = "0x5035DA0")]
	internal ArraySpec(int dimensions, bool bound)
	{
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x5035DB0", Offset = "0x5035DB0", VA = "0x5035DB0", Slot = "4")]
	public Type Resolve(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x5035E30", Offset = "0x5035E30", VA = "0x5035E30", Slot = "5")]
	public StringBuilder Append(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x5035ED0", Offset = "0x5035ED0", VA = "0x5035ED0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
