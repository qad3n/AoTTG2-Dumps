// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAnnotated
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200020D")]
public class XmlSchemaAnnotated : XmlSchemaObject
{
	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0x38")]
	private string id;

	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0x40")]
	private XmlSchemaAnnotation annotation;

	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x48")]
	private XmlAttribute[] moreAttributes;

	[Token(Token = "0x17000596")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x6001518")]
		[Address(RVA = "0x6026090", Offset = "0x6025090", VA = "0x6026090")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001519")]
		[Address(RVA = "0x60260A0", Offset = "0x60250A0", VA = "0x60260A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000597")]
	[XmlElement("annotation", typeof(XmlSchemaAnnotation))]
	public XmlSchemaAnnotation Annotation
	{
		[Token(Token = "0x600151A")]
		[Address(RVA = "0x60260B0", Offset = "0x60250B0", VA = "0x60260B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151B")]
		[Address(RVA = "0x60260C0", Offset = "0x60250C0", VA = "0x60260C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000598")]
	[XmlAnyAttribute]
	public XmlAttribute[] UnhandledAttributes
	{
		[Token(Token = "0x600151C")]
		[Address(RVA = "0x60260D0", Offset = "0x60250D0", VA = "0x60260D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151D")]
		[Address(RVA = "0x60260E0", Offset = "0x60250E0", VA = "0x60260E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000599")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x600151E")]
		[Address(RVA = "0x60260F0", Offset = "0x60250F0", VA = "0x60260F0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151F")]
		[Address(RVA = "0x6026100", Offset = "0x6025100", VA = "0x6026100", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x6026110", Offset = "0x6025110", VA = "0x6026110", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x6026120", Offset = "0x6025120", VA = "0x6026120", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x6001522")]
	[Address(RVA = "0x6026130", Offset = "0x6025130", VA = "0x6026130")]
	public XmlSchemaAnnotated()
	{
	}
}
