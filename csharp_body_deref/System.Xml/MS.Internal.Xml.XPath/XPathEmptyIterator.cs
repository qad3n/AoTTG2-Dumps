using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002CA")]
internal sealed class XPathEmptyIterator : ResetableIterator
{
	[Token(Token = "0x4000EB0")]
	[FieldOffset(Offset = "0x0")]
	public static XPathEmptyIterator Instance;

	[Token(Token = "0x17000737")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C1A")]
		[Address(RVA = "0x444D1E0", Offset = "0x444D1E0", VA = "0x444D1E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000738")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C1B")]
		[Address(RVA = "0x444D1F0", Offset = "0x444D1F0", VA = "0x444D1F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000739")]
	public override int Count
	{
		[Token(Token = "0x6001C1C")]
		[Address(RVA = "0x444D200", Offset = "0x444D200", VA = "0x444D200", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x444D1B0", Offset = "0x444D1B0", VA = "0x444D1B0")]
	private XPathEmptyIterator()
	{
	}

	[Token(Token = "0x6001C19")]
	[Address(RVA = "0x444D1D0", Offset = "0x444D1D0", VA = "0x444D1D0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C1D")]
	[Address(RVA = "0x444D210", Offset = "0x444D210", VA = "0x444D210", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C1E")]
	[Address(RVA = "0x444D220", Offset = "0x444D220", VA = "0x444D220", Slot = "12")]
	public override void Reset()
	{
	}
}
