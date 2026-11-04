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
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C2")]
	internal override bool IsEmpty
	{
		[Token(Token = "0x6001577")]
		[Address(RVA = "0x26666F0", Offset = "0x2664CF0", VA = "0x1826666F0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001578")]
	[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690", Slot = "17")]
	internal override void SetItems(XmlSchemaObjectCollection newItems)
	{
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x2666650", Offset = "0x2664C50", VA = "0x182666650")]
	public XmlSchemaChoice()
	{
	}
}
