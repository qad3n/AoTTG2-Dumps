using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x200009D")]
public class Capture
{
	[Token(Token = "0x1700008C")]
	public int Index
	{
		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x45DC5A0", Offset = "0x45DC5A0", VA = "0x45DC5A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x45DC5B0", Offset = "0x45DC5B0", VA = "0x45DC5B0")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public int Length
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x45DC5C0", Offset = "0x45DC5C0", VA = "0x45DC5C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x45DC5D0", Offset = "0x45DC5D0", VA = "0x45DC5D0")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	internal string Text
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x45DC5E0", Offset = "0x45DC5E0", VA = "0x45DC5E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x45DC5F0", Offset = "0x45DC5F0", VA = "0x45DC5F0")]
		[CompilerGenerated]
		private protected set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	public string Value
	{
		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x45DC600", Offset = "0x45DC600", VA = "0x45DC600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x45DC560", Offset = "0x45DC560", VA = "0x45DC560")]
	internal Capture(string text, int index, int length)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x45DC620", Offset = "0x45DC620", VA = "0x45DC620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x45DC640", Offset = "0x45DC640", VA = "0x45DC640")]
	internal ReadOnlySpan<char> GetLeftSubstring()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x45DC6B0", Offset = "0x45DC6B0", VA = "0x45DC6B0")]
	internal ReadOnlySpan<char> GetRightSubstring()
	{
		return default(ReadOnlySpan<char>);
	}
}
