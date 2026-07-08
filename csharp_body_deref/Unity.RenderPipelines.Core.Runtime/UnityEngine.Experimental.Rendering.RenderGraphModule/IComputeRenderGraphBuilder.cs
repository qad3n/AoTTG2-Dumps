using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200001C")]
public interface IComputeRenderGraphBuilder : IBaseRenderGraphBuilder, IDisposable
{
	[Token(Token = "0x6000334")]
	void SetRenderFunc<PassData>(BaseRenderFunc<PassData, ComputeGraphContext> renderFunc) where PassData : class, new();
}
