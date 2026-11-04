// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.BufferPool
// Update status: NEW in this game update
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
	[Address(RVA = "0x2B88E10", Offset = "0x2B87410", VA = "0x182B88E10", Slot = "8")]
	protected override void ReleaseInternalResource(GraphicsBuffer res)
	{
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x2B88D60", Offset = "0x2B87360", VA = "0x182B88D60", Slot = "9")]
	protected override string GetResourceName(in GraphicsBuffer res)
	{
		return null;
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x2B88D90", Offset = "0x2B87390", VA = "0x182B88D90", Slot = "10")]
	protected override long GetResourceSize(in GraphicsBuffer res)
	{
		return default(long);
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x2B88DE0", Offset = "0x2B873E0", VA = "0x182B88DE0", Slot = "11")]
	protected override string GetResourceTypeName()
	{
		return null;
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x28E9960", Offset = "0x28E7F60", VA = "0x1828E9960", Slot = "12")]
	protected override int GetSortIndex(GraphicsBuffer res)
	{
		return default(int);
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x2B88E30", Offset = "0x2B87430", VA = "0x182B88E30")]
	public BufferPool()
	{
	}
}
