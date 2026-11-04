// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlCDataSection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009A")]
public class XmlCDataSection : XmlCharacterData
{
	[Token(Token = "0x170001E6")]
	public override string Name
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x270E6E0", Offset = "0x270CCE0", VA = "0x18270E6E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E7")]
	public override string LocalName
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x270E6E0", Offset = "0x270CCE0", VA = "0x18270E6E0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E8")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001E9")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x270E710", Offset = "0x270CD10", VA = "0x18270E710", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EA")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001EB")]
	internal override bool IsText
	{
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x270E7B0", Offset = "0x270CDB0", VA = "0x18270E7B0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x270E6A0", Offset = "0x270CCA0", VA = "0x18270E6A0")]
	protected internal XmlCDataSection(string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x270E600", Offset = "0x270CC00", VA = "0x18270E600", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x270E660", Offset = "0x270CC60", VA = "0x18270E660", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
