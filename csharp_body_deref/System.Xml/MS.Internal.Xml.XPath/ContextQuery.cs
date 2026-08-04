// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.ContextQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000296")]
internal class ContextQuery : Query
{
	[Token(Token = "0x4000E1C")]
	[FieldOffset(Offset = "0x18")]
	protected XPathNavigator contextNode;

	[Token(Token = "0x170006E8")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001AB8")]
		[Address(RVA = "0x4779EA0", Offset = "0x4779EA0", VA = "0x4779EA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E9")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001ABC")]
		[Address(RVA = "0x4779F80", Offset = "0x4779F80", VA = "0x4779F80", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006EA")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001ABD")]
		[Address(RVA = "0x4779F90", Offset = "0x4779F90", VA = "0x4779F90", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EB")]
	public override int Count
	{
		[Token(Token = "0x6001ABE")]
		[Address(RVA = "0x4779FA0", Offset = "0x4779FA0", VA = "0x4779FA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EC")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001ABF")]
		[Address(RVA = "0x4779FB0", Offset = "0x4779FB0", VA = "0x4779FB0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001AB5")]
	[Address(RVA = "0x4777800", Offset = "0x4777800", VA = "0x4777800")]
	public ContextQuery()
	{
	}

	[Token(Token = "0x6001AB6")]
	[Address(RVA = "0x4777860", Offset = "0x4777860", VA = "0x4777860")]
	protected ContextQuery(ContextQuery other)
	{
	}

	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x4779E90", Offset = "0x4779E90", VA = "0x4779E90", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x4779EB0", Offset = "0x4779EB0", VA = "0x4779EB0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x4779EF0", Offset = "0x4779EF0", VA = "0x4779EF0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x4779F10", Offset = "0x4779F10", VA = "0x4779F10", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
