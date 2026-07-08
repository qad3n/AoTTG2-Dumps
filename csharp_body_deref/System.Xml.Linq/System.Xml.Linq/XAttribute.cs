using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x2000006")]
public class XAttribute : XObject
{
	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x20")]
	internal XAttribute next;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x28")]
	internal XName name;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x30")]
	internal string value;

	[Token(Token = "0x17000001")]
	public bool IsNamespaceDeclaration
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x433B4D0", Offset = "0x433B4D0", VA = "0x433B4D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public XName Name
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x433B570", Offset = "0x433B570", VA = "0x433B570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x433B580", Offset = "0x433B580", VA = "0x433B580", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000004")]
	public string Value
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x433B590", Offset = "0x433B590", VA = "0x433B590")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x433B5A0", Offset = "0x433B5A0", VA = "0x433B5A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x433AD40", Offset = "0x433AD40", VA = "0x433AD40")]
	public XAttribute(XName name, object value)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x433B440", Offset = "0x433B440", VA = "0x433B440")]
	public XAttribute(XAttribute other)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x433B910", Offset = "0x433B910", VA = "0x433B910", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x433BD50", Offset = "0x433BD50", VA = "0x433BD50")]
	internal string GetPrefixOfNamespace(XNamespace ns)
	{
		return null;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x433B220", Offset = "0x433B220", VA = "0x433B220")]
	private static void ValidateAttribute(XName name, string value)
	{
	}
}
