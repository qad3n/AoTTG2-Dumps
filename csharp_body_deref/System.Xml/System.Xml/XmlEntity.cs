// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlEntity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000246")]
	public override string Name
	{
		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000247")]
	public override string LocalName
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	public override string InnerText
	{
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x272B980", Offset = "0x2729F80", VA = "0x18272B980", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x272C8B0", Offset = "0x272AEB0", VA = "0x18272C8B0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000249")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008F4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024A")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008F5")]
		[Address(RVA = "0x272C7B0", Offset = "0x272ADB0", VA = "0x18272C7B0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008F6")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008F8")]
		[Address(RVA = "0x868060", Offset = "0x866660", VA = "0x180868060", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700024C")]
	public string SystemId
	{
		[Token(Token = "0x60008F9")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024D")]
	public override string InnerXml
	{
		[Token(Token = "0x60008FA")]
		[Address(RVA = "0x272C910", Offset = "0x272AF10", VA = "0x18272C910", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public override string BaseURI
	{
		[Token(Token = "0x60008FD")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x272C680", Offset = "0x272AC80", VA = "0x18272C680")]
	internal XmlEntity(string name, string strdata, string publicId, string systemId, string notationName, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x272C600", Offset = "0x272AC00", VA = "0x18272C600", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x272C660", Offset = "0x272AC60", VA = "0x18272C660", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
	internal void SetBaseURI(string inBaseURI)
	{
	}
}
