using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001CC")]
internal class XTextWrapper : XObjectWrapper
{
	[Token(Token = "0x17000288")]
	private XText Text
	{
		[Token(Token = "0x6000F72")]
		[Address(RVA = "0x3B55660", Offset = "0x3B55660", VA = "0x3B55660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public override string? Value
	{
		[Token(Token = "0x6000F74")]
		[Address(RVA = "0x3B556F0", Offset = "0x3B556F0", VA = "0x3B556F0", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F75")]
		[Address(RVA = "0x3B55760", Offset = "0x3B55760", VA = "0x3B55760", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700028A")]
	public override IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F76")]
		[Address(RVA = "0x3B55800", Offset = "0x3B55800", VA = "0x3B55800", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x3B556C0", Offset = "0x3B556C0", VA = "0x3B556C0")]
	public XTextWrapper(XText text)
	{
	}
}
