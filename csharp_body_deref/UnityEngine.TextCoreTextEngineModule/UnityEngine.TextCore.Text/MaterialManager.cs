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

[Token(Token = "0x2000026")]
internal static class MaterialManager
{
	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<long, Material> s_FallbackMaterials;

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x6A0E5A0", Offset = "0x6A0D5A0", VA = "0x6A0E5A0")]
	public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x6A0ECB0", Offset = "0x6A0DCB0", VA = "0x6A0ECB0")]
	public static Material GetFallbackMaterial(FontAsset fontAsset, Material sourceMaterial, int atlasIndex)
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x6A0EA10", Offset = "0x6A0DA10", VA = "0x6A0EA10")]
	private static void CopyMaterialPresetProperties(Material source, Material destination)
	{
	}
}
