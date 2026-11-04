// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Util.Parser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002D9")]
internal sealed class Parser
{
	[Token(Token = "0x4000C34")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.SecurityDocument _doc;

	[Token(Token = "0x4000C35")]
	[FieldOffset(Offset = "0x18")]
	private System.Security.Util.Tokenizer _t;

	[Token(Token = "0x6001823")]
	[Address(RVA = "0x1995AA0", Offset = "0x19940A0", VA = "0x181995AA0")]
	internal SecurityElement GetTopElement()
	{
		return null;
	}

	[Token(Token = "0x6001824")]
	[Address(RVA = "0x19952A0", Offset = "0x19938A0", VA = "0x1819952A0")]
	private void GetRequiredSizes(System.Security.Util.TokenizerStream stream, ref int index)
	{
	}

	[Token(Token = "0x6001825")]
	[Address(RVA = "0x1995060", Offset = "0x1993660", VA = "0x181995060")]
	private int DetermineFormat(System.Security.Util.TokenizerStream stream)
	{
		return default(int);
	}

	[Token(Token = "0x6001826")]
	[Address(RVA = "0x1995AD0", Offset = "0x19940D0", VA = "0x181995AD0")]
	private void ParseContents()
	{
	}

	[Token(Token = "0x6001827")]
	[Address(RVA = "0x1996110", Offset = "0x1994710", VA = "0x181996110")]
	private Parser(System.Security.Util.Tokenizer t)
	{
	}

	[Token(Token = "0x6001828")]
	[Address(RVA = "0x1996010", Offset = "0x1994610", VA = "0x181996010")]
	internal Parser(string input)
	{
	}
}
