using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200016D")]
internal class CookieTokenizer
{
	[Token(Token = "0x200016E")]
	private struct RecognizedAttribute
	{
		[Token(Token = "0x400075F")]
		[FieldOffset(Offset = "0x0")]
		private string m_name;

		[Token(Token = "0x4000760")]
		[FieldOffset(Offset = "0x8")]
		private CookieToken m_token;

		[Token(Token = "0x17000204")]
		internal CookieToken Token
		{
			[Token(Token = "0x60008E4")]
			[Address(RVA = "0x46495A0", Offset = "0x46495A0", VA = "0x46495A0")]
			get
			{
				return default(CookieToken);
			}
		}

		[Token(Token = "0x60008E3")]
		[Address(RVA = "0x4649580", Offset = "0x4649580", VA = "0x4649580")]
		internal RecognizedAttribute(string name, CookieToken token)
		{
		}

		[Token(Token = "0x60008E5")]
		[Address(RVA = "0x4648E40", Offset = "0x4648E40", VA = "0x4648E40")]
		internal bool IsEqualTo(string value)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000753")]
	[FieldOffset(Offset = "0x10")]
	private bool m_eofCookie;

	[Token(Token = "0x4000754")]
	[FieldOffset(Offset = "0x14")]
	private int m_index;

	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x18")]
	private int m_length;

	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x20")]
	private string m_name;

	[Token(Token = "0x4000757")]
	[FieldOffset(Offset = "0x28")]
	private bool m_quoted;

	[Token(Token = "0x4000758")]
	[FieldOffset(Offset = "0x2C")]
	private int m_start;

	[Token(Token = "0x4000759")]
	[FieldOffset(Offset = "0x30")]
	private CookieToken m_token;

	[Token(Token = "0x400075A")]
	[FieldOffset(Offset = "0x34")]
	private int m_tokenLength;

	[Token(Token = "0x400075B")]
	[FieldOffset(Offset = "0x38")]
	private string m_tokenStream;

	[Token(Token = "0x400075C")]
	[FieldOffset(Offset = "0x40")]
	private string m_value;

	[Token(Token = "0x400075D")]
	[FieldOffset(Offset = "0x0")]
	private static RecognizedAttribute[] RecognizedAttributes;

	[Token(Token = "0x400075E")]
	[FieldOffset(Offset = "0x8")]
	private static RecognizedAttribute[] RecognizedServerAttributes;

	[Token(Token = "0x170001FE")]
	internal bool EndOfCookie
	{
		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x4648550", Offset = "0x4648550", VA = "0x4648550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x4648560", Offset = "0x4648560", VA = "0x4648560")]
		set
		{
		}
	}

	[Token(Token = "0x170001FF")]
	internal bool Eof
	{
		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x4648570", Offset = "0x4648570", VA = "0x4648570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000200")]
	internal string Name
	{
		[Token(Token = "0x60008D5")]
		[Address(RVA = "0x4648580", Offset = "0x4648580", VA = "0x4648580")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008D6")]
		[Address(RVA = "0x4648590", Offset = "0x4648590", VA = "0x4648590")]
		set
		{
		}
	}

	[Token(Token = "0x17000201")]
	internal bool Quoted
	{
		[Token(Token = "0x60008D7")]
		[Address(RVA = "0x46485A0", Offset = "0x46485A0", VA = "0x46485A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x46485B0", Offset = "0x46485B0", VA = "0x46485B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000202")]
	internal CookieToken Token
	{
		[Token(Token = "0x60008D9")]
		[Address(RVA = "0x46485C0", Offset = "0x46485C0", VA = "0x46485C0")]
		get
		{
			return default(CookieToken);
		}
		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x46485D0", Offset = "0x46485D0", VA = "0x46485D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000203")]
	internal string Value
	{
		[Token(Token = "0x60008DB")]
		[Address(RVA = "0x46485E0", Offset = "0x46485E0", VA = "0x46485E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008DC")]
		[Address(RVA = "0x46485F0", Offset = "0x46485F0", VA = "0x46485F0")]
		set
		{
		}
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x4648510", Offset = "0x4648510", VA = "0x4648510")]
	internal CookieTokenizer(string tokenStream)
	{
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x4648600", Offset = "0x4648600", VA = "0x4648600")]
	internal string Extract()
	{
		return null;
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x4648660", Offset = "0x4648660", VA = "0x4648660")]
	internal CookieToken FindNext(bool ignoreComma, bool ignoreEquals)
	{
		return default(CookieToken);
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x46489A0", Offset = "0x46489A0", VA = "0x46489A0")]
	internal CookieToken Next(bool first, bool parseResponseCookies)
	{
		return default(CookieToken);
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x4648BE0", Offset = "0x4648BE0", VA = "0x4648BE0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x4648C50", Offset = "0x4648C50", VA = "0x4648C50")]
	internal CookieToken TokenFromName(bool parseResponseCookies)
	{
		return default(CookieToken);
	}
}
