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
		[Address(RVA = "0x607F640", Offset = "0x607E640", VA = "0x607F640", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E9")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001ABC")]
		[Address(RVA = "0x607F720", Offset = "0x607E720", VA = "0x607F720", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006EA")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001ABD")]
		[Address(RVA = "0x607F730", Offset = "0x607E730", VA = "0x607F730", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EB")]
	public override int Count
	{
		[Token(Token = "0x6001ABE")]
		[Address(RVA = "0x607F740", Offset = "0x607E740", VA = "0x607F740", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EC")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001ABF")]
		[Address(RVA = "0x607F750", Offset = "0x607E750", VA = "0x607F750", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001AB5")]
	[Address(RVA = "0x607CF30", Offset = "0x607BF30", VA = "0x607CF30")]
	public ContextQuery()
	{
	}

	[Token(Token = "0x6001AB6")]
	[Address(RVA = "0x607CF90", Offset = "0x607BF90", VA = "0x607CF90")]
	protected ContextQuery(ContextQuery other)
	{
	}

	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x607F630", Offset = "0x607E630", VA = "0x607F630", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x607F650", Offset = "0x607E650", VA = "0x607F650", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x607F690", Offset = "0x607E690", VA = "0x607F690", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x607F6B0", Offset = "0x607E6B0", VA = "0x607F6B0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
