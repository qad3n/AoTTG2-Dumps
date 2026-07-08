using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002BD")]
internal abstract class ResetableIterator : XPathNodeIterator
{
	[Token(Token = "0x1700071E")]
	public abstract override int CurrentPosition
	{
		[Token(Token = "0x6001BBD")]
		get;
	}

	[Token(Token = "0x6001BB9")]
	[Address(RVA = "0x4447190", Offset = "0x4447190", VA = "0x4447190")]
	public ResetableIterator()
	{
	}

	[Token(Token = "0x6001BBA")]
	[Address(RVA = "0x44471E0", Offset = "0x44471E0", VA = "0x44471E0")]
	protected ResetableIterator(ResetableIterator other)
	{
	}

	[Token(Token = "0x6001BBB")]
	[Address(RVA = "0x4449500", Offset = "0x4449500", VA = "0x4449500")]
	protected void ResetCount()
	{
	}

	[Token(Token = "0x6001BBC")]
	public abstract void Reset();
}
