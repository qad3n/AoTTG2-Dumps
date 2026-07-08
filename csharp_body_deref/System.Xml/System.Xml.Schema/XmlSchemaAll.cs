using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200020C")]
public class XmlSchemaAll : XmlSchemaGroupBase
{
	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaObjectCollection items;

	[Token(Token = "0x17000594")]
	[XmlElement("element", typeof(XmlSchemaElement))]
	public override XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x6001514")]
		[Address(RVA = "0x43E0590", Offset = "0x43E0590", VA = "0x43E0590", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000595")]
	internal override bool IsEmpty
	{
		[Token(Token = "0x6001515")]
		[Address(RVA = "0x43E05A0", Offset = "0x43E05A0", VA = "0x43E05A0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x43E05D0", Offset = "0x43E05D0", VA = "0x43E05D0", Slot = "17")]
	internal override void SetItems(XmlSchemaObjectCollection newItems)
	{
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x43E05E0", Offset = "0x43E05E0", VA = "0x43E05E0")]
	public XmlSchemaAll()
	{
	}
}
