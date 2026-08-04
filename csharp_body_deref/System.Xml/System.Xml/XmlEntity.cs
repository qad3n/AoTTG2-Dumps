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
		[Address(RVA = "0x47D3F30", Offset = "0x47D3F30", VA = "0x47D3F30", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000246")]
	public override string Name
	{
		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x47D3F40", Offset = "0x47D3F40", VA = "0x47D3F40", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000247")]
	public override string LocalName
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x47D3F50", Offset = "0x47D3F50", VA = "0x47D3F50", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	public override string InnerText
	{
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x47D3F60", Offset = "0x47D3F60", VA = "0x47D3F60", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x47D3F70", Offset = "0x47D3F70", VA = "0x47D3F70", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000249")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008F4")]
		[Address(RVA = "0x47D3FD0", Offset = "0x47D3FD0", VA = "0x47D3FD0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024A")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008F5")]
		[Address(RVA = "0x47D3FE0", Offset = "0x47D3FE0", VA = "0x47D3FE0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008F6")]
		[Address(RVA = "0x47D4160", Offset = "0x47D4160", VA = "0x47D4160", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008F8")]
		[Address(RVA = "0x47D41A0", Offset = "0x47D41A0", VA = "0x47D41A0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x1700024C")]
	public string SystemId
	{
		[Token(Token = "0x60008F9")]
		[Address(RVA = "0x47D41B0", Offset = "0x47D41B0", VA = "0x47D41B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024D")]
	public override string InnerXml
	{
		[Token(Token = "0x60008FA")]
		[Address(RVA = "0x47D41C0", Offset = "0x47D41C0", VA = "0x47D41C0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public override string BaseURI
	{
		[Token(Token = "0x60008FD")]
		[Address(RVA = "0x47D4240", Offset = "0x47D4240", VA = "0x47D4240", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x47D3D70", Offset = "0x47D3D70", VA = "0x47D3D70")]
	internal XmlEntity(string name, string strdata, string publicId, string systemId, string notationName, XmlDocument doc)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x47D3ED0", Offset = "0x47D3ED0", VA = "0x47D3ED0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x47D4170", Offset = "0x47D4170", VA = "0x47D4170", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x47D4220", Offset = "0x47D4220", VA = "0x47D4220", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x47D4230", Offset = "0x47D4230", VA = "0x47D4230", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x47D4250", Offset = "0x47D4250", VA = "0x47D4250")]
	internal void SetBaseURI(string inBaseURI)
	{
	}
}
