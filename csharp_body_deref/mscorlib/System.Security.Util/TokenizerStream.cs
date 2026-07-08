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
	[Address(RVA = "0x4E3CD40", Offset = "0x4E3CD40", VA = "0x4E3CD40")]
	internal TokenizerStream()
	{
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x4E3D2E0", Offset = "0x4E3D2E0", VA = "0x4E3D2E0")]
	internal void AddToken(short token)
	{
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x4E3D440", Offset = "0x4E3D440", VA = "0x4E3D440")]
	internal void AddString(string str)
	{
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x4E3CEB0", Offset = "0x4E3CEB0", VA = "0x4E3CEB0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x4E3CF00", Offset = "0x4E3CF00", VA = "0x4E3CF00")]
	internal short GetNextFullToken()
	{
		return default(short);
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x4E3B880", Offset = "0x4E3B880", VA = "0x4E3B880")]
	internal short GetNextToken()
	{
		return default(short);
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x4E3B920", Offset = "0x4E3B920", VA = "0x4E3B920")]
	internal string GetNextString()
	{
		return null;
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x4E3B890", Offset = "0x4E3B890", VA = "0x4E3B890")]
	internal void ThrowAwayNextString()
	{
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x4E3B8A0", Offset = "0x4E3B8A0", VA = "0x4E3B8A0")]
	internal void TagLastToken(short tag)
	{
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x4E3D820", Offset = "0x4E3D820", VA = "0x4E3D820")]
	internal int GetTokenCount()
	{
		return default(int);
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x4E3C4F0", Offset = "0x4E3C4F0", VA = "0x4E3C4F0")]
	internal void GoToPosition(int position)
	{
	}
}
