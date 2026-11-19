// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalDrawErrorSystem
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6610C10", Offset = "0x660FC10", VA = "0x6610C10")]
	public DecalDrawErrorSystem(DecalEntityManager entityManager, DecalTechnique technique)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x6610C80", Offset = "0x660FC80", VA = "0x6610C80", Slot = "5")]
	protected override int GetPassIndex(DecalCachedChunk decalCachedChunk)
	{
		return default(int);
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x6610CE0", Offset = "0x660FCE0", VA = "0x6610CE0", Slot = "4")]
	protected override Material GetMaterial(DecalEntityChunk decalEntityChunk)
	{
		return null;
	}
}
