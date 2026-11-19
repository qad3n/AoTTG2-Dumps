// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalSkipCulledSystem
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x66184D0", Offset = "0x66174D0", VA = "0x66184D0")]
	public DecalSkipCulledSystem(DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x6618560", Offset = "0x6617560", VA = "0x6618560")]
	public void Execute(Camera camera)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x66186D0", Offset = "0x66176D0", VA = "0x66186D0")]
	private void Execute(DecalCulledChunk culledChunk, int count)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x66188F0", Offset = "0x66178F0", VA = "0x66188F0")]
	internal static ulong GetSceneCullingMaskFromCamera(Camera camera)
	{
		return default(ulong);
	}
}
