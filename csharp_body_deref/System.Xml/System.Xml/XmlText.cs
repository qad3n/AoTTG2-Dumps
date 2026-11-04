// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlText
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B9")]
public class XmlText : XmlCharacterData
{
	[Token(Token = "0x170002CD")]
	public override string Name
	{
		[Token(Token = "0x6000A43")]
		[Address(RVA = "0x273C1A0", Offset = "0x273A7A0", VA = "0x18273C1A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CE")]
	public override string LocalName
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x273C1A0", Offset = "0x273A7A0", VA = "0x18273C1A0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CF")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002D0")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x270E710", Offset = "0x270CD10", VA = "0x18270E710", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D1")]
	public override string Value
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x270E920", Offset = "0x270CF20", VA = "0x18270E920", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x273C1D0", Offset = "0x273A7D0", VA = "0x18273C1D0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002D2")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A4C")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170002D3")]
	internal override bool IsText
	{
		[Token(Token = "0x6000A4D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D4")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x270E7B0", Offset = "0x270CDB0", VA = "0x18270E7B0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x273C190", Offset = "0x273A790", VA = "0x18273C190")]
	internal XmlText(string strData)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x273C180", Offset = "0x273A780", VA = "0x18273C180")]
	protected internal XmlText(string strData, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x273C120", Offset = "0x273A720", VA = "0x18273C120", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x273BE90", Offset = "0x273A490", VA = "0x18273BE90", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
