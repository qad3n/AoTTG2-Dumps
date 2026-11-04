// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextCacheEntry
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000063")]
internal struct TextCacheEntry
{
	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x0")]
	public TextHandle textHandle;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x8")]
	public TextInfo textInfo;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x10")]
	public float lastTimeInCache;

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x3056B90", Offset = "0x3055190", VA = "0x183056B90")]
	public TextCacheEntry(TextHandle handle, TextInfo info, float time = 0f)
	{
	}
}
