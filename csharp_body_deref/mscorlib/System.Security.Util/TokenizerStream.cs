// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Util.TokenizerStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002B2")]
internal sealed class TokenizerStream
{
	[Token(Token = "0x4000C4D")]
	[FieldOffset(Offset = "0x10")]
	private int m_countTokens;

	[Token(Token = "0x4000C4E")]
	[FieldOffset(Offset = "0x18")]
	private System.Security.Util.TokenizerShortBlock m_headTokens;

	[Token(Token = "0x4000C4F")]
	[FieldOffset(Offset = "0x20")]
	private System.Security.Util.TokenizerShortBlock m_lastTokens;

	[Token(Token = "0x4000C50")]
	[FieldOffset(Offset = "0x28")]
	private System.Security.Util.TokenizerShortBlock m_currentTokens;

	[Token(Token = "0x4000C51")]
	[FieldOffset(Offset = "0x30")]
	private int m_indexTokens;

	[Token(Token = "0x4000C52")]
	[FieldOffset(Offset = "0x38")]
	private System.Security.Util.TokenizerStringBlock m_headStrings;

	[Token(Token = "0x4000C53")]
	[FieldOffset(Offset = "0x40")]
	private System.Security.Util.TokenizerStringBlock m_currentStrings;

	[Token(Token = "0x4000C54")]
	[FieldOffset(Offset = "0x48")]
	private int m_indexStrings;

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x3B22860", Offset = "0x3B22860", VA = "0x3B22860")]
	internal TokenizerStream()
	{
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x3B22E00", Offset = "0x3B22E00", VA = "0x3B22E00")]
	internal void AddToken(short token)
	{
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x3B22F60", Offset = "0x3B22F60", VA = "0x3B22F60")]
	internal void AddString(string str)
	{
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x3B229D0", Offset = "0x3B229D0", VA = "0x3B229D0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x3B22A20", Offset = "0x3B22A20", VA = "0x3B22A20")]
	internal short GetNextFullToken()
	{
		return default(short);
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x3B213A0", Offset = "0x3B213A0", VA = "0x3B213A0")]
	internal short GetNextToken()
	{
		return default(short);
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x3B21440", Offset = "0x3B21440", VA = "0x3B21440")]
	internal string GetNextString()
	{
		return null;
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x3B213B0", Offset = "0x3B213B0", VA = "0x3B213B0")]
	internal void ThrowAwayNextString()
	{
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x3B213C0", Offset = "0x3B213C0", VA = "0x3B213C0")]
	internal void TagLastToken(short tag)
	{
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x3B23340", Offset = "0x3B23340", VA = "0x3B23340")]
	internal int GetTokenCount()
	{
		return default(int);
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x3B22010", Offset = "0x3B22010", VA = "0x3B22010")]
	internal void GoToPosition(int position)
	{
	}
}
