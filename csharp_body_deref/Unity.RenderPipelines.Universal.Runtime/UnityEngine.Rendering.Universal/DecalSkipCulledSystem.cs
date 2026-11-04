// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalSkipCulledSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200008D")]
internal class DecalSkipCulledSystem
{
	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x10")]
	private DecalEntityManager m_EntityManager;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x18")]
	private ProfilingSampler m_Sampler;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x20")]
	private Camera m_Camera;

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x2C27970", Offset = "0x2C25F70", VA = "0x182C27970")]
	public DecalSkipCulledSystem(DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x2C276C0", Offset = "0x2C25CC0", VA = "0x182C276C0")]
	public void Execute(Camera camera)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x2C278B0", Offset = "0x2C25EB0", VA = "0x182C278B0")]
	private void Execute(DecalCulledChunk culledChunk, int count)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	internal static ulong GetSceneCullingMaskFromCamera(Camera camera)
	{
		return default(ulong);
	}
}
