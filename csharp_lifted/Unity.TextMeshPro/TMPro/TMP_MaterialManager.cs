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
		[Address(RVA = "0x6730C00", Offset = "0x672FC00", VA = "0x6730C00")]
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
		[Address(RVA = "0x672EF20", Offset = "0x672DF20", VA = "0x672EF20")]
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
	[Address(RVA = "0x672D9F0", Offset = "0x672C9F0", VA = "0x672D9F0")]
	static TMP_MaterialManager()
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x672DBD0", Offset = "0x672CBD0", VA = "0x672DBD0")]
	private static void OnPreRender()
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x672DEF0", Offset = "0x672CEF0", VA = "0x672DEF0")]
	public static Material GetStencilMaterial(Material baseMaterial, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x672EF30", Offset = "0x672DF30", VA = "0x672EF30")]
	public static void ReleaseStencilMaterial(Material stencilMaterial)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x672F160", Offset = "0x672E160", VA = "0x672F160")]
	public static Material GetBaseMaterial(Material stencilMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x672F2D0", Offset = "0x672E2D0", VA = "0x672F2D0")]
	public static Material SetStencil(Material material, int stencilID)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x672F3B0", Offset = "0x672E3B0", VA = "0x672F3B0")]
	public static void AddMaskingMaterial(Material baseMaterial, Material stencilMaterial, int stencilID)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x672F680", Offset = "0x672E680", VA = "0x672F680")]
	public static void RemoveStencilMaterial(Material stencilMaterial)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x672F7F0", Offset = "0x672E7F0", VA = "0x672F7F0")]
	public static void ReleaseBaseMaterial(Material baseMaterial)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x672FD40", Offset = "0x672ED40", VA = "0x672FD40")]
	public static void ClearMaterials()
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x672FF50", Offset = "0x672EF50", VA = "0x672FF50")]
	public static int GetStencilID(GameObject obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x6730430", Offset = "0x672F430", VA = "0x6730430")]
	public static Material GetMaterialForRendering(MaskableGraphic graphic, Material baseMaterial)
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x6730290", Offset = "0x672F290", VA = "0x6730290")]
	private static Transform FindRootSortOverrideCanvas(Transform start)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x6730640", Offset = "0x672F640", VA = "0x6730640")]
	internal static Material GetFallbackMaterial(TMP_FontAsset fontAsset, Material sourceMaterial, int atlasIndex)
	{
		return null;
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x6730C10", Offset = "0x672FC10", VA = "0x6730C10")]
	public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x67310B0", Offset = "0x67300B0", VA = "0x67310B0")]
	public static void AddFallbackMaterialReference(Material targetMaterial)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x67311F0", Offset = "0x67301F0", VA = "0x67311F0")]
	public static void RemoveFallbackMaterialReference(Material targetMaterial)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x672DC60", Offset = "0x672CC60", VA = "0x672DC60")]
	public static void CleanupFallbackMaterials()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x67313E0", Offset = "0x67303E0", VA = "0x67313E0")]
	public static void ReleaseFallbackMaterial(Material fallbackMaterial)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x6730960", Offset = "0x672F960", VA = "0x6730960")]
	public static void CopyMaterialPresetProperties(Material source, Material destination)
	{
	}
}
