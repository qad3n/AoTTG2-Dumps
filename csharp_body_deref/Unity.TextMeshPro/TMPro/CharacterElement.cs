// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.CharacterElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000097")]
internal struct CharacterElement
{
	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x0")]
	private uint m_Unicode;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x8")]
	private TMP_TextElement m_TextElement;

	[Token(Token = "0x17000174")]
	public uint Unicode
	{
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x67584A0", Offset = "0x67574A0", VA = "0x67584A0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x67584B0", Offset = "0x67574B0", VA = "0x67584B0")]
		set
		{
		}
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x67584C0", Offset = "0x67574C0", VA = "0x67584C0")]
	public CharacterElement(TMP_TextElement textElement)
	{
	}
}
