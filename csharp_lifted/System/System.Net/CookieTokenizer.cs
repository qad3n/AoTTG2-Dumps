// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CookieTokenizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002B6")]
internal class CookieTokenizer
{
	[Token(Token = "0x20002B7")]
	private struct RecognizedAttribute
	{
		[Token(Token = "0x4000AA6")]
		[FieldOffset(Offset = "0x0")]
		private string m_name;

		[Token(Token = "0x4000AA7")]
		[FieldOffset(Offset = "0x8")]
		private CookieToken m_token;

		[Token(Token = "0x1700042A")]
		internal CookieToken Token
		{
			[Token(Token = "0x60012E6")]
			[Address(RVA = "0x62B5920", Offset = "0x62B4920", VA = "0x62B5920")]
			get
			{
				return default(CookieToken);
			}
		}

		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x62B5900", Offset = "0x62B4900", VA = "0x62B5900")]
		internal RecognizedAttribute(string name, CookieToken token)
		{
		}

		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x62B51B0", Offset = "0x62B41B0", VA = "0x62B51B0")]
		internal bool IsEqualTo(string value)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x10")]
	private bool m_eofCookie;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x14")]
	private int m_index;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x18")]
	private int m_length;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x20")]
	private string m_name;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x28")]
	private bool m_quoted;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x2C")]
	private int m_start;

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x30")]
	private CookieToken m_token;

	[Token(Token = "0x4000AA1")]
	[FieldOffset(Offset = "0x34")]
	private int m_tokenLength;

	[Token(Token = "0x4000AA2")]
	[FieldOffset(Offset = "0x38")]
	private string m_tokenStream;

	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x40")]
	private string m_value;

	[Token(Token = "0x4000AA4")]
	[FieldOffset(Offset = "0x0")]
	private static RecognizedAttribute[] RecognizedAttributes;

	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x8")]
	private static RecognizedAttribute[] RecognizedServerAttributes;

	[Token(Token = "0x17000424")]
	internal bool EndOfCookie
	{
		[Token(Token = "0x60012D4")]
		[Address(RVA = "0x62B48E0", Offset = "0x62B38E0", VA = "0x62B48E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012D5")]
		[Address(RVA = "0x62B48F0", Offset = "0x62B38F0", VA = "0x62B48F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000425")]
	internal bool Eof
	{
		[Token(Token = "0x60012D6")]
		[Address(RVA = "0x62B4900", Offset = "0x62B3900", VA = "0x62B4900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000426")]
	internal string Name
	{
		[Token(Token = "0x60012D7")]
		[Address(RVA = "0x62B4910", Offset = "0x62B3910", VA = "0x62B4910")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012D8")]
		[Address(RVA = "0x62B4920", Offset = "0x62B3920", VA = "0x62B4920")]
		set
		{
		}
	}

	[Token(Token = "0x17000427")]
	internal bool Quoted
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x62B4930", Offset = "0x62B3930", VA = "0x62B4930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012DA")]
		[Address(RVA = "0x62B4940", Offset = "0x62B3940", VA = "0x62B4940")]
		set
		{
		}
	}

	[Token(Token = "0x17000428")]
	internal CookieToken Token
	{
		[Token(Token = "0x60012DB")]
		[Address(RVA = "0x62B4950", Offset = "0x62B3950", VA = "0x62B4950")]
		get
		{
			return default(CookieToken);
		}
		[Token(Token = "0x60012DC")]
		[Address(RVA = "0x62B4960", Offset = "0x62B3960", VA = "0x62B4960")]
		set
		{
		}
	}

	[Token(Token = "0x17000429")]
	internal string Value
	{
		[Token(Token = "0x60012DD")]
		[Address(RVA = "0x62B4970", Offset = "0x62B3970", VA = "0x62B4970")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012DE")]
		[Address(RVA = "0x62B4980", Offset = "0x62B3980", VA = "0x62B4980")]
		set
		{
		}
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x62B48A0", Offset = "0x62B38A0", VA = "0x62B48A0")]
	internal CookieTokenizer(string tokenStream)
	{
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x62B4990", Offset = "0x62B3990", VA = "0x62B4990")]
	internal string Extract()
	{
		return null;
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x62B49F0", Offset = "0x62B39F0", VA = "0x62B49F0")]
	internal CookieToken FindNext(bool ignoreComma, bool ignoreEquals)
	{
		return default(CookieToken);
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x62B4CF0", Offset = "0x62B3CF0", VA = "0x62B4CF0")]
	internal CookieToken Next(bool first, bool parseResponseCookies)
	{
		return default(CookieToken);
	}

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x62B4F40", Offset = "0x62B3F40", VA = "0x62B4F40")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x62B4FB0", Offset = "0x62B3FB0", VA = "0x62B4FB0")]
	internal CookieToken TokenFromName(bool parseResponseCookies)
	{
		return default(CookieToken);
	}
}
