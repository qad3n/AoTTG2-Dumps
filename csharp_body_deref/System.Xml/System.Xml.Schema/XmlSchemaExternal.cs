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
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164B")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700061D")]
	[XmlIgnore]
	public XmlSchema Schema
	{
		[Token(Token = "0x600164C")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164D")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x1700061E")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x600164E")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600164F")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700061F")]
	[XmlIgnore]
	internal Uri BaseUri
	{
		[Token(Token = "0x6001650")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001651")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x17000620")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x6001652")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001653")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000621")]
	internal Compositor Compositor
	{
		[Token(Token = "0x6001655")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		get
		{
			return default(Compositor);
		}
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
		set
		{
		}
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected XmlSchemaExternal()
	{
	}
}
