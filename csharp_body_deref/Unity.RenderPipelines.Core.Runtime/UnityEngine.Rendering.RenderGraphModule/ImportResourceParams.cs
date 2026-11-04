// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.ImportResourceParams
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000292")]
public struct ImportResourceParams
{
	[Token(Token = "0x4000B80")]
	[FieldOffset(Offset = "0x0")]
	public bool clearOnFirstUse;

	[Token(Token = "0x4000B81")]
	[FieldOffset(Offset = "0x4")]
	public Color clearColor;

	[Token(Token = "0x4000B82")]
	[FieldOffset(Offset = "0x14")]
	public bool discardOnLastUse;

	[Token(Token = "0x4000B83")]
	[FieldOffset(Offset = "0x18")]
	public TextureUVOrigin textureUVOrigin;
}
