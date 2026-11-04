// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XROcclusionMesh
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000E")]
internal class XROcclusionMesh
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x10")]
	private XRPass m_Pass;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x18")]
	private Mesh m_CombinedMesh;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x20")]
	private Material m_Material;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x28")]
	private int m_CombinedMeshHashCode;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilingSampler k_OcclusionMeshProfilingSampler;

	[Token(Token = "0x1700000A")]
	internal bool hasValidOcclusionMesh
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x2ACB580", Offset = "0x2AC9B80", VA = "0x182ACB580")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal XROcclusionMesh(XRPass xrPass)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	internal void SetMaterial(Material mat)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2ACAD30", Offset = "0x2AC9330", VA = "0x182ACAD30")]
	internal void RenderOcclusionMesh(CommandBuffer cmd, float occlusionMeshScale, bool yFlip = false)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2ACB2B0", Offset = "0x2AC98B0", VA = "0x182ACB2B0")]
	internal void UpdateCombinedMesh()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2ACAC90", Offset = "0x2AC9290", VA = "0x182ACAC90")]
	private bool IsOcclusionMeshSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2ACB150", Offset = "0x2AC9750", VA = "0x182ACB150")]
	private bool TryGetOcclusionMeshCombinedHashCode(out int hashCode)
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2ACA880", Offset = "0x2AC8E80", VA = "0x182ACA880")]
	private void CreateOcclusionMeshCombined()
	{
	}
}
