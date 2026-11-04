// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_WordInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x20000AC")]
public struct TMP_WordInfo
{
	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x0")]
	public TMP_Text textComponent;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x8")]
	public int firstCharacterIndex;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0xC")]
	public int lastCharacterIndex;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x10")]
	public int characterCount;

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x2D69130", Offset = "0x2D67730", VA = "0x182D69130")]
	public string GetWord()
	{
		return null;
	}
}
