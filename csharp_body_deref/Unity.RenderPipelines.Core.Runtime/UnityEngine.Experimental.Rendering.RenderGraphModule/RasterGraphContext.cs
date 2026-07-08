using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000023")]
public struct RasterGraphContext : IDerivedRendergraphContext
{
	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x0")]
	private InternalRenderGraphContext wrappedContext;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x8")]
	public RasterCommandBuffer cmd;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x0")]
	internal static RasterCommandBuffer rastercmd;

	[Token(Token = "0x17000024")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6000340")]
		[Address(RVA = "0x48559D0", Offset = "0x48559D0", VA = "0x48559D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x48559F0", Offset = "0x48559F0", VA = "0x48559F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x4855A10", Offset = "0x4855A10", VA = "0x4855A10", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}
}
