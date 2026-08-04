// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Asttree
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x483EF80", Offset = "0x483EF80", VA = "0x483EF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x483EF90", Offset = "0x483EF90", VA = "0x483EF90")]
	public Asttree(string xPath, bool isField, XmlNamespaceManager nsmgr)
	{
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x483F9E0", Offset = "0x483F9E0", VA = "0x483F9E0")]
	private static bool IsNameTest(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x483DEE0", Offset = "0x483DEE0", VA = "0x483DEE0")]
	internal static bool IsAttribute(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x483FA00", Offset = "0x483FA00", VA = "0x483FA00")]
	private static bool IsDescendantOrSelf(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x483EF50", Offset = "0x483EF50", VA = "0x483EF50")]
	internal static bool IsSelf(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x483EFF0", Offset = "0x483EFF0", VA = "0x483EFF0")]
	public void CompileXPath(string xPath, bool isField, XmlNamespaceManager nsmgr)
	{
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x483FA30", Offset = "0x483FA30", VA = "0x483FA30")]
	private void SetURN(Axis axis, XmlNamespaceManager nsmgr)
	{
	}
}
