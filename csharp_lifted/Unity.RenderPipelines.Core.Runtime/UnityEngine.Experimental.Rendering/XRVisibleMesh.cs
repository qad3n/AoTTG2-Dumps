// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRVisibleMesh
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000015")]
internal class XRVisibleMesh
{
	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x10")]
	private XRPass m_Pass;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x18")]
	private Mesh m_CombinedMesh;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x20")]
	private int m_CombinedMeshHashCode;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilingSampler k_VisibleMeshProfilingSampler;

	[Token(Token = "0x17000029")]
	internal bool hasValidVisibleMesh
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x64AE4D0", Offset = "0x64AD4D0", VA = "0x64AE4D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x64AD430", Offset = "0x64AC430", VA = "0x64AD430")]
	internal XRVisibleMesh(XRPass xrPass)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x64AD890", Offset = "0x64AC890", VA = "0x64AD890")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x64AE6C0", Offset = "0x64AD6C0", VA = "0x64AE6C0")]
	internal void RenderVisibleMeshCustomMaterial(CommandBuffer cmd, float occlusionMeshScale, Material material, MaterialPropertyBlock materialBlock, int shaderPass, bool yFlip = false)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x64AF3C0", Offset = "0x64AE3C0", VA = "0x64AF3C0")]
	internal void UpdateCombinedMesh()
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x64B22F0", Offset = "0x64B12F0", VA = "0x64B22F0")]
	private bool IsVisibleMeshSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x64B2360", Offset = "0x64B1360", VA = "0x64B2360")]
	private bool TryGetVisibleMeshCombinedHashCode(out int hashCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x64B24C0", Offset = "0x64B14C0", VA = "0x64B24C0")]
	private void CreateVisibleMeshCombined()
	{
	}
}
