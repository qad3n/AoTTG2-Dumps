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
		[Address(RVA = "0x48F60D0", Offset = "0x48F60D0", VA = "0x48F60D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x48F62C0", Offset = "0x48F62C0", VA = "0x48F62C0")]
	public static void AddFontAsset(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x48F6350", Offset = "0x48F6350", VA = "0x48F6350")]
	private void AddFontAssetInternal(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x48F6410", Offset = "0x48F6410", VA = "0x48F6410")]
	public static void AddSpriteAsset(TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x48F64A0", Offset = "0x48F64A0", VA = "0x48F64A0")]
	private void AddSpriteAssetInternal(TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x48F6560", Offset = "0x48F6560", VA = "0x48F6560")]
	public static void AddSpriteAsset(int hashCode, TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x48F6610", Offset = "0x48F6610", VA = "0x48F6610")]
	private void AddSpriteAssetInternal(int hashCode, TMP_SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x48F66D0", Offset = "0x48F66D0", VA = "0x48F66D0")]
	public static void AddFontMaterial(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x48F67A0", Offset = "0x48F67A0", VA = "0x48F67A0")]
	private void AddFontMaterialInternal(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x48F67F0", Offset = "0x48F67F0", VA = "0x48F67F0")]
	public static void AddColorGradientPreset(int hashCode, TMP_ColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x48F6900", Offset = "0x48F6900", VA = "0x48F6900")]
	private void AddColorGradientPreset_Internal(int hashCode, TMP_ColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x48F6980", Offset = "0x48F6980", VA = "0x48F6980")]
	public bool Contains(TMP_FontAsset font)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x48F69E0", Offset = "0x48F69E0", VA = "0x48F69E0")]
	public bool Contains(TMP_SpriteAsset sprite)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x48F6A40", Offset = "0x48F6A40", VA = "0x48F6A40")]
	public static bool TryGetFontAsset(int hashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x48F6B20", Offset = "0x48F6B20", VA = "0x48F6B20")]
	private bool TryGetFontAssetInternal(int hashCode, out TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x48F6B90", Offset = "0x48F6B90", VA = "0x48F6B90")]
	public static bool TryGetSpriteAsset(int hashCode, out TMP_SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x48F6C70", Offset = "0x48F6C70", VA = "0x48F6C70")]
	private bool TryGetSpriteAssetInternal(int hashCode, out TMP_SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x48F6CE0", Offset = "0x48F6CE0", VA = "0x48F6CE0")]
	public static bool TryGetColorGradientPreset(int hashCode, out TMP_ColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x48F6DC0", Offset = "0x48F6DC0", VA = "0x48F6DC0")]
	private bool TryGetColorGradientPresetInternal(int hashCode, out TMP_ColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x48F6E30", Offset = "0x48F6E30", VA = "0x48F6E30")]
	public static bool TryGetMaterial(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x48F6F10", Offset = "0x48F6F10", VA = "0x48F6F10")]
	private bool TryGetMaterialInternal(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x48F6160", Offset = "0x48F6160", VA = "0x48F6160")]
	public MaterialReferenceManager()
	{
	}
}
