// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_WordInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200001B")]
public struct TMP_WordInfo
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	public TMP_Text textComponent;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x8")]
	public int firstCharacterIndex;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0xC")]
	public int lastCharacterIndex;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x10")]
	public int characterCount;

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4C44540", Offset = "0x4C44540", VA = "0x4C44540")]
	public string GetWord()
	{
		return null;
	}
}
