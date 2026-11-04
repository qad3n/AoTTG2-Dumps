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

[Token(Token = "0x2000010")]
public class MaterialReferenceManager
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	private static MaterialReferenceManager s_Instance;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, Material> m_FontMaterialReferenceLookup;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, TMP_FontAsset> m_FontAssetReferenceLookup;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, TMP_SpriteAsset> m_SpriteAssetReferenceLookup;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, TMP_ColorGradient> m_ColorGradientReferenceLookup;

	[Token(Token = "0x17000011")]
	public static MaterialReferenceManager instance
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x2CDEFE0", Offset = "0x2CDD5E0", VA = "0x182CDEFE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2CDE3C0", Offset = "0x2CDC9C0", VA = "0x182CDE3C0")]
	public static void AddFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2CDE1E0", Offset = "0x2CDC7E0", VA = "0x182CDE1E0")]
	private void AddFontAssetInternal(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2CDE6E0", Offset = "0x2CDCCE0", VA = "0x182CDE6E0")]
	public static void AddSpriteAsset(TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2CDE4D0", Offset = "0x2CDCAD0", VA = "0x182CDE4D0")]
	private void AddSpriteAssetInternal(TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2CDE830", Offset = "0x2CDCE30", VA = "0x182CDE830")]
	public static void AddSpriteAsset(int hashCode, TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2CDE610", Offset = "0x2CDCC10", VA = "0x182CDE610")]
	private void AddSpriteAssetInternal(int hashCode, TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2CDE460", Offset = "0x2CDCA60", VA = "0x182CDE460")]
	public static void AddFontMaterial(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2CDE3F0", Offset = "0x2CDC9F0", VA = "0x182CDE3F0")]
	private void AddFontMaterialInternal(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2CDE140", Offset = "0x2CDC740", VA = "0x182CDE140")]
	public static void AddColorGradientPreset(int hashCode, TMP_ColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2CDE0B0", Offset = "0x2CDC6B0", VA = "0x182CDE0B0")]
	private void AddColorGradientPreset_Internal(int hashCode, TMP_ColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2CDE910", Offset = "0x2CDCF10", VA = "0x182CDE910")]
	public bool Contains(TMP_FontAsset font)
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2CDE9D0", Offset = "0x2CDCFD0", VA = "0x182CDE9D0")]
	public bool Contains(TMP_SpriteAsset sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2CDEC10", Offset = "0x2CDD210", VA = "0x182CDEC10")]
	public static bool TryGetFontAsset(int hashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2CDEB90", Offset = "0x2CDD190", VA = "0x182CDEB90")]
	private bool TryGetFontAssetInternal(int hashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2CDEE10", Offset = "0x2CDD410", VA = "0x182CDEE10")]
	public static bool TryGetSpriteAsset(int hashCode, out TMP_SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2CDED90", Offset = "0x2CDD390", VA = "0x182CDED90")]
	private bool TryGetSpriteAssetInternal(int hashCode, out TMP_SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2CDEB10", Offset = "0x2CDD110", VA = "0x182CDEB10")]
	public static bool TryGetColorGradientPreset(int hashCode, out TMP_ColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2CDEA90", Offset = "0x2CDD090", VA = "0x182CDEA90")]
	private bool TryGetColorGradientPresetInternal(int hashCode, out TMP_ColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2CDED10", Offset = "0x2CDD310", VA = "0x182CDED10")]
	public static bool TryGetMaterial(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2CDEC90", Offset = "0x2CDD290", VA = "0x182CDEC90")]
	private bool TryGetMaterialInternal(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2CDEE90", Offset = "0x2CDD490", VA = "0x182CDEE90")]
	public MaterialReferenceManager()
	{
	}
}
