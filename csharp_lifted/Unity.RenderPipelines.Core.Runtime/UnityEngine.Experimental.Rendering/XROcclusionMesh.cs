// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XROcclusionMesh
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x64AC050", Offset = "0x64AB050", VA = "0x64AC050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x64AC010", Offset = "0x64AB010", VA = "0x64AC010")]
	internal XROcclusionMesh(XRPass xrPass)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x64AC040", Offset = "0x64AB040", VA = "0x64AC040")]
	internal void SetMaterial(Material mat)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x64AC280", Offset = "0x64AB280", VA = "0x64AC280")]
	internal void RenderOcclusionMesh(CommandBuffer cmd, float occlusionMeshScale, bool yFlip = false)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x64ACB20", Offset = "0x64ABB20", VA = "0x64ACB20")]
	internal void UpdateCombinedMesh()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x64AC180", Offset = "0x64AB180", VA = "0x64AC180")]
	private bool IsOcclusionMeshSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x64ACC10", Offset = "0x64ABC10", VA = "0x64ACC10")]
	private bool TryGetOcclusionMeshCombinedHashCode(out int hashCode)
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x64ACD70", Offset = "0x64ABD70", VA = "0x64ACD70")]
	private void CreateOcclusionMeshCombined()
	{
	}
}
