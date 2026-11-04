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
		[Address(RVA = "0x273C5F0", Offset = "0x273ABF0", VA = "0x18273C5F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D8")]
	public override string LocalName
	{
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x273C5F0", Offset = "0x273ABF0", VA = "0x18273C5F0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D9")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x1B49610", Offset = "0x1B47C10", VA = "0x181B49610", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002DA")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x273BFB0", Offset = "0x273A5B0", VA = "0x18273BFB0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DB")]
	public override string Value
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x270E920", Offset = "0x270CF20", VA = "0x18270E920", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x273C650", Offset = "0x273AC50", VA = "0x18273C650", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x273C620", Offset = "0x273AC20", VA = "0x18273C620", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170002DD")]
	internal override bool IsText
	{
		[Token(Token = "0x6000A65")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DE")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x6000A66")]
		[Address(RVA = "0x270E7B0", Offset = "0x270CDB0", VA = "0x18270E7B0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x273C540", Offset = "0x273AB40", VA = "0x18273C540")]
	protected internal XmlWhitespace(string strData, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x273C4A0", Offset = "0x273AAA0", VA = "0x18273C4A0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x273C500", Offset = "0x273AB00", VA = "0x18273C500", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
