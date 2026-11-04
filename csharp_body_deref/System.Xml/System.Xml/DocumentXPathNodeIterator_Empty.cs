// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.DocumentXPathNodeIterator_Empty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200008D")]
internal sealed class DocumentXPathNodeIterator_Empty : XPathNodeIterator
{
	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x18")]
	private XPathNavigator nav;

	[Token(Token = "0x170001C2")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public override int CurrentPosition
	{
		[Token(Token = "0x600078D")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C4")]
	public override int Count
	{
		[Token(Token = "0x600078E")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x270B260", Offset = "0x2709860", VA = "0x18270B260")]
	internal DocumentXPathNodeIterator_Empty(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x270B2B0", Offset = "0x27098B0", VA = "0x18270B2B0")]
	internal DocumentXPathNodeIterator_Empty(DocumentXPathNodeIterator_Empty other)
	{
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x270B1D0", Offset = "0x27097D0", VA = "0x18270B1D0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
