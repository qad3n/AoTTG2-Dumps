using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x200000E")]
public class XDocumentType : XNode
{
	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x30")]
	private string _publicId;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x38")]
	private string _systemId;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x40")]
	private string _internalSubset;

	[Token(Token = "0x17000011")]
	public string InternalSubset
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x4342030", Offset = "0x4342030", VA = "0x4342030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public string Name
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x4342040", Offset = "0x4342040", VA = "0x4342040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x4342050", Offset = "0x4342050", VA = "0x4342050", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000014")]
	public string PublicId
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x4342060", Offset = "0x4342060", VA = "0x4342060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public string SystemId
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x4342070", Offset = "0x4342070", VA = "0x4342070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4340F80", Offset = "0x4340F80", VA = "0x4340F80")]
	public XDocumentType(string name, string publicId, string systemId, string internalSubset)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4341F80", Offset = "0x4341F80", VA = "0x4341F80")]
	public XDocumentType(XDocumentType other)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4342080", Offset = "0x4342080", VA = "0x4342080", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4342100", Offset = "0x4342100", VA = "0x4342100", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
