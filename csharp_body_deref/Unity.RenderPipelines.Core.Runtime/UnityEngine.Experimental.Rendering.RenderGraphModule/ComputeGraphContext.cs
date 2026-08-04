// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.ComputeGraphContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B7AC70", Offset = "0x4B7AC70", VA = "0x4B7AC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x6000345")]
		[Address(RVA = "0x4B7AC90", Offset = "0x4B7AC90", VA = "0x4B7AC90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4B7ACB0", Offset = "0x4B7ACB0", VA = "0x4B7ACB0", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4B7AD60", Offset = "0x4B7AD60", VA = "0x4B7AD60")]
	public ComputeGraphContext()
	{
	}
}
