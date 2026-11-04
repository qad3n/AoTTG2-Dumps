// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalDrawErrorSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000077")]
internal class DecalDrawErrorSystem : DecalDrawSystem
{
	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x40")]
	private DecalTechnique m_Technique;

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x2C1CC50", Offset = "0x2C1B250", VA = "0x182C1CC50")]
	public DecalDrawErrorSystem(DecalEntityManager entityManager, DecalTechnique technique)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x2C1CBE0", Offset = "0x2C1B1E0", VA = "0x182C1CBE0", Slot = "5")]
	protected override int GetPassIndex(DecalCachedChunk decalCachedChunk)
	{
		return default(int);
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x2C1CBC0", Offset = "0x2C1B1C0", VA = "0x182C1CBC0", Slot = "4")]
	protected override Material GetMaterial(DecalEntityChunk decalEntityChunk)
	{
		return null;
	}
}
