// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.MaterialManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000010")]
internal static class MaterialManager
{
	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<long, Material> s_FallbackMaterials;

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4EB3920", Offset = "0x4EB3920", VA = "0x4EB3920")]
	public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4EB3FC0", Offset = "0x4EB3FC0", VA = "0x4EB3FC0")]
	public static Material GetFallbackMaterial(FontAsset fontAsset, Material sourceMaterial, int atlasIndex)
	{
		return null;
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4EB3D20", Offset = "0x4EB3D20", VA = "0x4EB3D20")]
	private static void CopyMaterialPresetProperties(Material source, Material destination)
	{
	}
}
