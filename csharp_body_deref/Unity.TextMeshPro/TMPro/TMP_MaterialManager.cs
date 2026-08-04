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

[Token(Token = "0x2000068")]
public static class TMP_MaterialManager
{
	[Token(Token = "0x2000069")]
	private class FallbackMaterial
	{
		[Token(Token = "0x40002E3")]
		[FieldOffset(Offset = "0x10")]
		public long fallbackID;

		[Token(Token = "0x40002E4")]
		[FieldOffset(Offset = "0x18")]
		public Material sourceMaterial;

		[Token(Token = "0x40002E5")]
		[FieldOffset(Offset = "0x20")]
		internal int sourceMaterialCRC;

		[Token(Token = "0x40002E6")]
		[FieldOffset(Offset = "0x28")]
		public Material fallbackMaterial;

		[Token(Token = "0x40002E7")]
		[FieldOffset(Offset = "0x30")]
		public int count;

		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x4C870E0", Offset = "0x4C870E0", VA = "0x4C870E0")]
		public FallbackMaterial()
		{
		}
	}

	[Token(Token = "0x200006A")]
	private class MaskingMaterial
	{
		[Token(Token = "0x40002E8")]
		[FieldOffset(Offset = "0x10")]
		public Material baseMaterial;

		[Token(Token = "0x40002E9")]
		[FieldOffset(Offset = "0x18")]
		public Material stencilMaterial;

		[Token(Token = "0x40002EA")]
		[FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x40002EB")]
		[FieldOffset(Offset = "0x24")]
		public int stencilID;

		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x4C85500", Offset = "0x4C85500", VA = "0x4C85500")]
		public MaskingMaterial()
		{
		}
	}

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x0")]
	private static List<MaskingMaterial> m_materialList;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<long, FallbackMaterial> m_fallbackMaterials;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<int, long> m_fallbackMaterialLookup;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x18")]
	private static List<FallbackMaterial> m_fallbackCleanupList;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x20")]
	private static bool isFallbackListDirty;

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x4C840F0", Offset = "0x4C840F0", VA = "0x4C840F0")]
	static TMP_MaterialManager()
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x4C842D0", Offset = "0x4C842D0", VA = "0x4C842D0")]
	private static void OnPreRender()
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x4C845D0", Offset = "0x4C845D0", VA = "0x4C845D0")]
	public static Material GetStencilMaterial(Material baseMaterial, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x4C85510", Offset = "0x4C85510", VA = "0x4C85510")]
	public static void ReleaseStencilMaterial(Material stencilMaterial)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x4C85710", Offset = "0x4C85710", VA = "0x4C85710")]
	public static Material GetBaseMaterial(Material stencilMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x4C85880", Offset = "0x4C85880", VA = "0x4C85880")]
	public static Material SetStencil(Material material, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x4C85960", Offset = "0x4C85960", VA = "0x4C85960")]
	public static void AddMaskingMaterial(Material baseMaterial, Material stencilMaterial, int stencilID)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x4C85C30", Offset = "0x4C85C30", VA = "0x4C85C30")]
	public static void RemoveStencilMaterial(Material stencilMaterial)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x4C85DA0", Offset = "0x4C85DA0", VA = "0x4C85DA0")]
	public static void ReleaseBaseMaterial(Material baseMaterial)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x4C862B0", Offset = "0x4C862B0", VA = "0x4C862B0")]
	public static void ClearMaterials()
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4C864C0", Offset = "0x4C864C0", VA = "0x4C864C0")]
	public static int GetStencilID(GameObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4C86930", Offset = "0x4C86930", VA = "0x4C86930")]
	public static Material GetMaterialForRendering(MaskableGraphic graphic, Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4C867A0", Offset = "0x4C867A0", VA = "0x4C867A0")]
	private static Transform FindRootSortOverrideCanvas(Transform start)
	{
		return null;
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x4C86B40", Offset = "0x4C86B40", VA = "0x4C86B40")]
	internal static Material GetFallbackMaterial(TMP_FontAsset fontAsset, Material sourceMaterial, int atlasIndex)
	{
		return null;
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x4C870F0", Offset = "0x4C870F0", VA = "0x4C870F0")]
	public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial)
	{
		return null;
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x4C87570", Offset = "0x4C87570", VA = "0x4C87570")]
	public static void AddFallbackMaterialReference(Material targetMaterial)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4C876B0", Offset = "0x4C876B0", VA = "0x4C876B0")]
	public static void RemoveFallbackMaterialReference(Material targetMaterial)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4C84360", Offset = "0x4C84360", VA = "0x4C84360")]
	public static void CleanupFallbackMaterials()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4C878A0", Offset = "0x4C878A0", VA = "0x4C878A0")]
	public static void ReleaseFallbackMaterial(Material fallbackMaterial)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4C86E60", Offset = "0x4C86E60", VA = "0x4C86E60")]
	public static void CopyMaterialPresetProperties(Material source, Material destination)
	{
	}
}
