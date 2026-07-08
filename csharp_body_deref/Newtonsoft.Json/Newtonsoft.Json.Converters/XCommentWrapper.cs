using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001CD")]
internal class XCommentWrapper : XObjectWrapper
{
	[Token(Token = "0x1700028B")]
	private XComment Text
	{
		[Token(Token = "0x6000F77")]
		[Address(RVA = "0x3B55BD0", Offset = "0x3B55BD0", VA = "0x3B55BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	public override string? Value
	{
		[Token(Token = "0x6000F79")]
		[Address(RVA = "0x3B55C60", Offset = "0x3B55C60", VA = "0x3B55C60", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F7A")]
		[Address(RVA = "0x3B55CD0", Offset = "0x3B55CD0", VA = "0x3B55CD0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700028D")]
	public override IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F7B")]
		[Address(RVA = "0x3B55D70", Offset = "0x3B55D70", VA = "0x3B55D70", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x3B55C30", Offset = "0x3B55C30", VA = "0x3B55C30")]
	public XCommentWrapper(XComment text)
	{
	}
}
