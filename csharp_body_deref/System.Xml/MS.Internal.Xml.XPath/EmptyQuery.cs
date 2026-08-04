// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.EmptyQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200029B")]
internal sealed class EmptyQuery : Query
{
	[Token(Token = "0x170006ED")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001AD5")]
		[Address(RVA = "0x477A840", Offset = "0x477A840", VA = "0x477A840", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EE")]
	public override int Count
	{
		[Token(Token = "0x6001AD6")]
		[Address(RVA = "0x477A850", Offset = "0x477A850", VA = "0x477A850", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EF")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001AD7")]
		[Address(RVA = "0x477A860", Offset = "0x477A860", VA = "0x477A860", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x170006F0")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001AD8")]
		[Address(RVA = "0x477A870", Offset = "0x477A870", VA = "0x477A870", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006F1")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001ADA")]
		[Address(RVA = "0x477A890", Offset = "0x477A890", VA = "0x477A890", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x477A810", Offset = "0x477A810", VA = "0x477A810", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x477A820", Offset = "0x477A820", VA = "0x477A820", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x477A830", Offset = "0x477A830", VA = "0x477A830", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x477A880", Offset = "0x477A880", VA = "0x477A880", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001ADB")]
	[Address(RVA = "0x477A8A0", Offset = "0x477A8A0", VA = "0x477A8A0")]
	public EmptyQuery()
	{
	}
}
