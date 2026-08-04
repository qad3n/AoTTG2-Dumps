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
		[Address(RVA = "0x47E4450", Offset = "0x47E4450", VA = "0x47E4450", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BE")]
	public override string LocalName
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x47E4480", Offset = "0x47E4480", VA = "0x47E4480", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BF")]
	public override string Value
	{
		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x47E44A0", Offset = "0x47E44A0", VA = "0x47E44A0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x47E44B0", Offset = "0x47E44B0", VA = "0x47E44B0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002C0")]
	public string Data
	{
		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x47E4570", Offset = "0x47E4570", VA = "0x47E4570")]
		set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	public override string InnerText
	{
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x47E4630", Offset = "0x47E4630", VA = "0x47E4630", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2D")]
		[Address(RVA = "0x47E4640", Offset = "0x47E4640", VA = "0x47E4640", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170002C2")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A2E")]
		[Address(RVA = "0x47E4700", Offset = "0x47E4700", VA = "0x47E4700", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002C3")]
	internal override string XPLocalName
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x47E4790", Offset = "0x47E4790", VA = "0x47E4790", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C4")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x47E47B0", Offset = "0x47E47B0", VA = "0x47E47B0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x47D8C40", Offset = "0x47D8C40", VA = "0x47D8C40")]
	protected internal XmlProcessingInstruction(string target, string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x47E4710", Offset = "0x47E4710", VA = "0x47E4710", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x47E4750", Offset = "0x47E4750", VA = "0x47E4750", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x47E4780", Offset = "0x47E4780", VA = "0x47E4780", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
