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
		[Address(RVA = "0x602CB70", Offset = "0x602BB70", VA = "0x602CB70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164B")]
		[Address(RVA = "0x602CB80", Offset = "0x602BB80", VA = "0x602CB80")]
		set
		{
		}
	}

	[Token(Token = "0x1700061D")]
	[XmlIgnore]
	public XmlSchema Schema
	{
		[Token(Token = "0x600164C")]
		[Address(RVA = "0x602CB90", Offset = "0x602BB90", VA = "0x602CB90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164D")]
		[Address(RVA = "0x602CBA0", Offset = "0x602BBA0", VA = "0x602CBA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700061E")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x600164E")]
		[Address(RVA = "0x602CBB0", Offset = "0x602BBB0", VA = "0x602CBB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164F")]
		[Address(RVA = "0x602CBC0", Offset = "0x602BBC0", VA = "0x602CBC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700061F")]
	[XmlIgnore]
	internal Uri BaseUri
	{
		[Token(Token = "0x6001650")]
		[Address(RVA = "0x602CBD0", Offset = "0x602BBD0", VA = "0x602CBD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001651")]
		[Address(RVA = "0x602CBE0", Offset = "0x602BBE0", VA = "0x602CBE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000620")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x6001652")]
		[Address(RVA = "0x602CBF0", Offset = "0x602BBF0", VA = "0x602CBF0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001653")]
		[Address(RVA = "0x602CC00", Offset = "0x602BC00", VA = "0x602CC00", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000621")]
	internal Compositor Compositor
	{
		[Token(Token = "0x6001655")]
		[Address(RVA = "0x602CC20", Offset = "0x602BC20", VA = "0x602CC20")]
		get
		{
			return default(Compositor);
		}
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x602CC30", Offset = "0x602BC30", VA = "0x602CC30")]
		set
		{
		}
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x602CC10", Offset = "0x602BC10", VA = "0x602CC10", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x602CC40", Offset = "0x602BC40", VA = "0x602CC40")]
	protected XmlSchemaExternal()
	{
	}
}
