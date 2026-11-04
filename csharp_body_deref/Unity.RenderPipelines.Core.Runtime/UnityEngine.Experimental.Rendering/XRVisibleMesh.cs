// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRVisibleMesh
// Update status: NEW in this game update
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
		[Address(RVA = "0x2AD2B90", Offset = "0x2AD1190", VA = "0x182AD2B90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal XRVisibleMesh(XRPass xrPass)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x2AD2440", Offset = "0x2AD0A40", VA = "0x182AD2440")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2AD2560", Offset = "0x2AD0B60", VA = "0x182AD2560")]
	internal void RenderVisibleMeshCustomMaterial(CommandBuffer cmd, float occlusionMeshScale, Material material, MaterialPropertyBlock materialBlock, int shaderPass, bool yFlip = false)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2AD28C0", Offset = "0x2AD0EC0", VA = "0x182AD28C0")]
	internal void UpdateCombinedMesh()
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2AD24E0", Offset = "0x2AD0AE0", VA = "0x182AD24E0")]
	private bool IsVisibleMeshSupported()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2AD2760", Offset = "0x2AD0D60", VA = "0x182AD2760")]
	private bool TryGetVisibleMeshCombinedHashCode(out int hashCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2AD2030", Offset = "0x2AD0630", VA = "0x182AD2030")]
	private void CreateVisibleMeshCombined()
	{
	}
}
