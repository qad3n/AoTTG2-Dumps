// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Util.Parser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002B2")]
internal sealed class Parser
{
	[Token(Token = "0x4000B94")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.SecurityDocument _doc;

	[Token(Token = "0x4000B95")]
	[FieldOffset(Offset = "0x18")]
	private System.Security.Util.Tokenizer _t;

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x532ACD0", Offset = "0x5329CD0", VA = "0x532ACD0")]
	internal SecurityElement GetTopElement()
	{
		return null;
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x532AD00", Offset = "0x5329D00", VA = "0x532AD00")]
	private void GetRequiredSizes(System.Security.Util.TokenizerStream stream, ref int index)
	{
	}

	[Token(Token = "0x6001802")]
	[Address(RVA = "0x532B630", Offset = "0x532A630", VA = "0x532B630")]
	private int DetermineFormat(System.Security.Util.TokenizerStream stream)
	{
		return default(int);
	}

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x532C380", Offset = "0x532B380", VA = "0x532C380")]
	private void ParseContents()
	{
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x532CAF0", Offset = "0x532BAF0", VA = "0x532CAF0")]
	private Parser(System.Security.Util.Tokenizer t)
	{
	}

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x532CC00", Offset = "0x532BC00", VA = "0x532CC00")]
	internal Parser(string input)
	{
	}
}
