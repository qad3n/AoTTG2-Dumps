using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000215")]
public class XmlSchemaChoice : XmlSchemaGroupBase
{
	[Token(Token = "0x4000B2B")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaObjectCollection items;

	[Token(Token = "0x170005C1")]
	[XmlElement("any", typeof(XmlSchemaAny))]
	[XmlElement("group", typeof(XmlSchemaGroupRef))]
	[XmlElement("choice", typeof(XmlSchemaChoice))]
	[XmlElement("sequence", typeof(XmlSchemaSequence))]
	[XmlElement("element", typeof(XmlSchemaElement))]
	public override XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x6001576")]
		[Address(RVA = "0x43E2190", Offset = "0x43E2190", VA = "0x43E2190", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C2")]
	internal override bool IsEmpty
	{
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x43E21A0", Offset = "0x43E21A0", VA = "0x43E21A0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x43E21B0", Offset = "0x43E21B0", VA = "0x43E21B0", Slot = "17")]
	internal override void SetItems(XmlSchemaObjectCollection newItems)
	{
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x43E21C0", Offset = "0x43E21C0", VA = "0x43E21C0")]
	public XmlSchemaChoice()
	{
	}
}
