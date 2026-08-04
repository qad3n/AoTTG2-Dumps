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
		[Address(RVA = "0x47C6A70", Offset = "0x47C6A70", VA = "0x47C6A70", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public override int CurrentPosition
	{
		[Token(Token = "0x600078D")]
		[Address(RVA = "0x47C6A80", Offset = "0x47C6A80", VA = "0x47C6A80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C4")]
	public override int Count
	{
		[Token(Token = "0x600078E")]
		[Address(RVA = "0x47C6A90", Offset = "0x47C6A90", VA = "0x47C6A90", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x47C6450", Offset = "0x47C6450", VA = "0x47C6450")]
	internal DocumentXPathNodeIterator_Empty(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x47C6990", Offset = "0x47C6990", VA = "0x47C6990")]
	internal DocumentXPathNodeIterator_Empty(DocumentXPathNodeIterator_Empty other)
	{
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x47C69E0", Offset = "0x47C69E0", VA = "0x47C69E0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x47C6A60", Offset = "0x47C6A60", VA = "0x47C6A60", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
