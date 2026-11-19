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
		[Address(RVA = "0x5FA3B20", Offset = "0x5FA2B20", VA = "0x5FA3B20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x5FA3B30", Offset = "0x5FA2B30", VA = "0x5FA3B30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x5FA3B40", Offset = "0x5FA2B40", VA = "0x5FA3B40", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000010")]
	public XElement Root
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x5FA3B50", Offset = "0x5FA2B50", VA = "0x5FA3B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x5FA3A90", Offset = "0x5FA2A90", VA = "0x5FA3A90")]
	public XDocument()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5FA3AA0", Offset = "0x5FA2AA0", VA = "0x5FA3AA0")]
	public XDocument(XDocument other)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5FA3B90", Offset = "0x5FA2B90", VA = "0x5FA3B90", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x5FA3CD0", Offset = "0x5FA2CD0", VA = "0x5FA3CD0", Slot = "11")]
	internal override void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5FA3D20", Offset = "0x5FA2D20", VA = "0x5FA3D20", Slot = "12")]
	internal override void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x5FA3D70", Offset = "0x5FA2D70", VA = "0x5FA3D70", Slot = "10")]
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
	[Address(RVA = "0x5FA3E50", Offset = "0x5FA2E50", VA = "0x5FA3E50")]
	internal static bool IsWhitespace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x5FA3EC0", Offset = "0x5FA2EC0", VA = "0x5FA3EC0", Slot = "13")]
	internal override void ValidateNode(XNode node, XNode previous)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x5FA4050", Offset = "0x5FA3050", VA = "0x5FA4050")]
	private void ValidateDocument(XNode previous, XmlNodeType allowBefore, XmlNodeType allowAfter)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5FA4160", Offset = "0x5FA3160", VA = "0x5FA4160", Slot = "14")]
	internal override void ValidateString(string s)
	{
	}
}
