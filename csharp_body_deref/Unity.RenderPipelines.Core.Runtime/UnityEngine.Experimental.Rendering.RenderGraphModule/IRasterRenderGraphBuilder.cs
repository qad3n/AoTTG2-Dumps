using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200001E")]
public interface IRasterRenderGraphBuilder : IBaseRenderGraphBuilder, IDisposable
{
	[Token(Token = "0x6000336")]
	TextureHandle UseTextureFragment(TextureHandle tex, int index, AccessFlags flags = AccessFlags.Write);

	[Token(Token = "0x6000337")]
	TextureHandle UseTextureFragmentDepth(TextureHandle tex, AccessFlags flags = AccessFlags.Write);

	[Token(Token = "0x6000338")]
	void SetRenderFunc<PassData>(BaseRenderFunc<PassData, RasterGraphContext> renderFunc) where PassData : class, new();
}
