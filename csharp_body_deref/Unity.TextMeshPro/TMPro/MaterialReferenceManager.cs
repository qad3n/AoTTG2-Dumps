// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MaterialReferenceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000009")]
public class MaterialReferenceManager
{
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	private static MaterialReferenceManager s_Instance;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, Material> m_FontMaterialReferenceLookup;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, TMP_FontAsset> m_FontAssetReferenceLookup;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, TMP_SpriteAsset> m_SpriteAssetReferenceLookup;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, TMP_ColorGradient> m_ColorGradientReferenceLookup;

	[Token(Token = "0x17000001")]
	public static MaterialReferenceManager instance
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4C30380", Offset = "0x4C30380", VA = "0x4C30380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4C30570", Offset = "0x4C30570", VA = "0x4C30570")]
	public static void AddFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4C30600", Offset = "0x4C30600", VA = "0x4C30600")]
	private void AddFontAssetInternal(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4C306C0", Offset = "0x4C306C0", VA = "0x4C306C0")]
	public static void AddSpriteAsset(TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4C30750", Offset = "0x4C30750", VA = "0x4C30750")]
	private void AddSpriteAssetInternal(TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4C30810", Offset = "0x4C30810", VA = "0x4C30810")]
	public static void AddSpriteAsset(int hashCode, TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4C308C0", Offset = "0x4C308C0", VA = "0x4C308C0")]
	private void AddSpriteAssetInternal(int hashCode, TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4C30980", Offset = "0x4C30980", VA = "0x4C30980")]
	public static void AddFontMaterial(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4C30A50", Offset = "0x4C30A50", VA = "0x4C30A50")]
	private void AddFontMaterialInternal(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4C30AA0", Offset = "0x4C30AA0", VA = "0x4C30AA0")]
	public static void AddColorGradientPreset(int hashCode, TMP_ColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4C30BB0", Offset = "0x4C30BB0", VA = "0x4C30BB0")]
	private void AddColorGradientPreset_Internal(int hashCode, TMP_ColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4C30C30", Offset = "0x4C30C30", VA = "0x4C30C30")]
	public bool Contains(TMP_FontAsset font)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4C30C90", Offset = "0x4C30C90", VA = "0x4C30C90")]
	public bool Contains(TMP_SpriteAsset sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4C30CF0", Offset = "0x4C30CF0", VA = "0x4C30CF0")]
	public static bool TryGetFontAsset(int hashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4C30DD0", Offset = "0x4C30DD0", VA = "0x4C30DD0")]
	private bool TryGetFontAssetInternal(int hashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4C30E40", Offset = "0x4C30E40", VA = "0x4C30E40")]
	public static bool TryGetSpriteAsset(int hashCode, out TMP_SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4C30F20", Offset = "0x4C30F20", VA = "0x4C30F20")]
	private bool TryGetSpriteAssetInternal(int hashCode, out TMP_SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4C30F90", Offset = "0x4C30F90", VA = "0x4C30F90")]
	public static bool TryGetColorGradientPreset(int hashCode, out TMP_ColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4C31070", Offset = "0x4C31070", VA = "0x4C31070")]
	private bool TryGetColorGradientPresetInternal(int hashCode, out TMP_ColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4C310E0", Offset = "0x4C310E0", VA = "0x4C310E0")]
	public static bool TryGetMaterial(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4C311C0", Offset = "0x4C311C0", VA = "0x4C311C0")]
	private bool TryGetMaterialInternal(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4C30410", Offset = "0x4C30410", VA = "0x4C30410")]
	public MaterialReferenceManager()
	{
	}
}
