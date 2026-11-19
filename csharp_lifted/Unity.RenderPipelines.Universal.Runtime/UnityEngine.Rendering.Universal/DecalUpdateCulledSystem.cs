// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalUpdateCulledSystem
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x661A430", Offset = "0x6619430", VA = "0x661A430")]
	public DecalUpdateCulledSystem(DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x661A4C0", Offset = "0x66194C0", VA = "0x661A4C0")]
	public void Execute()
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x661A610", Offset = "0x6619610", VA = "0x661A610")]
	private void Execute(DecalCulledChunk culledChunk, int count)
	{
	}
}
