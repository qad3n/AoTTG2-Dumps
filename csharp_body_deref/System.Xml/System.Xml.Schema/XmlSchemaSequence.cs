// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSequence
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4728260", Offset = "0x4728260", VA = "0x4728260", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066A")]
	internal override bool IsEmpty
	{
		[Token(Token = "0x600171C")]
		[Address(RVA = "0x4728270", Offset = "0x4728270", VA = "0x4728270", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600171D")]
	[Address(RVA = "0x4728310", Offset = "0x4728310", VA = "0x4728310", Slot = "17")]
	internal override void SetItems(XmlSchemaObjectCollection newItems)
	{
	}

	[Token(Token = "0x600171E")]
	[Address(RVA = "0x4728320", Offset = "0x4728320", VA = "0x4728320")]
	public XmlSchemaSequence()
	{
	}
}
