// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlCDataSection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009A")]
public class XmlCDataSection : XmlCharacterData
{
	[Token(Token = "0x170001E6")]
	public override string Name
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x47CAF60", Offset = "0x47CAF60", VA = "0x47CAF60", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E7")]
	public override string LocalName
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x47CAF90", Offset = "0x47CAF90", VA = "0x47CAF90", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E8")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x47CAFC0", Offset = "0x47CAFC0", VA = "0x47CAFC0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001E9")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x47CAFD0", Offset = "0x47CAFD0", VA = "0x47CAFD0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EA")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x47CB100", Offset = "0x47CB100", VA = "0x47CB100", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001EB")]
	internal override bool IsText
	{
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x47CB110", Offset = "0x47CB110", VA = "0x47CB110", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x47CB120", Offset = "0x47CB120", VA = "0x47CB120", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x47CAF00", Offset = "0x47CAF00", VA = "0x47CAF00")]
	protected internal XmlCDataSection(string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x47CB050", Offset = "0x47CB050", VA = "0x47CB050", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x47CB0B0", Offset = "0x47CB0B0", VA = "0x47CB0B0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x47CB0F0", Offset = "0x47CB0F0", VA = "0x47CB0F0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
