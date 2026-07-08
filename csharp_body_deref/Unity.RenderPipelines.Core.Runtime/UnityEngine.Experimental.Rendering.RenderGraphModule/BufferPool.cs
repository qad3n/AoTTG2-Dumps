using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200004B")]
internal class BufferPool : RenderGraphResourcePool<GraphicsBuffer>
{
	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4869260", Offset = "0x4869260", VA = "0x4869260", Slot = "8")]
	protected override void ReleaseInternalResource(GraphicsBuffer res)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4869280", Offset = "0x4869280", VA = "0x4869280", Slot = "9")]
	protected override string GetResourceName(GraphicsBuffer res)
	{
		return null;
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x48692B0", Offset = "0x48692B0", VA = "0x48692B0", Slot = "10")]
	protected override long GetResourceSize(GraphicsBuffer res)
	{
		return default(long);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x48692F0", Offset = "0x48692F0", VA = "0x48692F0", Slot = "11")]
	protected override string GetResourceTypeName()
	{
		return null;
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4869320", Offset = "0x4869320", VA = "0x4869320", Slot = "12")]
	protected override int GetSortIndex(GraphicsBuffer res)
	{
		return default(int);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4869350", Offset = "0x4869350", VA = "0x4869350", Slot = "4")]
	public override void PurgeUnusedResources(int currentFrameIndex)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4869900", Offset = "0x4869900", VA = "0x4869900")]
	public BufferPool()
	{
	}
}
