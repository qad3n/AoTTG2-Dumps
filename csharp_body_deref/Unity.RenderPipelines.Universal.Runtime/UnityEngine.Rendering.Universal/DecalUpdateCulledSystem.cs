// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalUpdateCulledSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000091")]
internal class DecalUpdateCulledSystem
{
	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x10")]
	private DecalEntityManager m_EntityManager;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x18")]
	private ProfilingSampler m_Sampler;

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x2C281C0", Offset = "0x2C267C0", VA = "0x182C281C0")]
	public DecalUpdateCulledSystem(DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x2C27F70", Offset = "0x2C26570", VA = "0x182C27F70")]
	public void Execute()
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x2C28120", Offset = "0x2C26720", VA = "0x182C28120")]
	private void Execute(DecalCulledChunk culledChunk, int count)
	{
	}
}
