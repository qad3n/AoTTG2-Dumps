using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000251")]
public class XmlSchemaSequence : XmlSchemaGroupBase
{
	[Token(Token = "0x4000BE3")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaObjectCollection items;

	[Token(Token = "0x17000669")]
	[XmlElement("element", typeof(XmlSchemaElement))]
	[XmlElement("choice", typeof(XmlSchemaChoice))]
	[XmlElement("sequence", typeof(XmlSchemaSequence))]
	[XmlElement("any", typeof(XmlSchemaAny))]
	[XmlElement("group", typeof(XmlSchemaGroupRef))]
	public override XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x600171B")]
		[Address(RVA = "0x43EAB00", Offset = "0x43EAB00", VA = "0x43EAB00", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066A")]
	internal override bool IsEmpty
	{
		[Token(Token = "0x600171C")]
		[Address(RVA = "0x43EAB10", Offset = "0x43EAB10", VA = "0x43EAB10", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600171D")]
	[Address(RVA = "0x43EABB0", Offset = "0x43EABB0", VA = "0x43EABB0", Slot = "17")]
	internal override void SetItems(XmlSchemaObjectCollection newItems)
	{
	}

	[Token(Token = "0x600171E")]
	[Address(RVA = "0x43EABC0", Offset = "0x43EABC0", VA = "0x43EABC0")]
	public XmlSchemaSequence()
	{
	}
}
