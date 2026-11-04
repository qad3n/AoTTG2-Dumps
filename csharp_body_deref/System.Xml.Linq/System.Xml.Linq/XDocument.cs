// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Linq.XDocument
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x200000D")]
public class XDocument : XContainer
{
	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x30")]
	private XDeclaration _declaration;

	[Token(Token = "0x1700000E")]
	public XDeclaration Declaration
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x1B28F50", Offset = "0x1B27550", VA = "0x181B28F50", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000010")]
	public XElement Root
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x25E95B0", Offset = "0x25E7BB0", VA = "0x1825E95B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XDocument()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x25E94E0", Offset = "0x25E7AE0", VA = "0x1825E94E0")]
	public XDocument(XDocument other)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x25E93A0", Offset = "0x25E79A0", VA = "0x1825E93A0", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x25E8DB0", Offset = "0x25E73B0", VA = "0x1825E8DB0", Slot = "11")]
	internal override void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x25E8D60", Offset = "0x25E7360", VA = "0x1825E8D60", Slot = "12")]
	internal override void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x25E8E00", Offset = "0x25E7400", VA = "0x1825E8E00", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	private T GetFirstNode<T>() where T : XNode
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x25E8EF0", Offset = "0x25E74F0", VA = "0x1825E8EF0")]
	internal static bool IsWhitespace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x25E90B0", Offset = "0x25E76B0", VA = "0x1825E90B0", Slot = "13")]
	internal override void ValidateNode(XNode node, XNode previous)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x25E8F70", Offset = "0x25E7570", VA = "0x1825E8F70")]
	private void ValidateDocument(XNode previous, XmlNodeType allowBefore, XmlNodeType allowAfter)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x25E92E0", Offset = "0x25E78E0", VA = "0x1825E92E0", Slot = "14")]
	internal override void ValidateString(string s)
	{
	}
}
