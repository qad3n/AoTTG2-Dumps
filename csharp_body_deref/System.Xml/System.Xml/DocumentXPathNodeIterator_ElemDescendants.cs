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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6000793")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x270B030", Offset = "0x2709630", VA = "0x18270B030")]
	internal DocumentXPathNodeIterator_ElemDescendants(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x270B100", Offset = "0x2709700", VA = "0x18270B100")]
	internal DocumentXPathNodeIterator_ElemDescendants(DocumentXPathNodeIterator_ElemDescendants other)
	{
	}

	[Token(Token = "0x6000791")]
	protected abstract bool Match(XmlNode node);

	[Token(Token = "0x6000794")]
	[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
	protected void SetPosition(int pos)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x270AEC0", Offset = "0x27094C0", VA = "0x18270AEC0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
