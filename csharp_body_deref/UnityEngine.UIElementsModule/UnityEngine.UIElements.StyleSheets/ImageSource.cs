// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.ImageSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000538")]
internal struct ImageSource
{
	[Token(Token = "0x4001202")]
	[FieldOffset(Offset = "0x0")]
	public Texture2D texture;

	[Token(Token = "0x4001203")]
	[FieldOffset(Offset = "0x8")]
	public Sprite sprite;

	[Token(Token = "0x4001204")]
	[FieldOffset(Offset = "0x10")]
	public VectorImage vectorImage;

	[Token(Token = "0x4001205")]
	[FieldOffset(Offset = "0x18")]
	public RenderTexture renderTexture;

	[Token(Token = "0x6001FE9")]
	[Address(RVA = "0x4FC6EA0", Offset = "0x4FC6EA0", VA = "0x4FC6EA0")]
	public bool IsNull()
	{
		return default(bool);
	}
}
