// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Util.TokenizerStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002E1")]
internal sealed class TokenizerStream
{
	[Token(Token = "0x4000C5A")]
	[FieldOffset(Offset = "0x10")]
	private int m_countTokens;

	[Token(Token = "0x4000C5B")]
	[FieldOffset(Offset = "0x18")]
	private System.Security.Util.TokenizerShortBlock m_headTokens;

	[Token(Token = "0x4000C5C")]
	[FieldOffset(Offset = "0x20")]
	private System.Security.Util.TokenizerShortBlock m_lastTokens;

	[Token(Token = "0x4000C5D")]
	[FieldOffset(Offset = "0x28")]
	private System.Security.Util.TokenizerShortBlock m_currentTokens;

	[Token(Token = "0x4000C5E")]
	[FieldOffset(Offset = "0x30")]
	private int m_indexTokens;

	[Token(Token = "0x4000C5F")]
	[FieldOffset(Offset = "0x38")]
	private System.Security.Util.TokenizerStringBlock m_headStrings;

	[Token(Token = "0x4000C60")]
	[FieldOffset(Offset = "0x40")]
	private System.Security.Util.TokenizerStringBlock m_currentStrings;

	[Token(Token = "0x4000C61")]
	[FieldOffset(Offset = "0x48")]
	private int m_indexStrings;

	[Token(Token = "0x600183A")]
	[Address(RVA = "0x199C030", Offset = "0x199A630", VA = "0x18199C030")]
	internal TokenizerStream()
	{
	}

	[Token(Token = "0x600183B")]
	[Address(RVA = "0x199BC50", Offset = "0x199A250", VA = "0x18199BC50")]
	internal void AddToken(short token)
	{
	}

	[Token(Token = "0x600183C")]
	[Address(RVA = "0x199BB10", Offset = "0x199A110", VA = "0x18199BB10")]
	internal void AddString(string str)
	{
	}

	[Token(Token = "0x600183D")]
	[Address(RVA = "0x199BF40", Offset = "0x199A540", VA = "0x18199BF40")]
	internal void Reset()
	{
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x199BD90", Offset = "0x199A390", VA = "0x18199BD90")]
	internal short GetNextFullToken()
	{
		return default(short);
	}

	[Token(Token = "0x600183F")]
	[Address(RVA = "0x199BEA0", Offset = "0x199A4A0", VA = "0x18199BEA0")]
	internal short GetNextToken()
	{
		return default(short);
	}

	[Token(Token = "0x6001840")]
	[Address(RVA = "0x199BE20", Offset = "0x199A420", VA = "0x18199BE20")]
	internal string GetNextString()
	{
		return null;
	}

	[Token(Token = "0x6001841")]
	[Address(RVA = "0x199C020", Offset = "0x199A620", VA = "0x18199C020")]
	internal void ThrowAwayNextString()
	{
	}

	[Token(Token = "0x6001842")]
	[Address(RVA = "0x199BFA0", Offset = "0x199A5A0", VA = "0x18199BFA0")]
	internal void TagLastToken(short tag)
	{
	}

	[Token(Token = "0x6001843")]
	[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
	internal int GetTokenCount()
	{
		return default(int);
	}

	[Token(Token = "0x6001844")]
	[Address(RVA = "0x199BEC0", Offset = "0x199A4C0", VA = "0x18199BEC0")]
	internal void GoToPosition(int position)
	{
	}
}
