// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaExternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000227")]
public abstract class XmlSchemaExternal : XmlSchemaObject
{
	[Token(Token = "0x4000B85")]
	[FieldOffset(Offset = "0x38")]
	private string location;

	[Token(Token = "0x4000B86")]
	[FieldOffset(Offset = "0x40")]
	private Uri baseUri;

	[Token(Token = "0x4000B87")]
	[FieldOffset(Offset = "0x48")]
	private XmlSchema schema;

	[Token(Token = "0x4000B88")]
	[FieldOffset(Offset = "0x50")]
	private string id;

	[Token(Token = "0x4000B89")]
	[FieldOffset(Offset = "0x58")]
	private XmlAttribute[] moreAttributes;

	[Token(Token = "0x4000B8A")]
	[FieldOffset(Offset = "0x60")]
	private Compositor compositor;

	[Token(Token = "0x1700061C")]
	[XmlAttribute("schemaLocation", DataType = "anyURI")]
	public string SchemaLocation
	{
		[Token(Token = "0x600164A")]
		[Address(RVA = "0x4724A30", Offset = "0x4724A30", VA = "0x4724A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164B")]
		[Address(RVA = "0x4724A40", Offset = "0x4724A40", VA = "0x4724A40")]
		set
		{
		}
	}

	[Token(Token = "0x1700061D")]
	[XmlIgnore]
	public XmlSchema Schema
	{
		[Token(Token = "0x600164C")]
		[Address(RVA = "0x4724A50", Offset = "0x4724A50", VA = "0x4724A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164D")]
		[Address(RVA = "0x4724A60", Offset = "0x4724A60", VA = "0x4724A60")]
		set
		{
		}
	}

	[Token(Token = "0x1700061E")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x600164E")]
		[Address(RVA = "0x4724A70", Offset = "0x4724A70", VA = "0x4724A70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164F")]
		[Address(RVA = "0x4724A80", Offset = "0x4724A80", VA = "0x4724A80")]
		set
		{
		}
	}

	[Token(Token = "0x1700061F")]
	[XmlIgnore]
	internal Uri BaseUri
	{
		[Token(Token = "0x6001650")]
		[Address(RVA = "0x4724A90", Offset = "0x4724A90", VA = "0x4724A90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001651")]
		[Address(RVA = "0x4724AA0", Offset = "0x4724AA0", VA = "0x4724AA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000620")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x6001652")]
		[Address(RVA = "0x4724AB0", Offset = "0x4724AB0", VA = "0x4724AB0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001653")]
		[Address(RVA = "0x4724AC0", Offset = "0x4724AC0", VA = "0x4724AC0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000621")]
	internal Compositor Compositor
	{
		[Token(Token = "0x6001655")]
		[Address(RVA = "0x4724AE0", Offset = "0x4724AE0", VA = "0x4724AE0")]
		get
		{
			return default(Compositor);
		}
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x4724AF0", Offset = "0x4724AF0", VA = "0x4724AF0")]
		set
		{
		}
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x4724AD0", Offset = "0x4724AD0", VA = "0x4724AD0", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x4724B00", Offset = "0x4724B00", VA = "0x4724B00")]
	protected XmlSchemaExternal()
	{
	}
}
