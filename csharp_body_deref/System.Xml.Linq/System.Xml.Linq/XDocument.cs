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
		[Address(RVA = "0x4692150", Offset = "0x4692150", VA = "0x4692150")]
		get
		{
			return null;
		}
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4692160", Offset = "0x4692160", VA = "0x4692160")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x4692170", Offset = "0x4692170", VA = "0x4692170", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000010")]
	public XElement Root
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x4692180", Offset = "0x4692180", VA = "0x4692180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x46920C0", Offset = "0x46920C0", VA = "0x46920C0")]
	public XDocument()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x46920D0", Offset = "0x46920D0", VA = "0x46920D0")]
	public XDocument(XDocument other)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x46921C0", Offset = "0x46921C0", VA = "0x46921C0", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4692300", Offset = "0x4692300", VA = "0x4692300", Slot = "11")]
	internal override void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4692350", Offset = "0x4692350", VA = "0x4692350", Slot = "12")]
	internal override void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x46923A0", Offset = "0x46923A0", VA = "0x46923A0", Slot = "10")]
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
	[Address(RVA = "0x4692480", Offset = "0x4692480", VA = "0x4692480")]
	internal static bool IsWhitespace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x46924F0", Offset = "0x46924F0", VA = "0x46924F0", Slot = "13")]
	internal override void ValidateNode(XNode node, XNode previous)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4692680", Offset = "0x4692680", VA = "0x4692680")]
	private void ValidateDocument(XNode previous, XmlNodeType allowBefore, XmlNodeType allowAfter)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x46927A0", Offset = "0x46927A0", VA = "0x46927A0", Slot = "14")]
	internal override void ValidateString(string s)
	{
	}
}
