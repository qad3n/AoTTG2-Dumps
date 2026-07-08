using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000174")]
internal struct HeaderVariantInfo
{
	[Token(Token = "0x4000770")]
	[FieldOffset(Offset = "0x0")]
	private string m_name;

	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x8")]
	private CookieVariant m_variant;

	[Token(Token = "0x1700020B")]
	internal string Name
	{
		[Token(Token = "0x60008FE")]
		[Address(RVA = "0x464B6E0", Offset = "0x464B6E0", VA = "0x464B6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020C")]
	internal CookieVariant Variant
	{
		[Token(Token = "0x60008FF")]
		[Address(RVA = "0x464B6F0", Offset = "0x464B6F0", VA = "0x464B6F0")]
		get
		{
			return default(CookieVariant);
		}
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x464B6C0", Offset = "0x464B6C0", VA = "0x464B6C0")]
	internal HeaderVariantInfo(string name, CookieVariant variant)
	{
	}
}
