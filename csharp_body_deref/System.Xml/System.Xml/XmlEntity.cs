using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A4")]
public class XmlEntity : XmlNode
{
	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x18")]
	private string publicId;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x20")]
	private string systemId;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x28")]
	private string notationName;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x30")]
	private string name;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x38")]
	private string unparsedReplacementStr;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x40")]
	private string baseURI;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x48")]
	private XmlLinkedNode lastChild;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x50")]
	private bool childrenFoliating;

	[Token(Token = "0x17000245")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x60008EF")]
		[Address(RVA = "0x44967D0", Offset = "0x44967D0", VA = "0x44967D0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000246")]
	public override string Name
	{
		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x44967E0", Offset = "0x44967E0", VA = "0x44967E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000247")]
	public override string LocalName
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x44967F0", Offset = "0x44967F0", VA = "0x44967F0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	public override string InnerText
	{
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x4496800", Offset = "0x4496800", VA = "0x4496800", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x4496810", Offset = "0x4496810", VA = "0x4496810", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000249")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008F4")]
		[Address(RVA = "0x4496870", Offset = "0x4496870", VA = "0x4496870", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024A")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008F5")]
		[Address(RVA = "0x4496880", Offset = "0x4496880", VA = "0x4496880", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008F6")]
		[Address(RVA = "0x4496A00", Offset = "0x4496A00", VA = "0x4496A00", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008F8")]
		[Address(RVA = "0x4496A40", Offset = "0x4496A40", VA = "0x4496A40", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700024C")]
	public string SystemId
	{
		[Token(Token = "0x60008F9")]
		[Address(RVA = "0x4496A50", Offset = "0x4496A50", VA = "0x4496A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024D")]
	public override string InnerXml
	{
		[Token(Token = "0x60008FA")]
		[Address(RVA = "0x4496A60", Offset = "0x4496A60", VA = "0x4496A60", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public override string BaseURI
	{
		[Token(Token = "0x60008FD")]
		[Address(RVA = "0x4496AE0", Offset = "0x4496AE0", VA = "0x4496AE0", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x4496610", Offset = "0x4496610", VA = "0x4496610")]
	internal XmlEntity(string name, string strdata, string publicId, string systemId, string notationName, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x4496770", Offset = "0x4496770", VA = "0x4496770", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x4496A10", Offset = "0x4496A10", VA = "0x4496A10", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x4496AC0", Offset = "0x4496AC0", VA = "0x4496AC0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x4496AD0", Offset = "0x4496AD0", VA = "0x4496AD0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x4496AF0", Offset = "0x4496AF0", VA = "0x4496AF0")]
	internal void SetBaseURI(string inBaseURI)
	{
	}
}
