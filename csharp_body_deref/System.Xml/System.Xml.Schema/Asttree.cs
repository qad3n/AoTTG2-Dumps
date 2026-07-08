using System.Collections;
using Il2CppDummyDll;
using MS.Internal.Xml.XPath;

namespace System.Xml.Schema;

[Token(Token = "0x2000162")]
internal class Asttree
{
	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _fAxisArray;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0x18")]
	private string _xpathexpr;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0x20")]
	private bool _isField;

	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0x28")]
	private XmlNamespaceManager _nsmgr;

	[Token(Token = "0x170003F0")]
	internal ArrayList SubtreeArray
	{
		[Token(Token = "0x6000F41")]
		[Address(RVA = "0x4501820", Offset = "0x4501820", VA = "0x4501820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x4501830", Offset = "0x4501830", VA = "0x4501830")]
	public Asttree(string xPath, bool isField, XmlNamespaceManager nsmgr)
	{
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x4502280", Offset = "0x4502280", VA = "0x4502280")]
	private static bool IsNameTest(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x4500780", Offset = "0x4500780", VA = "0x4500780")]
	internal static bool IsAttribute(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x45022A0", Offset = "0x45022A0", VA = "0x45022A0")]
	private static bool IsDescendantOrSelf(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x45017F0", Offset = "0x45017F0", VA = "0x45017F0")]
	internal static bool IsSelf(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x4501890", Offset = "0x4501890", VA = "0x4501890")]
	public void CompileXPath(string xPath, bool isField, XmlNamespaceManager nsmgr)
	{
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x45022D0", Offset = "0x45022D0", VA = "0x45022D0")]
	private void SetURN(Axis axis, XmlNamespaceManager nsmgr)
	{
	}
}
