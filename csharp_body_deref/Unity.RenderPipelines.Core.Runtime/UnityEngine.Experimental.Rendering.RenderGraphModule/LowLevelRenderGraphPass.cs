// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.LowLevelRenderGraphPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000046")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal sealed class LowLevelRenderGraphPass<PassData> : BaseRenderGraphPass<PassData> where PassData : class, new()
{
	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x0")]
	internal BaseRenderFunc<PassData, LowLevelGraphContext> renderFunc;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x0")]
	internal static LowLevelGraphContext c;

	[Token(Token = "0x6000483")]
	public override void Execute(InternalRenderGraphContext renderGraphContext)
	{
	}

	[Token(Token = "0x6000484")]
	public override void Release(RenderGraphObjectPool pool)
	{
	}

	[Token(Token = "0x6000485")]
	public override bool HasRenderFunc()
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	public LowLevelRenderGraphPass()
	{
	}
}
