// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalDrawDBufferSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200006F")]
internal class DecalDrawDBufferSystem : DecalDrawSystem
{
	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x2C1CB50", Offset = "0x2C1B150", VA = "0x182C1CB50")]
	public DecalDrawDBufferSystem(DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x2C1CB30", Offset = "0x2C1B130", VA = "0x182C1CB30", Slot = "5")]
	protected override int GetPassIndex(DecalCachedChunk decalCachedChunk)
	{
		return default(int);
	}
}
