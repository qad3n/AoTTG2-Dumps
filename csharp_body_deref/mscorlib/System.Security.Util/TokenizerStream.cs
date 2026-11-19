// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Util.TokenizerStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002BA")]
internal sealed class TokenizerStream
{
	[Token(Token = "0x4000BBA")]
	[FieldOffset(Offset = "0x10")]
	private int m_countTokens;

	[Token(Token = "0x4000BBB")]
	[FieldOffset(Offset = "0x18")]
	private System.Security.Util.TokenizerShortBlock m_headTokens;

	[Token(Token = "0x4000BBC")]
	[FieldOffset(Offset = "0x20")]
	private System.Security.Util.TokenizerShortBlock m_lastTokens;

	[Token(Token = "0x4000BBD")]
	[FieldOffset(Offset = "0x28")]
	private System.Security.Util.TokenizerShortBlock m_currentTokens;

	[Token(Token = "0x4000BBE")]
	[FieldOffset(Offset = "0x30")]
	private int m_indexTokens;

	[Token(Token = "0x4000BBF")]
	[FieldOffset(Offset = "0x38")]
	private System.Security.Util.TokenizerStringBlock m_headStrings;

	[Token(Token = "0x4000BC0")]
	[FieldOffset(Offset = "0x40")]
	private System.Security.Util.TokenizerStringBlock m_currentStrings;

	[Token(Token = "0x4000BC1")]
	[FieldOffset(Offset = "0x48")]
	private int m_indexStrings;

	[Token(Token = "0x6001817")]
	[Address(RVA = "0x532C8B0", Offset = "0x532B8B0", VA = "0x532C8B0")]
	internal TokenizerStream()
	{
	}

	[Token(Token = "0x6001818")]
	[Address(RVA = "0x532CE00", Offset = "0x532BE00", VA = "0x532CE00")]
	internal void AddToken(short token)
	{
	}

	[Token(Token = "0x6001819")]
	[Address(RVA = "0x532CF60", Offset = "0x532BF60", VA = "0x532CF60")]
	internal void AddString(string str)
	{
	}

	[Token(Token = "0x600181A")]
	[Address(RVA = "0x532CA20", Offset = "0x532BA20", VA = "0x532CA20")]
	internal void Reset()
	{
	}

	[Token(Token = "0x600181B")]
	[Address(RVA = "0x532CA70", Offset = "0x532BA70", VA = "0x532CA70")]
	internal short GetNextFullToken()
	{
		return default(short);
	}

	[Token(Token = "0x600181C")]
	[Address(RVA = "0x532B520", Offset = "0x532A520", VA = "0x532B520")]
	internal short GetNextToken()
	{
		return default(short);
	}

	[Token(Token = "0x600181D")]
	[Address(RVA = "0x532B5C0", Offset = "0x532A5C0", VA = "0x532B5C0")]
	internal string GetNextString()
	{
		return null;
	}

	[Token(Token = "0x600181E")]
	[Address(RVA = "0x532B530", Offset = "0x532A530", VA = "0x532B530")]
	internal void ThrowAwayNextString()
	{
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x532B540", Offset = "0x532A540", VA = "0x532B540")]
	internal void TagLastToken(short tag)
	{
	}

	[Token(Token = "0x6001820")]
	[Address(RVA = "0x532D340", Offset = "0x532C340", VA = "0x532D340")]
	internal int GetTokenCount()
	{
		return default(int);
	}

	[Token(Token = "0x6001821")]
	[Address(RVA = "0x532C0B0", Offset = "0x532B0B0", VA = "0x532C0B0")]
	internal void GoToPosition(int position)
	{
	}
}
