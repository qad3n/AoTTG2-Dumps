// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.IRenderAttachmentRenderGraphBuilder
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000261")]
public interface IRenderAttachmentRenderGraphBuilder : IBaseRenderGraphBuilder, IDisposable
{
	[Token(Token = "0x6001106")]
	[Address(RVA = "0x2B6B1D0", Offset = "0x2B697D0", VA = "0x182B6B1D0", Slot = "0")]
	void SetRenderAttachment(TextureHandle tex, int index, AccessFlags flags = AccessFlags.Write)
	{
	}

	[Token(Token = "0x6001107")]
	void SetRenderAttachment(TextureHandle tex, int index, AccessFlags flags, int mipLevel, int depthSlice);

	[Token(Token = "0x6001108")]
	[Address(RVA = "0x2B6B0F0", Offset = "0x2B696F0", VA = "0x182B6B0F0", Slot = "2")]
	void SetRenderAttachmentDepth(TextureHandle tex, AccessFlags flags = AccessFlags.Write)
	{
	}

	[Token(Token = "0x6001109")]
	void SetRenderAttachmentDepth(TextureHandle tex, AccessFlags flags, int mipLevel, int depthSlice);

	[Token(Token = "0x600110A")]
	TextureHandle SetRandomAccessAttachment(TextureHandle tex, int index, AccessFlags flags = AccessFlags.ReadWrite);

	[Token(Token = "0x600110B")]
	BufferHandle UseBufferRandomAccess(BufferHandle tex, int index, AccessFlags flags = AccessFlags.Read);

	[Token(Token = "0x600110C")]
	BufferHandle UseBufferRandomAccess(BufferHandle tex, int index, bool preserveCounterValue, AccessFlags flags = AccessFlags.Read);
}
