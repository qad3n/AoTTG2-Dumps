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

[Token(Token = "0x2000015")]
internal class XROcclusionMesh
{
	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x10")]
	private XRPass m_Pass;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x18")]
	private Mesh m_CombinedMesh;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x20")]
	private Material m_Material;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x28")]
	private int m_CombinedMeshHashCode;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilingSampler k_OcclusionMeshProfilingSampler;

	[Token(Token = "0x1700000B")]
	internal bool hasValidOcclusionMesh
	{
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x4B767D0", Offset = "0x4B767D0", VA = "0x4B767D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4B76790", Offset = "0x4B76790", VA = "0x4B76790")]
	internal XROcclusionMesh(XRPass xrPass)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4B767C0", Offset = "0x4B767C0", VA = "0x4B767C0")]
	internal void SetMaterial(Material mat)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x4B76A00", Offset = "0x4B76A00", VA = "0x4B76A00")]
	internal void RenderOcclusionMesh(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x4B771F0", Offset = "0x4B771F0", VA = "0x4B771F0")]
	internal void UpdateCombinedMesh()
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4B76900", Offset = "0x4B76900", VA = "0x4B76900")]
	private bool IsOcclusionMeshSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x4B772E0", Offset = "0x4B772E0", VA = "0x4B772E0")]
	private bool TryGetOcclusionMeshCombinedHashCode(out int hashCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x4B77430", Offset = "0x4B77430", VA = "0x4B77430")]
	private void CreateOcclusionMeshCombined()
	{
	}
}
