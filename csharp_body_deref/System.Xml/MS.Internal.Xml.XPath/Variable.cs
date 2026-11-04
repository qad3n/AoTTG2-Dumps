// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.Variable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C3")]
internal class Variable : AstNode
{
	[Token(Token = "0x4000EA2")]
	[FieldOffset(Offset = "0x10")]
	private string _localname;

	[Token(Token = "0x4000EA3")]
	[FieldOffset(Offset = "0x18")]
	private string _prefix;

	[Token(Token = "0x1700072A")]
	public override AstType Type
	{
		[Token(Token = "0x6001BEE")]
		[Address(RVA = "0x106DD80", Offset = "0x106C380", VA = "0x18106DD80", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x1700072B")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001BEF")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x1700072C")]
	public string Localname
	{
		[Token(Token = "0x6001BF0")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700072D")]
	public string Prefix
	{
		[Token(Token = "0x6001BF1")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BED")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public Variable(string name, string prefix)
	{
	}
}
