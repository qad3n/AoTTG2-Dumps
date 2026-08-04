// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathDocumentKindDescendantIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D6")]
internal class XPathDocumentKindDescendantIterator : XPathDocumentBaseIterator
{
	[Token(Token = "0x4000EFA")]
	[FieldOffset(Offset = "0x28")]
	private XPathDocumentNavigator _end;

	[Token(Token = "0x4000EFB")]
	[FieldOffset(Offset = "0x30")]
	private XPathNodeType _typ;

	[Token(Token = "0x4000EFC")]
	[FieldOffset(Offset = "0x34")]
	private bool _matchSelf;

	[Token(Token = "0x6001C7A")]
	[Address(RVA = "0x478F990", Offset = "0x478F990", VA = "0x478F990")]
	public XPathDocumentKindDescendantIterator(XPathDocumentNavigator root, XPathNodeType typ, bool matchSelf)
	{
	}

	[Token(Token = "0x6001C7B")]
	[Address(RVA = "0x478FAA0", Offset = "0x478FAA0", VA = "0x478FAA0")]
	public XPathDocumentKindDescendantIterator(XPathDocumentKindDescendantIterator iter)
	{
	}

	[Token(Token = "0x6001C7C")]
	[Address(RVA = "0x478FB50", Offset = "0x478FB50", VA = "0x478FB50", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C7D")]
	[Address(RVA = "0x478FBA0", Offset = "0x478FBA0", VA = "0x478FBA0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
