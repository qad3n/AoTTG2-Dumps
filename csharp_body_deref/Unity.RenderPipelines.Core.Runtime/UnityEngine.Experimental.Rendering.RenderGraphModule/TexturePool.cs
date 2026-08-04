// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.TexturePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000060")]
internal class TexturePool : RenderGraphResourcePool<RTHandle>
{
	[Token(Token = "0x600053D")]
	[Address(RVA = "0x4B94140", Offset = "0x4B94140", VA = "0x4B94140", Slot = "8")]
	protected override void ReleaseInternalResource(RTHandle res)
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x4B94160", Offset = "0x4B94160", VA = "0x4B94160", Slot = "9")]
	protected override string GetResourceName(RTHandle res)
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x4B94180", Offset = "0x4B94180", VA = "0x4B94180", Slot = "10")]
	protected override long GetResourceSize(RTHandle res)
	{
		return default(long);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4B941A0", Offset = "0x4B941A0", VA = "0x4B941A0", Slot = "11")]
	protected override string GetResourceTypeName()
	{
		return null;
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4B941D0", Offset = "0x4B941D0", VA = "0x4B941D0", Slot = "12")]
	protected override int GetSortIndex(RTHandle res)
	{
		return default(int);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x4B941F0", Offset = "0x4B941F0", VA = "0x4B941F0", Slot = "4")]
	public override void PurgeUnusedResources(int currentFrameIndex)
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x4B8F7F0", Offset = "0x4B8F7F0", VA = "0x4B8F7F0")]
	public TexturePool()
	{
	}
}
