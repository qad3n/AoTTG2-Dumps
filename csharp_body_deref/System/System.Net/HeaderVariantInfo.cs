// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HeaderVariantInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002FC")]
internal struct HeaderVariantInfo
{
	[Token(Token = "0x4000B86")]
	[FieldOffset(Offset = "0x0")]
	private string m_name;

	[Token(Token = "0x4000B87")]
	[FieldOffset(Offset = "0x8")]
	private CookieVariant m_variant;

	[Token(Token = "0x17000460")]
	internal string Name
	{
		[Token(Token = "0x60014BE")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000461")]
	internal CookieVariant Variant
	{
		[Token(Token = "0x60014BF")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(CookieVariant);
		}
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0xCFB160", Offset = "0xCF9760", VA = "0x180CFB160")]
	internal HeaderVariantInfo(string name, CookieVariant variant)
	{
	}
}
