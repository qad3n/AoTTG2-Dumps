// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathDocumentElementDescendantIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D5")]
internal class XPathDocumentElementDescendantIterator : XPathDocumentBaseIterator
{
	[Token(Token = "0x4000EF6")]
	[FieldOffset(Offset = "0x28")]
	private XPathDocumentNavigator _end;

	[Token(Token = "0x4000EF7")]
	[FieldOffset(Offset = "0x30")]
	private string _localName;

	[Token(Token = "0x4000EF8")]
	[FieldOffset(Offset = "0x38")]
	private string _namespaceUri;

	[Token(Token = "0x4000EF9")]
	[FieldOffset(Offset = "0x40")]
	private bool _matchSelf;

	[Token(Token = "0x6001C76")]
	[Address(RVA = "0x478F590", Offset = "0x478F590", VA = "0x478F590")]
	public XPathDocumentElementDescendantIterator(XPathDocumentNavigator root, string name, string namespaceURI, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C77")]
	[Address(RVA = "0x478F740", Offset = "0x478F740", VA = "0x478F740")]
	public XPathDocumentElementDescendantIterator(XPathDocumentElementDescendantIterator iter)
	{
	}

	[Token(Token = "0x6001C78")]
	[Address(RVA = "0x478F800", Offset = "0x478F800", VA = "0x478F800", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C79")]
	[Address(RVA = "0x478F850", Offset = "0x478F850", VA = "0x478F850", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
