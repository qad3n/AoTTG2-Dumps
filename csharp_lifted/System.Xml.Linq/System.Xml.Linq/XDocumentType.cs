// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XDocumentType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5FA42C0", Offset = "0x5FA32C0", VA = "0x5FA42C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public string Name
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x5FA42D0", Offset = "0x5FA32D0", VA = "0x5FA42D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x5FA42E0", Offset = "0x5FA32E0", VA = "0x5FA42E0", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000014")]
	public string PublicId
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x5FA42F0", Offset = "0x5FA32F0", VA = "0x5FA42F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public string SystemId
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x5FA4300", Offset = "0x5FA3300", VA = "0x5FA4300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x5FA3230", Offset = "0x5FA2230", VA = "0x5FA3230")]
	public XDocumentType(string name, string publicId, string systemId, string internalSubset)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x5FA4210", Offset = "0x5FA3210", VA = "0x5FA4210")]
	public XDocumentType(XDocumentType other)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x5FA4310", Offset = "0x5FA3310", VA = "0x5FA4310", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x5FA4390", Offset = "0x5FA3390", VA = "0x5FA4390", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
