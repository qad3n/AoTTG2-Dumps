// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.IDerivedRendergraphContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200026D")]
internal interface IDerivedRendergraphContext
{
	[Token(Token = "0x6001119")]
	void FromInternalContext(InternalRenderGraphContext context);

	[Token(Token = "0x600111A")]
	TextureUVOrigin GetTextureUVOrigin(in TextureHandle textureHandle);
}
