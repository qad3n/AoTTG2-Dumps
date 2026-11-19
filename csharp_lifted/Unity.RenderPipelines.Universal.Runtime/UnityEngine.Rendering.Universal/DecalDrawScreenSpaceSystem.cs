// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalDrawScreenSpaceSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000098")]
internal class DecalDrawScreenSpaceSystem : DecalDrawSystem
{
	[Token(Token = "0x6000372")]
	[Address(RVA = "0x661C640", Offset = "0x661B640", VA = "0x661C640")]
	public DecalDrawScreenSpaceSystem(DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x661C6B0", Offset = "0x661B6B0", VA = "0x661C6B0", Slot = "5")]
	protected override int GetPassIndex(DecalCachedChunk decalCachedChunk)
	{
		return default(int);
	}
}
