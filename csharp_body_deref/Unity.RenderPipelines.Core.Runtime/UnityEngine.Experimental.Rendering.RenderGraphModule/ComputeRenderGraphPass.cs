using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000044")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal sealed class ComputeRenderGraphPass<PassData> : BaseRenderGraphPass<PassData> where PassData : class, new()
{
	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x0")]
	internal BaseRenderFunc<PassData, ComputeGraphContext> renderFunc;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x0")]
	internal static ComputeGraphContext c;

	[Token(Token = "0x6000479")]
	public override void Execute(InternalRenderGraphContext renderGraphContext)
	{
	}

	[Token(Token = "0x600047A")]
	public override void Release(RenderGraphObjectPool pool)
	{
	}

	[Token(Token = "0x600047B")]
	public override bool HasRenderFunc()
	{
		return default(bool);
	}

	[Token(Token = "0x600047C")]
	public ComputeRenderGraphPass()
	{
	}
}
