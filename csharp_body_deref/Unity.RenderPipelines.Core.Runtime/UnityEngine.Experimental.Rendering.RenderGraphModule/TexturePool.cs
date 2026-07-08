using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005C")]
internal class TexturePool : RenderGraphResourcePool<RTHandle>
{
	[Token(Token = "0x600051E")]
	[Address(RVA = "0x486EE90", Offset = "0x486EE90", VA = "0x486EE90", Slot = "8")]
	protected override void ReleaseInternalResource(RTHandle res)
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x486EEB0", Offset = "0x486EEB0", VA = "0x486EEB0", Slot = "9")]
	protected override string GetResourceName(RTHandle res)
	{
		return null;
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x486EED0", Offset = "0x486EED0", VA = "0x486EED0", Slot = "10")]
	protected override long GetResourceSize(RTHandle res)
	{
		return default(long);
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x486EEF0", Offset = "0x486EEF0", VA = "0x486EEF0", Slot = "11")]
	protected override string GetResourceTypeName()
	{
		return null;
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x486EF20", Offset = "0x486EF20", VA = "0x486EF20", Slot = "12")]
	protected override int GetSortIndex(RTHandle res)
	{
		return default(int);
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x486EF40", Offset = "0x486EF40", VA = "0x486EF40", Slot = "4")]
	public override void PurgeUnusedResources(int currentFrameIndex)
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x486A700", Offset = "0x486A700", VA = "0x486A700")]
	public TexturePool()
	{
	}
}
