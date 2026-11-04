// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlDocumentFragment
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A1")]
public class XmlDocumentFragment : XmlNode
{
	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x18")]
	private XmlLinkedNode lastChild;

	[Token(Token = "0x1700021E")]
	public override string Name
	{
		[Token(Token = "0x600089F")]
		[Address(RVA = "0x272A050", Offset = "0x2728650", VA = "0x18272A050", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	public override string LocalName
	{
		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x272A050", Offset = "0x2728650", VA = "0x18272A050", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000220")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x1B2A120", Offset = "0x1B28720", VA = "0x181B2A120", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000221")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60008A2")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60008A3")]
		[Address(RVA = "0x272A080", Offset = "0x2728680", VA = "0x18272A080", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000223")]
	public override string InnerXml
	{
		[Token(Token = "0x60008A4")]
		[Address(RVA = "0x272A0F0", Offset = "0x27286F0", VA = "0x18272A0F0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000224")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008A6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000225")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008A8")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000226")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x2729FC0", Offset = "0x27285C0", VA = "0x182729FC0")]
	protected internal XmlDocumentFragment(XmlDocument ownerDocument)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x2729C60", Offset = "0x2728260", VA = "0x182729C60", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x2729CE0", Offset = "0x27282E0", VA = "0x182729CE0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x2729B70", Offset = "0x2728170", VA = "0x182729B70", Slot = "32")]
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x2729BF0", Offset = "0x27281F0", VA = "0x182729BF0", Slot = "31")]
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x2713DB0", Offset = "0x27123B0", VA = "0x182713DB0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x2729D90", Offset = "0x2728390", VA = "0x182729D90", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
