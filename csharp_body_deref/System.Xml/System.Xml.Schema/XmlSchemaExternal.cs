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
		[Address(RVA = "0x43E72D0", Offset = "0x43E72D0", VA = "0x43E72D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164B")]
		[Address(RVA = "0x43E72E0", Offset = "0x43E72E0", VA = "0x43E72E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700061D")]
	[XmlIgnore]
	public XmlSchema Schema
	{
		[Token(Token = "0x600164C")]
		[Address(RVA = "0x43E72F0", Offset = "0x43E72F0", VA = "0x43E72F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164D")]
		[Address(RVA = "0x43E7300", Offset = "0x43E7300", VA = "0x43E7300")]
		set
		{
		}
	}

	[Token(Token = "0x1700061E")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x600164E")]
		[Address(RVA = "0x43E7310", Offset = "0x43E7310", VA = "0x43E7310")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164F")]
		[Address(RVA = "0x43E7320", Offset = "0x43E7320", VA = "0x43E7320")]
		set
		{
		}
	}

	[Token(Token = "0x1700061F")]
	[XmlIgnore]
	internal Uri BaseUri
	{
		[Token(Token = "0x6001650")]
		[Address(RVA = "0x43E7330", Offset = "0x43E7330", VA = "0x43E7330")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001651")]
		[Address(RVA = "0x43E7340", Offset = "0x43E7340", VA = "0x43E7340")]
		set
		{
		}
	}

	[Token(Token = "0x17000620")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x6001652")]
		[Address(RVA = "0x43E7350", Offset = "0x43E7350", VA = "0x43E7350", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001653")]
		[Address(RVA = "0x43E7360", Offset = "0x43E7360", VA = "0x43E7360", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000621")]
	internal Compositor Compositor
	{
		[Token(Token = "0x6001655")]
		[Address(RVA = "0x43E7380", Offset = "0x43E7380", VA = "0x43E7380")]
		get
		{
			return default(Compositor);
		}
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x43E7390", Offset = "0x43E7390", VA = "0x43E7390")]
		set
		{
		}
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x43E7370", Offset = "0x43E7370", VA = "0x43E7370", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x43E73A0", Offset = "0x43E73A0", VA = "0x43E73A0")]
	protected XmlSchemaExternal()
	{
	}
}
