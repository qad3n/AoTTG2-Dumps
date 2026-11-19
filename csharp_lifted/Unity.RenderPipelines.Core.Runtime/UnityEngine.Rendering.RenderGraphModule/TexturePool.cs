// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.TexturePool
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6586EC0", Offset = "0x6585EC0", VA = "0x6586EC0", Slot = "8")]
	protected override void ReleaseInternalResource(RTHandle res)
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x6586EE0", Offset = "0x6585EE0", VA = "0x6586EE0", Slot = "9")]
	protected override string GetResourceName(in RTHandle res)
	{
		return null;
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x6586F00", Offset = "0x6585F00", VA = "0x6586F00", Slot = "10")]
	protected override long GetResourceSize(in RTHandle res)
	{
		return default(long);
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x6586F20", Offset = "0x6585F20", VA = "0x6586F20", Slot = "11")]
	protected override string GetResourceTypeName()
	{
		return null;
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x6586F50", Offset = "0x6585F50", VA = "0x6586F50", Slot = "12")]
	protected override int GetSortIndex(RTHandle res)
	{
		return default(int);
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x657F770", Offset = "0x657E770", VA = "0x657F770")]
	public TexturePool()
	{
	}
}
