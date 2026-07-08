using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000420")]
internal sealed class TypeInformation
{
	[Token(Token = "0x400118A")]
	[FieldOffset(Offset = "0x10")]
	private string fullTypeName;

	[Token(Token = "0x400118B")]
	[FieldOffset(Offset = "0x18")]
	private string assemblyString;

	[Token(Token = "0x400118C")]
	[FieldOffset(Offset = "0x20")]
	private bool hasTypeForwardedFrom;

	[Token(Token = "0x1700044F")]
	internal string FullTypeName
	{
		[Token(Token = "0x600210C")]
		[Address(RVA = "0x4EC8340", Offset = "0x4EC8340", VA = "0x4EC8340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000450")]
	internal string AssemblyString
	{
		[Token(Token = "0x600210D")]
		[Address(RVA = "0x4EC8350", Offset = "0x4EC8350", VA = "0x4EC8350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000451")]
	internal bool HasTypeForwardedFrom
	{
		[Token(Token = "0x600210E")]
		[Address(RVA = "0x4EC8360", Offset = "0x4EC8360", VA = "0x4EC8360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600210F")]
	[Address(RVA = "0x4EC35C0", Offset = "0x4EC35C0", VA = "0x4EC35C0")]
	internal TypeInformation(string fullTypeName, string assemblyString, bool hasTypeForwardedFrom)
	{
	}
}
