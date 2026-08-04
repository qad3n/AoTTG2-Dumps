// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RasterGraphContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B7AAC0", Offset = "0x4B7AAC0", VA = "0x4B7AAC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x4B7AAE0", Offset = "0x4B7AAE0", VA = "0x4B7AAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x4B7AB00", Offset = "0x4B7AB00", VA = "0x4B7AB00", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}
}
