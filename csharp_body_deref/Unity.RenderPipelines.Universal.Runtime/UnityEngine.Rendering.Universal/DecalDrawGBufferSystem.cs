// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalDrawGBufferSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000094")]
internal class DecalDrawGBufferSystem : DecalDrawSystem
{
	[Token(Token = "0x6000366")]
	[Address(RVA = "0x2C1CD80", Offset = "0x2C1B380", VA = "0x182C1CD80")]
	public DecalDrawGBufferSystem(DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x2C1CD60", Offset = "0x2C1B360", VA = "0x182C1CD60", Slot = "5")]
	protected override int GetPassIndex(DecalCachedChunk decalCachedChunk)
	{
		return default(int);
	}
}
