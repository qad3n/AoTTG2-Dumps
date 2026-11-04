// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.PooledResourceEntry
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200028D")]
internal readonly struct PooledResourceEntry<Type> where Type : class
{
	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x0")]
	public readonly Type resource;

	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0x0")]
	public readonly int frameIndex;

	[Token(Token = "0x4000B71")]
	[FieldOffset(Offset = "0x0")]
	public readonly int executionCount;

	[Token(Token = "0x6001240")]
	public PooledResourceEntry(Type resource, int frameIndex, int executionCount)
	{
	}
}
