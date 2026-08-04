// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.BaseRenderGraphPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000042")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal abstract class BaseRenderGraphPass<PassData> : RenderGraphPass where PassData : class, new()
{
	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x0")]
	internal PassData data;

	[Token(Token = "0x6000472")]
	public void Initialize(int passIndex, PassData passData, string passName, ProfilingSampler sampler)
	{
	}

	[Token(Token = "0x6000473")]
	protected BaseRenderGraphPass()
	{
	}
}
