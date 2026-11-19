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
		[Address(RVA = "0x66DAE90", Offset = "0x66D9E90", VA = "0x66DAE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x66DB080", Offset = "0x66DA080", VA = "0x66DB080")]
	public static void AddFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x66DB120", Offset = "0x66DA120", VA = "0x66DB120")]
	private void AddFontAssetInternal(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x66DB410", Offset = "0x66DA410", VA = "0x66DB410")]
	public static void AddSpriteAsset(TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x66DB4B0", Offset = "0x66DA4B0", VA = "0x66DB4B0")]
	private void AddSpriteAssetInternal(TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x66DB6C0", Offset = "0x66DA6C0", VA = "0x66DB6C0")]
	public static void AddSpriteAsset(int hashCode, TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x66DB770", Offset = "0x66DA770", VA = "0x66DB770")]
	private void AddSpriteAssetInternal(int hashCode, TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x66DB890", Offset = "0x66DA890", VA = "0x66DB890")]
	public static void AddFontMaterial(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x66DB960", Offset = "0x66DA960", VA = "0x66DB960")]
	private void AddFontMaterialInternal(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x66DB9B0", Offset = "0x66DA9B0", VA = "0x66DB9B0")]
	public static void AddColorGradientPreset(int hashCode, TMP_ColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x66DBAC0", Offset = "0x66DAAC0", VA = "0x66DBAC0")]
	private void AddColorGradientPreset_Internal(int hashCode, TMP_ColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x66DBB40", Offset = "0x66DAB40", VA = "0x66DBB40")]
	public bool Contains(TMP_FontAsset font)
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x66DBC10", Offset = "0x66DAC10", VA = "0x66DBC10")]
	public bool Contains(TMP_SpriteAsset sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x66DBCE0", Offset = "0x66DACE0", VA = "0x66DBCE0")]
	public static bool TryGetFontAsset(int hashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x66DBDC0", Offset = "0x66DADC0", VA = "0x66DBDC0")]
	private bool TryGetFontAssetInternal(int hashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x66DBE30", Offset = "0x66DAE30", VA = "0x66DBE30")]
	public static bool TryGetSpriteAsset(int hashCode, out TMP_SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x66DBF10", Offset = "0x66DAF10", VA = "0x66DBF10")]
	private bool TryGetSpriteAssetInternal(int hashCode, out TMP_SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x66DBF80", Offset = "0x66DAF80", VA = "0x66DBF80")]
	public static bool TryGetColorGradientPreset(int hashCode, out TMP_ColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x66DC060", Offset = "0x66DB060", VA = "0x66DC060")]
	private bool TryGetColorGradientPresetInternal(int hashCode, out TMP_ColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x66DC0D0", Offset = "0x66DB0D0", VA = "0x66DC0D0")]
	public static bool TryGetMaterial(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x66DC1B0", Offset = "0x66DB1B0", VA = "0x66DC1B0")]
	private bool TryGetMaterialInternal(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x66DAF20", Offset = "0x66D9F20", VA = "0x66DAF20")]
	public MaterialReferenceManager()
	{
	}
}
