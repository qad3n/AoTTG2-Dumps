// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathDocumentBaseIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D2")]
internal abstract class XPathDocumentBaseIterator : XPathNodeIterator
{
	[Token(Token = "0x4000EF1")]
	[FieldOffset(Offset = "0x18")]
	protected XPathDocumentNavigator ctxt;

	[Token(Token = "0x4000EF2")]
	[FieldOffset(Offset = "0x20")]
	protected int pos;

	[Token(Token = "0x1700074C")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C6C")]
		[Address(RVA = "0x478F0D0", Offset = "0x478F0D0", VA = "0x478F0D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074D")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C6D")]
		[Address(RVA = "0x478F0E0", Offset = "0x478F0E0", VA = "0x478F0E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C6A")]
	[Address(RVA = "0x478EF10", Offset = "0x478EF10", VA = "0x478EF10")]
	protected XPathDocumentBaseIterator(XPathDocumentNavigator ctxt)
	{
	}

	[Token(Token = "0x6001C6B")]
	[Address(RVA = "0x478F040", Offset = "0x478F040", VA = "0x478F040")]
	protected XPathDocumentBaseIterator(XPathDocumentBaseIterator iter)
	{
	}
}
