// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathDocumentElementChildIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D3")]
internal class XPathDocumentElementChildIterator : XPathDocumentBaseIterator
{
	[Token(Token = "0x4000EF3")]
	[FieldOffset(Offset = "0x28")]
	private string _localName;

	[Token(Token = "0x4000EF4")]
	[FieldOffset(Offset = "0x30")]
	private string _namespaceUri;

	[Token(Token = "0x6001C6E")]
	[Address(RVA = "0x478F0F0", Offset = "0x478F0F0", VA = "0x478F0F0")]
	public XPathDocumentElementChildIterator(XPathDocumentNavigator parent, string name, string namespaceURI)
	{
	}

	[Token(Token = "0x6001C6F")]
	[Address(RVA = "0x478F210", Offset = "0x478F210", VA = "0x478F210")]
	public XPathDocumentElementChildIterator(XPathDocumentElementChildIterator iter)
	{
	}

	[Token(Token = "0x6001C70")]
	[Address(RVA = "0x478F2C0", Offset = "0x478F2C0", VA = "0x478F2C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C71")]
	[Address(RVA = "0x478F310", Offset = "0x478F310", VA = "0x478F310", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
