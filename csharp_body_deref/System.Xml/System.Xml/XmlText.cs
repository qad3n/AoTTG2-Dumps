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
		[Address(RVA = "0x60E74D0", Offset = "0x60E64D0", VA = "0x60E74D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CE")]
	public override string LocalName
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x60E7500", Offset = "0x60E6500", VA = "0x60E7500", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CF")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x60E7530", Offset = "0x60E6530", VA = "0x60E7530", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002D0")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x60E7540", Offset = "0x60E6540", VA = "0x60E7540", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D1")]
	public override string Value
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x60E7620", Offset = "0x60E6620", VA = "0x60E7620", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x60E7640", Offset = "0x60E6640", VA = "0x60E7640", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002D2")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A4C")]
		[Address(RVA = "0x60E7740", Offset = "0x60E6740", VA = "0x60E7740", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170002D3")]
	internal override bool IsText
	{
		[Token(Token = "0x6000A4D")]
		[Address(RVA = "0x60E7750", Offset = "0x60E6750", VA = "0x60E7750", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D4")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x60E7760", Offset = "0x60E6760", VA = "0x60E7760", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x60DA1B0", Offset = "0x60D91B0", VA = "0x60DA1B0")]
	internal XmlText(string strData)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x60DA1A0", Offset = "0x60D91A0", VA = "0x60DA1A0")]
	protected internal XmlText(string strData, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x60E75C0", Offset = "0x60E65C0", VA = "0x60E75C0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x60E76F0", Offset = "0x60E66F0", VA = "0x60E76F0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x60E7730", Offset = "0x60E6730", VA = "0x60E7730", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
