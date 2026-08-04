// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005A")]
[DebuggerDisplay("Resource ({GetType().Name}:{GetName()})")]
internal abstract class RenderGraphResource<DescType, ResType> : IRenderGraphResource where DescType : struct where ResType : class
{
	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x0")]
	public DescType desc;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x0")]
	public ResType graphicsResource;

	[Token(Token = "0x6000522")]
	protected RenderGraphResource()
	{
	}

	[Token(Token = "0x6000523")]
	public override void Reset(IRenderGraphResourcePool pool)
	{
	}

	[Token(Token = "0x6000524")]
	public override bool IsCreated()
	{
		return default(bool);
	}

	[Token(Token = "0x6000525")]
	public override void ReleaseGraphicsResource()
	{
	}
}
