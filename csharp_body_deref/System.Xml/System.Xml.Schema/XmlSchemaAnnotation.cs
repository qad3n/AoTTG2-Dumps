// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAnnotation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200020E")]
public class XmlSchemaAnnotation : XmlSchemaObject
{
	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x38")]
	private string id;

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x40")]
	private XmlSchemaObjectCollection items;

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x48")]
	private XmlAttribute[] moreAttributes;

	[Token(Token = "0x1700059A")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x6001523")]
		[Address(RVA = "0x471DF00", Offset = "0x471DF00", VA = "0x471DF00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001524")]
		[Address(RVA = "0x471DF10", Offset = "0x471DF10", VA = "0x471DF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700059B")]
	[XmlElement("documentation", typeof(XmlSchemaDocumentation))]
	[XmlElement("appinfo", typeof(XmlSchemaAppInfo))]
	public XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x6001525")]
		[Address(RVA = "0x471DF20", Offset = "0x471DF20", VA = "0x471DF20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700059C")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x6001526")]
		[Address(RVA = "0x471DF30", Offset = "0x471DF30", VA = "0x471DF30", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001527")]
		[Address(RVA = "0x471DF40", Offset = "0x471DF40", VA = "0x471DF40", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0x471DF50", Offset = "0x471DF50", VA = "0x471DF50", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001529")]
	[Address(RVA = "0x471DF60", Offset = "0x471DF60", VA = "0x471DF60")]
	public XmlSchemaAnnotation()
	{
	}
}
