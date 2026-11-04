// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.BaseRenderGraphPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200027E")]
[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
internal abstract class BaseRenderGraphPass<PassData, TRenderGraphContext> : RenderGraphPass where PassData : class, new()
{
	[Token(Token = "0x4000B55")]
	[FieldOffset(Offset = "0x0")]
	internal PassData data;

	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x0")]
	internal BaseRenderFunc<PassData, TRenderGraphContext> renderFunc;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001206")]
	public void Initialize(int passIndex, PassData passData, string passName, RenderGraphPassType passType, ProfilingSampler sampler)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001207")]
	public override void Release(RenderGraphObjectPool pool)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001208")]
	public override bool HasRenderFunc()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001209")]
	public override int GetRenderFuncHash()
	{
		return default(int);
	}

	[Token(Token = "0x600120A")]
	protected BaseRenderGraphPass()
	{
	}
}
