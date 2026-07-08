using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000022")]
public struct RenderGraphContext : IDerivedRendergraphContext
{
	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x0")]
	private InternalRenderGraphContext wrappedContext;

	[Token(Token = "0x17000020")]
	public ScriptableRenderContext renderContext
	{
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x4855950", Offset = "0x4855950", VA = "0x4855950")]
		get
		{
			return default(ScriptableRenderContext);
		}
	}

	[Token(Token = "0x17000021")]
	public CommandBuffer cmd
	{
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x4855970", Offset = "0x4855970", VA = "0x4855970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000022")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x600033E")]
		[Address(RVA = "0x4855990", Offset = "0x4855990", VA = "0x4855990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x600033F")]
		[Address(RVA = "0x48559B0", Offset = "0x48559B0", VA = "0x48559B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4855940", Offset = "0x4855940", VA = "0x4855940", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}
}
