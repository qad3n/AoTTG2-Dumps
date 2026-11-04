// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlDocumentType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A2")]
public class XmlDocumentType : XmlLinkedNode
{
	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x20")]
	private string name;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x28")]
	private string publicId;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x30")]
	private string systemId;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x38")]
	private string internalSubset;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x40")]
	private bool namespaces;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x48")]
	private XmlNamedNodeMap entities;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x50")]
	private XmlNamedNodeMap notations;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x58")]
	private SchemaInfo schemaInfo;

	[Token(Token = "0x17000227")]
	public override string Name
	{
		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000228")]
	public override string LocalName
	{
		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000229")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008B2")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700022A")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700022B")]
	public XmlNamedNodeMap Entities
	{
		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x272A3F0", Offset = "0x27289F0", VA = "0x18272A3F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	public XmlNamedNodeMap Notations
	{
		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x272A470", Offset = "0x2728A70", VA = "0x18272A470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	public string PublicId
	{
		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022E")]
	public string SystemId
	{
		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public string InternalSubset
	{
		[Token(Token = "0x60008B9")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	internal bool ParseWithNamespaces
	{
		[Token(Token = "0x60008BA")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000231")]
	internal SchemaInfo DtdSchemaInfo
	{
		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008BE")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x272A240", Offset = "0x2728840", VA = "0x18272A240")]
	protected internal XmlDocumentType(string name, string publicId, string systemId, string internalSubset, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x272A190", Offset = "0x2728790", VA = "0x18272A190", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x272A1F0", Offset = "0x27287F0", VA = "0x18272A1F0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
