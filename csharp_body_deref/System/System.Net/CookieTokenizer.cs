// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CookieTokenizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x496E6A0", Offset = "0x496E6A0", VA = "0x496E6A0")]
			get
			{
				return default(CookieToken);
			}
		}

		[Token(Token = "0x60008E3")]
		[Address(RVA = "0x496E680", Offset = "0x496E680", VA = "0x496E680")]
		internal RecognizedAttribute(string name, CookieToken token)
		{
		}

		[Token(Token = "0x60008E5")]
		[Address(RVA = "0x496DF40", Offset = "0x496DF40", VA = "0x496DF40")]
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
		[Address(RVA = "0x496D650", Offset = "0x496D650", VA = "0x496D650")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x496D660", Offset = "0x496D660", VA = "0x496D660")]
		set
		{
		}
	}

	[Token(Token = "0x170001FF")]
	internal bool Eof
	{
		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x496D670", Offset = "0x496D670", VA = "0x496D670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000200")]
	internal string Name
	{
		[Token(Token = "0x60008D5")]
		[Address(RVA = "0x496D680", Offset = "0x496D680", VA = "0x496D680")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008D6")]
		[Address(RVA = "0x496D690", Offset = "0x496D690", VA = "0x496D690")]
		set
		{
		}
	}

	[Token(Token = "0x17000201")]
	internal bool Quoted
	{
		[Token(Token = "0x60008D7")]
		[Address(RVA = "0x496D6A0", Offset = "0x496D6A0", VA = "0x496D6A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008D8")]
		[Address(RVA = "0x496D6B0", Offset = "0x496D6B0", VA = "0x496D6B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000202")]
	internal CookieToken Token
	{
		[Token(Token = "0x60008D9")]
		[Address(RVA = "0x496D6C0", Offset = "0x496D6C0", VA = "0x496D6C0")]
		get
		{
			return default(CookieToken);
		}
		[Token(Token = "0x60008DA")]
		[Address(RVA = "0x496D6D0", Offset = "0x496D6D0", VA = "0x496D6D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000203")]
	internal string Value
	{
		[Token(Token = "0x60008DB")]
		[Address(RVA = "0x496D6E0", Offset = "0x496D6E0", VA = "0x496D6E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008DC")]
		[Address(RVA = "0x496D6F0", Offset = "0x496D6F0", VA = "0x496D6F0")]
		set
		{
		}
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x496D610", Offset = "0x496D610", VA = "0x496D610")]
	internal CookieTokenizer(string tokenStream)
	{
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x496D700", Offset = "0x496D700", VA = "0x496D700")]
	internal string Extract()
	{
		return null;
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x496D760", Offset = "0x496D760", VA = "0x496D760")]
	internal CookieToken FindNext(bool ignoreComma, bool ignoreEquals)
	{
		return default(CookieToken);
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x496DAA0", Offset = "0x496DAA0", VA = "0x496DAA0")]
	internal CookieToken Next(bool first, bool parseResponseCookies)
	{
		return default(CookieToken);
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x496DCE0", Offset = "0x496DCE0", VA = "0x496DCE0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x496DD50", Offset = "0x496DD50", VA = "0x496DD50")]
	internal CookieToken TokenFromName(bool parseResponseCookies)
	{
		return default(CookieToken);
	}
}
