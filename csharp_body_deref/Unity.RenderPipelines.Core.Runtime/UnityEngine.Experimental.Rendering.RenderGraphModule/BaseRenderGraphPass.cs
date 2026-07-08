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
