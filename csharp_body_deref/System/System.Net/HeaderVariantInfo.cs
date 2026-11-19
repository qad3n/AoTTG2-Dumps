// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HeaderVariantInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002BD")]
internal struct HeaderVariantInfo
{
	[Token(Token = "0x4000AB7")]
	[FieldOffset(Offset = "0x0")]
	private string m_name;

	[Token(Token = "0x4000AB8")]
	[FieldOffset(Offset = "0x8")]
	private CookieVariant m_variant;

	[Token(Token = "0x17000431")]
	internal string Name
	{
		[Token(Token = "0x6001300")]
		[Address(RVA = "0x62B7600", Offset = "0x62B6600", VA = "0x62B7600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000432")]
	internal CookieVariant Variant
	{
		[Token(Token = "0x6001301")]
		[Address(RVA = "0x62B7610", Offset = "0x62B6610", VA = "0x62B7610")]
		get
		{
			return default(CookieVariant);
		}
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x62B75E0", Offset = "0x62B65E0", VA = "0x62B75E0")]
	internal HeaderVariantInfo(string name, CookieVariant variant)
	{
	}
}
