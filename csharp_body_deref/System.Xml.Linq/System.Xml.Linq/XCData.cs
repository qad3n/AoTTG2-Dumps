using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000007")]
public class XCData : XText
{
	[Token(Token = "0x17000005")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x433C220", Offset = "0x433C220", VA = "0x433C220", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x433C100", Offset = "0x433C100", VA = "0x433C100")]
	public XCData(string value)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x433C190", Offset = "0x433C190", VA = "0x433C190")]
	public XCData(XCData other)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x433C230", Offset = "0x433C230", VA = "0x433C230", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x433C2A0", Offset = "0x433C2A0", VA = "0x433C2A0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
