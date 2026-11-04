// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000260")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public interface IBaseRenderGraphBuilder : IDisposable
{
	[Token(Token = "0x60010F7")]
	void UseTexture(in TextureHandle input, AccessFlags flags = AccessFlags.Read);

	[Token(Token = "0x60010F8")]
	void UseGlobalTexture(int propertyId, AccessFlags flags = AccessFlags.Read);

	[Token(Token = "0x60010F9")]
	void UseAllGlobalTextures(bool enable);

	[Token(Token = "0x60010FA")]
	void SetGlobalTextureAfterPass(in TextureHandle input, int propertyId);

	[Token(Token = "0x60010FB")]
	BufferHandle UseBuffer(in BufferHandle input, AccessFlags flags = AccessFlags.Read);

	[Token(Token = "0x60010FC")]
	TextureHandle CreateTransientTexture(in TextureDesc desc);

	[Token(Token = "0x60010FD")]
	TextureHandle CreateTransientTexture(in TextureHandle texture);

	[Token(Token = "0x60010FE")]
	BufferHandle CreateTransientBuffer(in BufferDesc desc);

	[Token(Token = "0x60010FF")]
	BufferHandle CreateTransientBuffer(in BufferHandle computebuffer);

	[Token(Token = "0x6001100")]
	void UseRendererList(in RendererListHandle input);

	[Token(Token = "0x6001101")]
	void EnableAsyncCompute(bool value);

	[Token(Token = "0x6001102")]
	void AllowPassCulling(bool value);

	[Token(Token = "0x6001103")]
	void AllowGlobalStateModification(bool value);

	[Token(Token = "0x6001104")]
	void EnableFoveatedRasterization(bool value);

	[Token(Token = "0x6001105")]
	void GenerateDebugData(bool value);
}
