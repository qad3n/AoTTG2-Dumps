// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_MaterialManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x200005C")]
public static class TMP_MaterialManager
{
	[Token(Token = "0x200005D")]
	private class FallbackMaterial
	{
		[Token(Token = "0x400022E")]
		[FieldOffset(Offset = "0x10")]
		public long fallbackID;

		[Token(Token = "0x400022F")]
		[FieldOffset(Offset = "0x18")]
		public Material sourceMaterial;

		[Token(Token = "0x4000230")]
		[FieldOffset(Offset = "0x20")]
		internal int sourceMaterialCRC;

		[Token(Token = "0x4000231")]
		[FieldOffset(Offset = "0x28")]
		public Material fallbackMaterial;

		[Token(Token = "0x4000232")]
		[FieldOffset(Offset = "0x30")]
		public int count;

		[Token(Token = "0x600032F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public FallbackMaterial()
		{
		}
	}

	[Token(Token = "0x200005E")]
	private class MaskingMaterial
	{
		[Token(Token = "0x4000233")]
		[FieldOffset(Offset = "0x10")]
		public Material baseMaterial;

		[Token(Token = "0x4000234")]
		[FieldOffset(Offset = "0x18")]
		public Material stencilMaterial;

		[Token(Token = "0x4000235")]
		[FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x4000236")]
		[FieldOffset(Offset = "0x24")]
		public int stencilID;

		[Token(Token = "0x6000330")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MaskingMaterial()
		{
		}
	}

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x0")]
	private static List<MaskingMaterial> m_materialList;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<long, FallbackMaterial> m_fallbackMaterials;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<int, long> m_fallbackMaterialLookup;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x18")]
	private static List<FallbackMaterial> m_fallbackCleanupList;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x20")]
	private static bool isFallbackListDirty;

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x2D3A040", Offset = "0x2D38640", VA = "0x182D3A040")]
	static TMP_MaterialManager()
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2D39250", Offset = "0x2D37850", VA = "0x182D39250")]
	private static void OnPreRender()
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2D38E60", Offset = "0x2D37460", VA = "0x182D38E60")]
	public static Material GetStencilMaterial(Material baseMaterial, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2D399F0", Offset = "0x2D37FF0", VA = "0x182D399F0")]
	public static void ReleaseStencilMaterial(Material stencilMaterial)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x2D37E90", Offset = "0x2D36490", VA = "0x182D37E90")]
	public static Material GetBaseMaterial(Material stencilMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x2D39F50", Offset = "0x2D38550", VA = "0x182D39F50")]
	public static Material SetStencil(Material material, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x2D37360", Offset = "0x2D35960", VA = "0x182D37360")]
	public static void AddMaskingMaterial(Material baseMaterial, Material stencilMaterial, int stencilID)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2D39DF0", Offset = "0x2D383F0", VA = "0x182D39DF0")]
	public static void RemoveStencilMaterial(Material stencilMaterial)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x2D392D0", Offset = "0x2D378D0", VA = "0x182D392D0")]
	public static void ReleaseBaseMaterial(Material baseMaterial)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x2D37830", Offset = "0x2D35E30", VA = "0x182D37830")]
	public static void ClearMaterials()
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x2D38A60", Offset = "0x2D37060", VA = "0x182D38A60")]
	public static int GetStencilID(GameObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x2D38860", Offset = "0x2D36E60", VA = "0x182D38860")]
	public static Material GetMaterialForRendering(MaskableGraphic graphic, Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2D37D10", Offset = "0x2D36310", VA = "0x182D37D10")]
	private static Transform FindRootSortOverrideCanvas(Transform start)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x2D38510", Offset = "0x2D36B10", VA = "0x182D38510")]
	internal static Material GetFallbackMaterial(TMP_FontAsset fontAsset, Material sourceMaterial, int atlasIndex)
	{
		return null;
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2D38010", Offset = "0x2D36610", VA = "0x182D38010")]
	public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x2D37220", Offset = "0x2D35820", VA = "0x182D37220")]
	public static void AddFallbackMaterialReference(Material targetMaterial)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x2D39C50", Offset = "0x2D38250", VA = "0x182D39C50")]
	public static void RemoveFallbackMaterialReference(Material targetMaterial)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x2D375D0", Offset = "0x2D35BD0", VA = "0x182D375D0")]
	public static void CleanupFallbackMaterials()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x2D39820", Offset = "0x2D37E20", VA = "0x182D39820")]
	public static void ReleaseFallbackMaterial(Material fallbackMaterial)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x2D37A20", Offset = "0x2D36020", VA = "0x182D37A20")]
	public static void CopyMaterialPresetProperties(Material source, Material destination)
	{
	}
}
