using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000045")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal sealed class RasterRenderGraphPass<PassData> : BaseRenderGraphPass<PassData> where PassData : class, new()
{
	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x0")]
	internal BaseRenderFunc<PassData, RasterGraphContext> renderFunc;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x0")]
	internal static RasterGraphContext c;

	[Token(Token = "0x600047E")]
	public override void Execute(InternalRenderGraphContext renderGraphContext)
	{
	}

	[Token(Token = "0x600047F")]
	public override void Release(RenderGraphObjectPool pool)
	{
	}

	[Token(Token = "0x6000480")]
	public override bool HasRenderFunc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000481")]
	public RasterRenderGraphPass()
	{
	}
}
