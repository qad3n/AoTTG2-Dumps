// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.LowLevelGraphContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B7AD70", Offset = "0x4B7AD70", VA = "0x4B7AD70")]
		get
		{
			return default(ScriptableRenderContext);
		}
	}

	[Token(Token = "0x17000029")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6000349")]
		[Address(RVA = "0x4B7AD90", Offset = "0x4B7AD90", VA = "0x4B7AD90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x600034A")]
		[Address(RVA = "0x4B7ADB0", Offset = "0x4B7ADB0", VA = "0x4B7ADB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4B7ADD0", Offset = "0x4B7ADD0", VA = "0x4B7ADD0", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4B7AEB0", Offset = "0x4B7AEB0", VA = "0x4B7AEB0")]
	public LowLevelGraphContext()
	{
	}
}
