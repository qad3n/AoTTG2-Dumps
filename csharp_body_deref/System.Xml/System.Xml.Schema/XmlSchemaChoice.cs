// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaChoice
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x471F8F0", Offset = "0x471F8F0", VA = "0x471F8F0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C2")]
	internal override bool IsEmpty
	{
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x471F900", Offset = "0x471F900", VA = "0x471F900", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x471F910", Offset = "0x471F910", VA = "0x471F910", Slot = "17")]
	internal override void SetItems(XmlSchemaObjectCollection newItems)
	{
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x471F920", Offset = "0x471F920", VA = "0x471F920")]
	public XmlSchemaChoice()
	{
	}
}
