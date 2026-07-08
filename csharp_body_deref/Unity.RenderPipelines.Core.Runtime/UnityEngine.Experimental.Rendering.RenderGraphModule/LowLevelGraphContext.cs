using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000025")]
public class LowLevelGraphContext : IDerivedRendergraphContext
{
	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x10")]
	private InternalRenderGraphContext wrappedContext;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x18")]
	public LowLevelCommandBuffer cmd;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x0")]
	internal static LowLevelCommandBuffer llcmd;

	[Token(Token = "0x17000028")]
	public ScriptableRenderContext renderContext
	{
		[Token(Token = "0x6000348")]
		[Address(RVA = "0x4855C80", Offset = "0x4855C80", VA = "0x4855C80")]
		get
		{
			return default(ScriptableRenderContext);
		}
	}

	[Token(Token = "0x17000029")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6000349")]
		[Address(RVA = "0x4855CA0", Offset = "0x4855CA0", VA = "0x4855CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x600034A")]
		[Address(RVA = "0x4855CC0", Offset = "0x4855CC0", VA = "0x4855CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4855CE0", Offset = "0x4855CE0", VA = "0x4855CE0", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4855DC0", Offset = "0x4855DC0", VA = "0x4855DC0")]
	public LowLevelGraphContext()
	{
	}
}
