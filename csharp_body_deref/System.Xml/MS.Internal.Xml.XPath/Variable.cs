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
		[Address(RVA = "0x4789740", Offset = "0x4789740", VA = "0x4789740", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x1700072B")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001BEF")]
		[Address(RVA = "0x4789750", Offset = "0x4789750", VA = "0x4789750", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x1700072C")]
	public string Localname
	{
		[Token(Token = "0x6001BF0")]
		[Address(RVA = "0x4789760", Offset = "0x4789760", VA = "0x4789760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700072D")]
	public string Prefix
	{
		[Token(Token = "0x6001BF1")]
		[Address(RVA = "0x4789770", Offset = "0x4789770", VA = "0x4789770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BED")]
	[Address(RVA = "0x4789700", Offset = "0x4789700", VA = "0x4789700")]
	public Variable(string name, string prefix)
	{
	}
}
