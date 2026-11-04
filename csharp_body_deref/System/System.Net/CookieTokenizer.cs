// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CookieTokenizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002F5")]
internal class CookieTokenizer
{
	[Token(Token = "0x20002F6")]
	private struct RecognizedAttribute
	{
		[Token(Token = "0x4000B75")]
		[FieldOffset(Offset = "0x0")]
		private string m_name;

		[Token(Token = "0x4000B76")]
		[FieldOffset(Offset = "0x8")]
		private CookieToken m_token;

		[Token(Token = "0x17000459")]
		internal CookieToken Token
		{
			[Token(Token = "0x60014A4")]
			[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
			get
			{
				return default(CookieToken);
			}
		}

		[Token(Token = "0x60014A3")]
		[Address(RVA = "0xCFB160", Offset = "0xCF9760", VA = "0x180CFB160")]
		internal RecognizedAttribute(string name, CookieToken token)
		{
		}

		[Token(Token = "0x60014A5")]
		[Address(RVA = "0x27D16A0", Offset = "0x27CFCA0", VA = "0x1827D16A0")]
		internal bool IsEqualTo(string value)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x10")]
	private bool m_eofCookie;

	[Token(Token = "0x4000B6A")]
	[FieldOffset(Offset = "0x14")]
	private int m_index;

	[Token(Token = "0x4000B6B")]
	[FieldOffset(Offset = "0x18")]
	private int m_length;

	[Token(Token = "0x4000B6C")]
	[FieldOffset(Offset = "0x20")]
	private string m_name;

	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0x28")]
	private bool m_quoted;

	[Token(Token = "0x4000B6E")]
	[FieldOffset(Offset = "0x2C")]
	private int m_start;

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x30")]
	private CookieToken m_token;

	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0x34")]
	private int m_tokenLength;

	[Token(Token = "0x4000B71")]
	[FieldOffset(Offset = "0x38")]
	private string m_tokenStream;

	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x40")]
	private string m_value;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0x0")]
	private static RecognizedAttribute[] RecognizedAttributes;

	[Token(Token = "0x4000B74")]
	[FieldOffset(Offset = "0x8")]
	private static RecognizedAttribute[] RecognizedServerAttributes;

	[Token(Token = "0x17000453")]
	internal bool EndOfCookie
	{
		[Token(Token = "0x6001492")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001493")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000454")]
	internal bool Eof
	{
		[Token(Token = "0x6001494")]
		[Address(RVA = "0x27C69F0", Offset = "0x27C4FF0", VA = "0x1827C69F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000455")]
	internal string Name
	{
		[Token(Token = "0x6001495")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001496")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000456")]
	internal bool Quoted
	{
		[Token(Token = "0x6001497")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001498")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		set
		{
		}
	}

	[Token(Token = "0x17000457")]
	internal CookieToken Token
	{
		[Token(Token = "0x6001499")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(CookieToken);
		}
		[Token(Token = "0x600149A")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		set
		{
		}
	}

	[Token(Token = "0x17000458")]
	internal string Value
	{
		[Token(Token = "0x600149B")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600149C")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x27C69A0", Offset = "0x27C4FA0", VA = "0x1827C69A0")]
	internal CookieTokenizer(string tokenStream)
	{
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x27C5C90", Offset = "0x27C4290", VA = "0x1827C5C90")]
	internal string Extract()
	{
		return null;
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x27C5CF0", Offset = "0x27C42F0", VA = "0x1827C5CF0")]
	internal CookieToken FindNext(bool ignoreComma, bool ignoreEquals)
	{
		return default(CookieToken);
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x27C5F30", Offset = "0x27C4530", VA = "0x1827C5F30")]
	internal CookieToken Next(bool first, bool parseResponseCookies)
	{
		return default(CookieToken);
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x27C6180", Offset = "0x27C4780", VA = "0x1827C6180")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x27C61E0", Offset = "0x27C47E0", VA = "0x1827C61E0")]
	internal CookieToken TokenFromName(bool parseResponseCookies)
	{
		return default(CookieToken);
	}
}
