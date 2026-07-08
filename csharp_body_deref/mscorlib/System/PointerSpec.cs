using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001AE")]
internal class PointerSpec : System.ModifierSpec
{
	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x10")]
	private int pointer_level;

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x5035F50", Offset = "0x5035F50", VA = "0x5035F50")]
	internal PointerSpec(int pointer_level)
	{
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x5035F60", Offset = "0x5035F60", VA = "0x5035F60", Slot = "4")]
	public Type Resolve(Type type)
	{
		return null;
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x5035FB0", Offset = "0x5035FB0", VA = "0x5035FB0", Slot = "5")]
	public StringBuilder Append(StringBuilder sb)
	{
		return null;
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x5035FD0", Offset = "0x5035FD0", VA = "0x5035FD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
