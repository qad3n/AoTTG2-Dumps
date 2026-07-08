using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000060")]
[DebuggerDisplay("Resource ({GetType().Name}:{GetName()})")]
internal abstract class RenderGraphResource<DescType, ResType> : IRenderGraphResource where DescType : struct where ResType : class
{
	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x0")]
	public DescType desc;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x0")]
	public ResType graphicsResource;

	[Token(Token = "0x6000540")]
	protected RenderGraphResource()
	{
	}

	[Token(Token = "0x6000541")]
	public override void Reset(IRenderGraphResourcePool pool)
	{
	}

	[Token(Token = "0x6000542")]
	public override bool IsCreated()
	{
		return default(bool);
	}

	[Token(Token = "0x6000543")]
	public override void ReleaseGraphicsResource()
	{
	}
}
