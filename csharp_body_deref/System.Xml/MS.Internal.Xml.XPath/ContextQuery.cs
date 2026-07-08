using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000296")]
internal class ContextQuery : Query
{
	[Token(Token = "0x4000E1C")]
	[FieldOffset(Offset = "0x18")]
	protected XPathNavigator contextNode;

	[Token(Token = "0x170006E8")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001AB8")]
		[Address(RVA = "0x443C740", Offset = "0x443C740", VA = "0x443C740", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E9")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001ABC")]
		[Address(RVA = "0x443C820", Offset = "0x443C820", VA = "0x443C820", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006EA")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001ABD")]
		[Address(RVA = "0x443C830", Offset = "0x443C830", VA = "0x443C830", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EB")]
	public override int Count
	{
		[Token(Token = "0x6001ABE")]
		[Address(RVA = "0x443C840", Offset = "0x443C840", VA = "0x443C840", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EC")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001ABF")]
		[Address(RVA = "0x443C850", Offset = "0x443C850", VA = "0x443C850", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001AB5")]
	[Address(RVA = "0x443A0A0", Offset = "0x443A0A0", VA = "0x443A0A0")]
	public ContextQuery()
	{
	}

	[Token(Token = "0x6001AB6")]
	[Address(RVA = "0x443A100", Offset = "0x443A100", VA = "0x443A100")]
	protected ContextQuery(ContextQuery other)
	{
	}

	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x443C730", Offset = "0x443C730", VA = "0x443C730", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x443C750", Offset = "0x443C750", VA = "0x443C750", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x443C790", Offset = "0x443C790", VA = "0x443C790", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x443C7B0", Offset = "0x443C7B0", VA = "0x443C7B0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
