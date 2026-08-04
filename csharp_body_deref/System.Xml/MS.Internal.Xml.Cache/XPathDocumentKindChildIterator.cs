// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathDocumentKindChildIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D4")]
internal class XPathDocumentKindChildIterator : XPathDocumentBaseIterator
{
	[Token(Token = "0x4000EF5")]
	[FieldOffset(Offset = "0x24")]
	private XPathNodeType _typ;

	[Token(Token = "0x6001C72")]
	[Address(RVA = "0x478F370", Offset = "0x478F370", VA = "0x478F370")]
	public XPathDocumentKindChildIterator(XPathDocumentNavigator parent, XPathNodeType typ)
	{
	}

	[Token(Token = "0x6001C73")]
	[Address(RVA = "0x478F3F0", Offset = "0x478F3F0", VA = "0x478F3F0")]
	public XPathDocumentKindChildIterator(XPathDocumentKindChildIterator iter)
	{
	}

	[Token(Token = "0x6001C74")]
	[Address(RVA = "0x478F480", Offset = "0x478F480", VA = "0x478F480", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C75")]
	[Address(RVA = "0x478F540", Offset = "0x478F540", VA = "0x478F540", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
