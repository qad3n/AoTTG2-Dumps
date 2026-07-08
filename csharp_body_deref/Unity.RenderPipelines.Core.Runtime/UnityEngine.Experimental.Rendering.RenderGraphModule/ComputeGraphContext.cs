using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000024")]
public class ComputeGraphContext : IDerivedRendergraphContext
{
	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x10")]
	private InternalRenderGraphContext wrappedContext;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x18")]
	public ComputeCommandBuffer cmd;

	[Token(Token = "0x17000026")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6000344")]
		[Address(RVA = "0x4855B80", Offset = "0x4855B80", VA = "0x4855B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6000345")]
		[Address(RVA = "0x4855BA0", Offset = "0x4855BA0", VA = "0x4855BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4855BC0", Offset = "0x4855BC0", VA = "0x4855BC0", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4855C70", Offset = "0x4855C70", VA = "0x4855C70")]
	public ComputeGraphContext()
	{
	}
}
