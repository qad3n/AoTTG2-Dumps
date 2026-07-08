using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000113")]
internal sealed class TypeMember
{
	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x10")]
	private Type type;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x18")]
	private string member;

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x44CF720", Offset = "0x44CF720", VA = "0x44CF720")]
	internal TypeMember(Type type, string member)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x44CF760", Offset = "0x44CF760", VA = "0x44CF760", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x44CF7B0", Offset = "0x44CF7B0", VA = "0x44CF7B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x44CF860", Offset = "0x44CF860", VA = "0x44CF860")]
	public static bool Equals(TypeMember tm1, TypeMember tm2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x44CF8E0", Offset = "0x44CF8E0", VA = "0x44CF8E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
