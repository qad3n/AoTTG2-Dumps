// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraphResource
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x20002A7")]
[DebuggerDisplay("Resource ({GetType().Name}:{GetName()})")]
internal abstract class RenderGraphResource<DescType, ResType> : IRenderGraphResource where DescType : struct where ResType : class
{
	[Token(Token = "0x4000BED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public DescType desc;

	[Token(Token = "0x4000BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public bool validDesc;

	[Token(Token = "0x4000BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public ResType graphicsResource;

	[Token(Token = "0x4000BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected RenderGraphResourcePool<ResType> m_Pool;

	[Token(Token = "0x6001312")]
	protected RenderGraphResource()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001313")]
	public override void Reset([Optional] IRenderGraphResourcePool pool)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001314")]
	public override bool IsCreated()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001315")]
	public override void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x6001316")]
	public override void CreatePooledGraphicsResource(int frameIndex, int executionCount)
	{
	}

	[Token(Token = "0x6001317")]
	public override void ReleasePooledGraphicsResource(int frameIndex, int executionCount)
	{
	}
}
