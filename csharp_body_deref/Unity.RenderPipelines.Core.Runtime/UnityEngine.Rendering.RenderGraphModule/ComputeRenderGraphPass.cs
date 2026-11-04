// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.ComputeRenderGraphPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000280")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal sealed class ComputeRenderGraphPass<PassData> : BaseRenderGraphPass<PassData, ComputeGraphContext> where PassData : class, new()
{
	[Token(Token = "0x4000B58")]
	[FieldOffset(Offset = "0x0")]
	internal static ComputeGraphContext c;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600120F")]
	public override void Execute(InternalRenderGraphContext renderGraphContext)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001210")]
	public override void Release(RenderGraphObjectPool pool)
	{
	}

	[Token(Token = "0x6001211")]
	public ComputeRenderGraphPass()
	{
	}
}
