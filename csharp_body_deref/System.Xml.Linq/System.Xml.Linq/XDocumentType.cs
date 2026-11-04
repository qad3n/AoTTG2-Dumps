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
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public string Name
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000014")]
	public string PublicId
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public string SystemId
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x25E8CB0", Offset = "0x25E72B0", VA = "0x1825E8CB0")]
	public XDocumentType(string name, string publicId, string systemId, string internalSubset)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x25E8BF0", Offset = "0x25E71F0", VA = "0x1825E8BF0")]
	public XDocumentType(XDocumentType other)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x25E8B50", Offset = "0x25E7150", VA = "0x1825E8B50", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x25E8A60", Offset = "0x25E7060", VA = "0x1825E8A60", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}
}
