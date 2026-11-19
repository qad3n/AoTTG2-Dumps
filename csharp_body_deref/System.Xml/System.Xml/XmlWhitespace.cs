// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlWhitespace
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000BB")]
public class XmlWhitespace : XmlCharacterData
{
	[Token(Token = "0x170002D7")]
	public override string Name
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x60E7990", Offset = "0x60E6990", VA = "0x60E7990", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D8")]
	public override string LocalName
	{
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x60E79C0", Offset = "0x60E69C0", VA = "0x60E79C0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D9")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x60E79F0", Offset = "0x60E69F0", VA = "0x60E79F0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002DA")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x60E7A00", Offset = "0x60E6A00", VA = "0x60E7A00", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DB")]
	public override string Value
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x60E7A80", Offset = "0x60E6A80", VA = "0x60E7A80", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x60E7AA0", Offset = "0x60E6AA0", VA = "0x60E7AA0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x60E7BE0", Offset = "0x60E6BE0", VA = "0x60E7BE0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170002DD")]
	internal override bool IsText
	{
		[Token(Token = "0x6000A65")]
		[Address(RVA = "0x60E7C00", Offset = "0x60E6C00", VA = "0x60E7C00", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DE")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x6000A66")]
		[Address(RVA = "0x60E7C10", Offset = "0x60E6C10", VA = "0x60E7C10", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x60DBB00", Offset = "0x60DAB00", VA = "0x60DBB00")]
	protected internal XmlWhitespace(string strData, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x60E7B30", Offset = "0x60E6B30", VA = "0x60E7B30", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x60E7B90", Offset = "0x60E6B90", VA = "0x60E7B90", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x60E7BD0", Offset = "0x60E6BD0", VA = "0x60E7BD0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
