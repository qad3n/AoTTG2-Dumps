// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Util.Parser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002AA")]
internal sealed class Parser
{
	[Token(Token = "0x4000C27")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.SecurityDocument _doc;

	[Token(Token = "0x4000C28")]
	[FieldOffset(Offset = "0x18")]
	private System.Security.Util.Tokenizer _t;

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x3B20E80", Offset = "0x3B20E80", VA = "0x3B20E80")]
	internal SecurityElement GetTopElement()
	{
		return null;
	}

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x3B20EB0", Offset = "0x3B20EB0", VA = "0x3B20EB0")]
	private void GetRequiredSizes(System.Security.Util.TokenizerStream stream, ref int index)
	{
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x3B214B0", Offset = "0x3B214B0", VA = "0x3B214B0")]
	private int DetermineFormat(System.Security.Util.TokenizerStream stream)
	{
		return default(int);
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x3B222F0", Offset = "0x3B222F0", VA = "0x3B222F0")]
	private void ParseContents()
	{
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x3B22AA0", Offset = "0x3B22AA0", VA = "0x3B22AA0")]
	private Parser(System.Security.Util.Tokenizer t)
	{
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x3B22BF0", Offset = "0x3B22BF0", VA = "0x3B22BF0")]
	internal Parser(string input)
	{
	}
}
