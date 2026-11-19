// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.BufferPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200028B")]
internal class BufferPool : RenderGraphResourcePool<GraphicsBuffer>
{
	[Token(Token = "0x6001233")]
	[Address(RVA = "0x657E250", Offset = "0x657D250", VA = "0x657E250", Slot = "8")]
	protected override void ReleaseInternalResource(GraphicsBuffer res)
	{
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x657E270", Offset = "0x657D270", VA = "0x657E270", Slot = "9")]
	protected override string GetResourceName(in GraphicsBuffer res)
	{
		return null;
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x657E2A0", Offset = "0x657D2A0", VA = "0x657E2A0", Slot = "10")]
	protected override long GetResourceSize(in GraphicsBuffer res)
	{
		return default(long);
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x657E2E0", Offset = "0x657D2E0", VA = "0x657E2E0", Slot = "11")]
	protected override string GetResourceTypeName()
	{
		return null;
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x657E310", Offset = "0x657D310", VA = "0x657E310", Slot = "12")]
	protected override int GetSortIndex(GraphicsBuffer res)
	{
		return default(int);
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x657E340", Offset = "0x657D340", VA = "0x657E340")]
	public BufferPool()
	{
	}
}
