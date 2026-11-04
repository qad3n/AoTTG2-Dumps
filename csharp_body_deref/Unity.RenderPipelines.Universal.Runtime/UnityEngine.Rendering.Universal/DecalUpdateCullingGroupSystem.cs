// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalUpdateCullingGroupSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000093")]
internal class DecalUpdateCullingGroupSystem
{
	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x10")]
	private float[] m_BoundingDistance;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x18")]
	private Camera m_Camera;

	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x20")]
	private DecalEntityManager m_EntityManager;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x28")]
	private ProfilingSampler m_Sampler;

	[Token(Token = "0x170000E2")]
	public float boundingDistance
	{
		[Token(Token = "0x6000360")]
		[Address(RVA = "0x2C287E0", Offset = "0x2C26DE0", VA = "0x182C287E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000361")]
		[Address(RVA = "0x2C28810", Offset = "0x2C26E10", VA = "0x182C28810")]
		set
		{
		}
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x2C286F0", Offset = "0x2C26CF0", VA = "0x182C286F0")]
	public DecalUpdateCullingGroupSystem(DecalEntityManager entityManager, float drawDistance)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x2C28250", Offset = "0x2C26850", VA = "0x182C28250")]
	public void Execute(Camera camera)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x2C28570", Offset = "0x2C26B70", VA = "0x182C28570")]
	public void Execute(DecalCachedChunk cachedChunk, DecalCulledChunk culledChunk, int count)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	internal static ulong GetSceneCullingMaskFromCamera(Camera camera)
	{
		return default(ulong);
	}
}
