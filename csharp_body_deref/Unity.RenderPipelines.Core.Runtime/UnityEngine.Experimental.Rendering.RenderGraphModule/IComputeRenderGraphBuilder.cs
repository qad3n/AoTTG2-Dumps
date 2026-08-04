// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.IComputeRenderGraphBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200001C")]
public interface IComputeRenderGraphBuilder : IBaseRenderGraphBuilder, IDisposable
{
	[Token(Token = "0x6000334")]
	void SetRenderFunc<PassData>(BaseRenderFunc<PassData, ComputeGraphContext> renderFunc) where PassData : class, new();
}
