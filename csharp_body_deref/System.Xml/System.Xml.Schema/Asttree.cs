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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F42")]
	[Address(RVA = "0x2775C40", Offset = "0x2774240", VA = "0x182775C40")]
	public Asttree(string xPath, bool isField, XmlNamespaceManager nsmgr)
	{
	}

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x2775AB0", Offset = "0x27740B0", VA = "0x182775AB0")]
	private static bool IsNameTest(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x2775A50", Offset = "0x2774050", VA = "0x182775A50")]
	internal static bool IsAttribute(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x2775A80", Offset = "0x2774080", VA = "0x182775A80")]
	private static bool IsDescendantOrSelf(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x2775AE0", Offset = "0x27740E0", VA = "0x182775AE0")]
	internal static bool IsSelf(Axis ast)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x2775160", Offset = "0x2773760", VA = "0x182775160")]
	public void CompileXPath(string xPath, bool isField, XmlNamespaceManager nsmgr)
	{
	}

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x2775B10", Offset = "0x2774110", VA = "0x182775B10")]
	private void SetURN(Axis axis, XmlNamespaceManager nsmgr)
	{
	}
}
