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
		[Address(RVA = "0x47D0F10", Offset = "0x47D0F10", VA = "0x47D0F10", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	public override string LocalName
	{
		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x47D0F40", Offset = "0x47D0F40", VA = "0x47D0F40", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000220")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x47D0F70", Offset = "0x47D0F70", VA = "0x47D0F70", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000221")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60008A2")]
		[Address(RVA = "0x47D0F80", Offset = "0x47D0F80", VA = "0x47D0F80", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60008A3")]
		[Address(RVA = "0x47D0F90", Offset = "0x47D0F90", VA = "0x47D0F90", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000223")]
	public override string InnerXml
	{
		[Token(Token = "0x60008A4")]
		[Address(RVA = "0x47D0FF0", Offset = "0x47D0FF0", VA = "0x47D0FF0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000224")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008A6")]
		[Address(RVA = "0x47D1380", Offset = "0x47D1380", VA = "0x47D1380", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000225")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x47D1390", Offset = "0x47D1390", VA = "0x47D1390", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x47D13A0", Offset = "0x47D13A0", VA = "0x47D13A0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000226")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x47D18D0", Offset = "0x47D18D0", VA = "0x47D18D0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x47D0E70", Offset = "0x47D0E70", VA = "0x47D0E70")]
	protected internal XmlDocumentFragment(XmlDocument ownerDocument)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x47D1300", Offset = "0x47D1300", VA = "0x47D1300", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x47D13B0", Offset = "0x47D13B0", VA = "0x47D13B0", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x47D1400", Offset = "0x47D1400", VA = "0x47D1400", Slot = "32")]
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x47D1470", Offset = "0x47D1470", VA = "0x47D1470", Slot = "31")]
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x47D14D0", Offset = "0x47D14D0", VA = "0x47D14D0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x47D14F0", Offset = "0x47D14F0", VA = "0x47D14F0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
