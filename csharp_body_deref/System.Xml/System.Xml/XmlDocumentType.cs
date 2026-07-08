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
		[Address(RVA = "0x4494350", Offset = "0x4494350", VA = "0x4494350", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000228")]
	public override string LocalName
	{
		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x4494360", Offset = "0x4494360", VA = "0x4494360", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000229")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008B2")]
		[Address(RVA = "0x4494370", Offset = "0x4494370", VA = "0x4494370", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700022A")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x44943D0", Offset = "0x44943D0", VA = "0x44943D0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700022B")]
	public XmlNamedNodeMap Entities
	{
		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x44943E0", Offset = "0x44943E0", VA = "0x44943E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022C")]
	public XmlNamedNodeMap Notations
	{
		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x44944A0", Offset = "0x44944A0", VA = "0x44944A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	public string PublicId
	{
		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x4494530", Offset = "0x4494530", VA = "0x4494530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022E")]
	public string SystemId
	{
		[Token(Token = "0x60008B8")]
		[Address(RVA = "0x4494540", Offset = "0x4494540", VA = "0x4494540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public string InternalSubset
	{
		[Token(Token = "0x60008B9")]
		[Address(RVA = "0x4494550", Offset = "0x4494550", VA = "0x4494550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	internal bool ParseWithNamespaces
	{
		[Token(Token = "0x60008BA")]
		[Address(RVA = "0x4494560", Offset = "0x4494560", VA = "0x4494560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000231")]
	internal SchemaInfo DtdSchemaInfo
	{
		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x44945C0", Offset = "0x44945C0", VA = "0x44945C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008BE")]
		[Address(RVA = "0x44945D0", Offset = "0x44945D0", VA = "0x44945D0")]
		set
		{
		}
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x4494180", Offset = "0x4494180", VA = "0x4494180")]
	protected internal XmlDocumentType(string name, string publicId, string systemId, string internalSubset, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x4494380", Offset = "0x4494380", VA = "0x4494380", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x4494570", Offset = "0x4494570", VA = "0x4494570", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x44945B0", Offset = "0x44945B0", VA = "0x44945B0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
