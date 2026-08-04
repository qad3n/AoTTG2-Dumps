// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HeaderVariantInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x49707E0", Offset = "0x49707E0", VA = "0x49707E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020C")]
	internal CookieVariant Variant
	{
		[Token(Token = "0x60008FF")]
		[Address(RVA = "0x49707F0", Offset = "0x49707F0", VA = "0x49707F0")]
		get
		{
			return default(CookieVariant);
		}
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x49707C0", Offset = "0x49707C0", VA = "0x49707C0")]
	internal HeaderVariantInfo(string name, CookieVariant variant)
	{
	}
}
