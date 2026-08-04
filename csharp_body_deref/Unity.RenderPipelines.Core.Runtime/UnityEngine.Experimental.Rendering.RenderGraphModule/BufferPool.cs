// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.BufferPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200004B")]
internal class BufferPool : RenderGraphResourcePool<GraphicsBuffer>
{
	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4B8E350", Offset = "0x4B8E350", VA = "0x4B8E350", Slot = "8")]
	protected override void ReleaseInternalResource(GraphicsBuffer res)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4B8E370", Offset = "0x4B8E370", VA = "0x4B8E370", Slot = "9")]
	protected override string GetResourceName(GraphicsBuffer res)
	{
		return null;
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4B8E3A0", Offset = "0x4B8E3A0", VA = "0x4B8E3A0", Slot = "10")]
	protected override long GetResourceSize(GraphicsBuffer res)
	{
		return default(long);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4B8E3E0", Offset = "0x4B8E3E0", VA = "0x4B8E3E0", Slot = "11")]
	protected override string GetResourceTypeName()
	{
		return null;
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4B8E410", Offset = "0x4B8E410", VA = "0x4B8E410", Slot = "12")]
	protected override int GetSortIndex(GraphicsBuffer res)
	{
		return default(int);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4B8E440", Offset = "0x4B8E440", VA = "0x4B8E440", Slot = "4")]
	public override void PurgeUnusedResources(int currentFrameIndex)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4B8E9F0", Offset = "0x4B8E9F0", VA = "0x4B8E9F0")]
	public BufferPool()
	{
	}
}
