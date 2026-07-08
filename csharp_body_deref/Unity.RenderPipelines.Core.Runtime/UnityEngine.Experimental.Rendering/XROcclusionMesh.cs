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
		[Address(RVA = "0x48516E0", Offset = "0x48516E0", VA = "0x48516E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x48516A0", Offset = "0x48516A0", VA = "0x48516A0")]
	internal XROcclusionMesh(XRPass xrPass)
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x48516D0", Offset = "0x48516D0", VA = "0x48516D0")]
	internal void SetMaterial(Material mat)
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x4851910", Offset = "0x4851910", VA = "0x4851910")]
	internal void RenderOcclusionMesh(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x4852100", Offset = "0x4852100", VA = "0x4852100")]
	internal void UpdateCombinedMesh()
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4851810", Offset = "0x4851810", VA = "0x4851810")]
	private bool IsOcclusionMeshSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x48521F0", Offset = "0x48521F0", VA = "0x48521F0")]
	private bool TryGetOcclusionMeshCombinedHashCode(out int hashCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x4852340", Offset = "0x4852340", VA = "0x4852340")]
	private void CreateOcclusionMeshCombined()
	{
	}
}
