// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.TexturePool
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x20002A3")]
internal class TexturePool : RenderGraphResourcePool<RTHandle>
{
	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x2BA77F0", Offset = "0x2BA5DF0", VA = "0x182BA77F0", Slot = "8")]
	protected override void ReleaseInternalResource(RTHandle res)
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x2BA7740", Offset = "0x2BA5D40", VA = "0x182BA7740", Slot = "9")]
	protected override string GetResourceName(in RTHandle res)
	{
		return null;
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x2BA7770", Offset = "0x2BA5D70", VA = "0x182BA7770", Slot = "10")]
	protected override long GetResourceSize(in RTHandle res)
	{
		return default(long);
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x2BA77A0", Offset = "0x2BA5DA0", VA = "0x182BA77A0", Slot = "11")]
	protected override string GetResourceTypeName()
	{
		return null;
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x2BA77D0", Offset = "0x2BA5DD0", VA = "0x182BA77D0", Slot = "12")]
	protected override int GetSortIndex(RTHandle res)
	{
		return default(int);
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x2BA7810", Offset = "0x2BA5E10", VA = "0x182BA7810")]
	public TexturePool()
	{
	}
}
