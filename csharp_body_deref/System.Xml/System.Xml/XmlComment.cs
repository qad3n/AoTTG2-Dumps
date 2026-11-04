// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlComment
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009E")]
public class XmlComment : XmlCharacterData
{
	[Token(Token = "0x170001F3")]
	public override string Name
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x270EE90", Offset = "0x270D490", VA = "0x18270EE90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	public override string LocalName
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x270EE90", Offset = "0x270D490", VA = "0x18270EE90", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F5")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001F6")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000825")]
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x270E6A0", Offset = "0x270CCA0", VA = "0x18270E6A0")]
	protected internal XmlComment(string comment, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x270EDF0", Offset = "0x270D3F0", VA = "0x18270EDF0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x270EE50", Offset = "0x270D450", VA = "0x18270EE50", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
