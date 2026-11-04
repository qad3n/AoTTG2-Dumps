// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.ImageSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000630")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct ImageSource
{
	[Token(Token = "0x40017AD")]
	[FieldOffset(Offset = "0x0")]
	public Texture2D texture;

	[Token(Token = "0x40017AE")]
	[FieldOffset(Offset = "0x8")]
	public Sprite sprite;

	[Token(Token = "0x40017AF")]
	[FieldOffset(Offset = "0x10")]
	public VectorImage vectorImage;

	[Token(Token = "0x40017B0")]
	[FieldOffset(Offset = "0x18")]
	public RenderTexture renderTexture;

	[Token(Token = "0x6002D4B")]
	[Address(RVA = "0x31ED0A0", Offset = "0x31EB6A0", VA = "0x1831ED0A0")]
	public bool IsNull()
	{
		return default(bool);
	}
}
