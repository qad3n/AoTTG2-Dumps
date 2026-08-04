// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.DocumentXPathNodeIterator_ElemDescendants
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200008E")]
internal abstract class DocumentXPathNodeIterator_ElemDescendants : XPathNodeIterator
{
	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x18")]
	private DocumentXPathNavigator nav;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x20")]
	private int level;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x24")]
	private int position;

	[Token(Token = "0x170001C5")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x47C6BF0", Offset = "0x47C6BF0", VA = "0x47C6BF0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6000793")]
		[Address(RVA = "0x47C6C00", Offset = "0x47C6C00", VA = "0x47C6C00", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x47C6AA0", Offset = "0x47C6AA0", VA = "0x47C6AA0")]
	internal DocumentXPathNodeIterator_ElemDescendants(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x47C6B40", Offset = "0x47C6B40", VA = "0x47C6B40")]
	internal DocumentXPathNodeIterator_ElemDescendants(DocumentXPathNodeIterator_ElemDescendants other)
	{
	}

	[Token(Token = "0x6000791")]
	protected abstract bool Match(XmlNode node);

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x47C6C10", Offset = "0x47C6C10", VA = "0x47C6C10")]
	protected void SetPosition(int pos)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x47C6C20", Offset = "0x47C6C20", VA = "0x47C6C20", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
