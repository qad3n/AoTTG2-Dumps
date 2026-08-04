// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B7AA40", Offset = "0x4B7AA40", VA = "0x4B7AA40")]
		get
		{
			return default(ScriptableRenderContext);
		}
	}

	[Token(Token = "0x17000021")]
	public CommandBuffer cmd
	{
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x4B7AA60", Offset = "0x4B7AA60", VA = "0x4B7AA60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000022")]
	public RenderGraphObjectPool renderGraphPool
	{
		[Token(Token = "0x600033E")]
		[Address(RVA = "0x4B7AA80", Offset = "0x4B7AA80", VA = "0x4B7AA80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000023")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x600033F")]
		[Address(RVA = "0x4B7AAA0", Offset = "0x4B7AAA0", VA = "0x4B7AAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4B7AA30", Offset = "0x4B7AA30", VA = "0x4B7AA30", Slot = "4")]
	public void FromInternalContext(InternalRenderGraphContext context)
	{
	}
}
