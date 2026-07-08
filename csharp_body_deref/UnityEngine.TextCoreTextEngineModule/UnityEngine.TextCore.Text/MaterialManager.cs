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
	[Address(RVA = "0x4B8BFF0", Offset = "0x4B8BFF0", VA = "0x4B8BFF0")]
	public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4B8C690", Offset = "0x4B8C690", VA = "0x4B8C690")]
	public static Material GetFallbackMaterial(FontAsset fontAsset, Material sourceMaterial, int atlasIndex)
	{
		return null;
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4B8C3F0", Offset = "0x4B8C3F0", VA = "0x4B8C3F0")]
	private static void CopyMaterialPresetProperties(Material source, Material destination)
	{
	}
}
