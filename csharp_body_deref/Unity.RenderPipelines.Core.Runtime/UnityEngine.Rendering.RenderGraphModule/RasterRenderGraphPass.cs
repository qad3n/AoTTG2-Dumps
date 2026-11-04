// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RasterRenderGraphPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000281")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal sealed class RasterRenderGraphPass<PassData> : BaseRenderGraphPass<PassData, RasterGraphContext> where PassData : class, new()
{
	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x0")]
	internal static RasterGraphContext c;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001213")]
	public override void Execute(InternalRenderGraphContext renderGraphContext)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001214")]
	public override void Release(RenderGraphObjectPool pool)
	{
	}

	[Token(Token = "0x6001215")]
	public RasterRenderGraphPass()
	{
	}
}
