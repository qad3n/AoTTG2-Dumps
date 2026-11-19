// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlProcessingInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B7")]
public class XmlProcessingInstruction : XmlLinkedNode
{
	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x20")]
	private string target;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x28")]
	private string data;

	[Token(Token = "0x170002BD")]
	public override string Name
	{
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x60E6EB0", Offset = "0x60E5EB0", VA = "0x60E6EB0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BE")]
	public override string LocalName
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x60E6EE0", Offset = "0x60E5EE0", VA = "0x60E6EE0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BF")]
	public override string Value
	{
		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x60E6F00", Offset = "0x60E5F00", VA = "0x60E6F00", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x60E6F10", Offset = "0x60E5F10", VA = "0x60E6F10", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002C0")]
	public string Data
	{
		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x60E6FD0", Offset = "0x60E5FD0", VA = "0x60E6FD0")]
		set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	public override string InnerText
	{
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x60E7090", Offset = "0x60E6090", VA = "0x60E7090", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2D")]
		[Address(RVA = "0x60E70A0", Offset = "0x60E60A0", VA = "0x60E70A0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170002C2")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A2E")]
		[Address(RVA = "0x60E7160", Offset = "0x60E6160", VA = "0x60E7160", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002C3")]
	internal override string XPLocalName
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x60E71F0", Offset = "0x60E61F0", VA = "0x60E71F0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C4")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x60E7210", Offset = "0x60E6210", VA = "0x60E7210", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x60DBBA0", Offset = "0x60DABA0", VA = "0x60DBBA0")]
	protected internal XmlProcessingInstruction(string target, string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x60E7170", Offset = "0x60E6170", VA = "0x60E7170", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x60E71B0", Offset = "0x60E61B0", VA = "0x60E71B0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x60E71E0", Offset = "0x60E61E0", VA = "0x60E71E0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
