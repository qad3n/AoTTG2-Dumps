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
		[Address(RVA = "0x60CA330", Offset = "0x60C9330", VA = "0x60CA330", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6000793")]
		[Address(RVA = "0x60CA340", Offset = "0x60C9340", VA = "0x60CA340", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x60CA1E0", Offset = "0x60C91E0", VA = "0x60CA1E0")]
	internal DocumentXPathNodeIterator_ElemDescendants(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x60CA280", Offset = "0x60C9280", VA = "0x60CA280")]
	internal DocumentXPathNodeIterator_ElemDescendants(DocumentXPathNodeIterator_ElemDescendants other)
	{
	}

	[Token(Token = "0x6000791")]
	protected abstract bool Match(XmlNode node);

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x60CA350", Offset = "0x60C9350", VA = "0x60CA350")]
	protected void SetPosition(int pos)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x60CA360", Offset = "0x60C9360", VA = "0x60CA360", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
