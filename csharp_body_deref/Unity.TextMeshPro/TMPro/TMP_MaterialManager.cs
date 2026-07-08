using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace TMPro;

[Token(Token = "0x2000052")]
public static class TMP_MaterialManager
{
	[Token(Token = "0x2000053")]
	private class FallbackMaterial
	{
		[Token(Token = "0x40001EF")]
		[FieldOffset(Offset = "0x10")]
		public long fallbackID;

		[Token(Token = "0x40001F0")]
		[FieldOffset(Offset = "0x18")]
		public Material sourceMaterial;

		[Token(Token = "0x40001F1")]
		[FieldOffset(Offset = "0x20")]
		internal int sourceMaterialCRC;

		[Token(Token = "0x40001F2")]
		[FieldOffset(Offset = "0x28")]
		public Material fallbackMaterial;

		[Token(Token = "0x40001F3")]
		[FieldOffset(Offset = "0x30")]
		public int count;

		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x4939B60", Offset = "0x4939B60", VA = "0x4939B60")]
		public FallbackMaterial()
		{
		}
	}

	[Token(Token = "0x2000054")]
	private class MaskingMaterial
	{
		[Token(Token = "0x40001F4")]
		[FieldOffset(Offset = "0x10")]
		public Material baseMaterial;

		[Token(Token = "0x40001F5")]
		[FieldOffset(Offset = "0x18")]
		public Material stencilMaterial;

		[Token(Token = "0x40001F6")]
		[FieldOffset(Offset = "0x20")]
		public int count;

		[Token(Token = "0x40001F7")]
		[FieldOffset(Offset = "0x24")]
		public int stencilID;

		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x4937F80", Offset = "0x4937F80", VA = "0x4937F80")]
		public MaskingMaterial()
		{
		}
	}

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x0")]
	private static List<MaskingMaterial> m_materialList;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<long, FallbackMaterial> m_fallbackMaterials;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<int, long> m_fallbackMaterialLookup;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x18")]
	private static List<FallbackMaterial> m_fallbackCleanupList;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x20")]
	private static bool isFallbackListDirty;

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x4936B70", Offset = "0x4936B70", VA = "0x4936B70")]
	static TMP_MaterialManager()
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x4936D50", Offset = "0x4936D50", VA = "0x4936D50")]
	private static void OnPreRender()
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x4937050", Offset = "0x4937050", VA = "0x4937050")]
	public static Material GetStencilMaterial(Material baseMaterial, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x4937F90", Offset = "0x4937F90", VA = "0x4937F90")]
	public static void ReleaseStencilMaterial(Material stencilMaterial)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x4938190", Offset = "0x4938190", VA = "0x4938190")]
	public static Material GetBaseMaterial(Material stencilMaterial)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x4938300", Offset = "0x4938300", VA = "0x4938300")]
	public static Material SetStencil(Material material, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x49383E0", Offset = "0x49383E0", VA = "0x49383E0")]
	public static void AddMaskingMaterial(Material baseMaterial, Material stencilMaterial, int stencilID)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x49386B0", Offset = "0x49386B0", VA = "0x49386B0")]
	public static void RemoveStencilMaterial(Material stencilMaterial)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4938820", Offset = "0x4938820", VA = "0x4938820")]
	public static void ReleaseBaseMaterial(Material baseMaterial)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4938D30", Offset = "0x4938D30", VA = "0x4938D30")]
	public static void ClearMaterials()
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4938F40", Offset = "0x4938F40", VA = "0x4938F40")]
	public static int GetStencilID(GameObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x49393B0", Offset = "0x49393B0", VA = "0x49393B0")]
	public static Material GetMaterialForRendering(MaskableGraphic graphic, Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x4939220", Offset = "0x4939220", VA = "0x4939220")]
	private static Transform FindRootSortOverrideCanvas(Transform start)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x49395C0", Offset = "0x49395C0", VA = "0x49395C0")]
	internal static Material GetFallbackMaterial(TMP_FontAsset fontAsset, Material sourceMaterial, int atlasIndex)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x4939B70", Offset = "0x4939B70", VA = "0x4939B70")]
	public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x4939FF0", Offset = "0x4939FF0", VA = "0x4939FF0")]
	public static void AddFallbackMaterialReference(Material targetMaterial)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x493A130", Offset = "0x493A130", VA = "0x493A130")]
	public static void RemoveFallbackMaterialReference(Material targetMaterial)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4936DE0", Offset = "0x4936DE0", VA = "0x4936DE0")]
	public static void CleanupFallbackMaterials()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x493A320", Offset = "0x493A320", VA = "0x493A320")]
	public static void ReleaseFallbackMaterial(Material fallbackMaterial)
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x49398E0", Offset = "0x49398E0", VA = "0x49398E0")]
	public static void CopyMaterialPresetProperties(Material source, Material destination)
	{
	}
}
