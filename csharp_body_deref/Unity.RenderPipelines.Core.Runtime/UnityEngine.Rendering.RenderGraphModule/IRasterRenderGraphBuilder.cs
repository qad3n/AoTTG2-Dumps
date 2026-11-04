// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.IRasterRenderGraphBuilder
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000264")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public interface IRasterRenderGraphBuilder : IRenderAttachmentRenderGraphBuilder, IBaseRenderGraphBuilder, IDisposable
{
	[Token(Token = "0x600110F")]
	[Address(RVA = "0x2B6B020", Offset = "0x2B69620", VA = "0x182B6B020", Slot = "0")]
	void SetInputAttachment(TextureHandle tex, int index, AccessFlags flags = AccessFlags.Read)
	{
	}

	[Token(Token = "0x6001110")]
	void SetInputAttachment(TextureHandle tex, int index, AccessFlags flags, int mipLevel, int depthSlice);

	[Token(Token = "0x6001111")]
	void SetShadingRateImageAttachment(in TextureHandle tex);

	[Token(Token = "0x6001112")]
	void SetShadingRateFragmentSize(ShadingRateFragmentSize shadingRateFragmentSize);

	[Token(Token = "0x6001113")]
	void SetShadingRateCombiner(ShadingRateCombinerStage stage, ShadingRateCombiner combiner);

	[Token(Token = "0x6001114")]
	void SetExtendedFeatureFlags(ExtendedFeatureFlags extendedFeatureFlags);

	[Token(Token = "0x6001115")]
	void SetRenderFunc<PassData>(BaseRenderFunc<PassData, RasterGraphContext> renderFunc) where PassData : class, new();
}
