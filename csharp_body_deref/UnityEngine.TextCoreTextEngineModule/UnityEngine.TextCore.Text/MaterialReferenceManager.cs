using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000012")]
internal class MaterialReferenceManager
{
	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x0")]
	private static MaterialReferenceManager s_Instance;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, Material> m_FontMaterialReferenceLookup;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, FontAsset> m_FontAssetReferenceLookup;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, SpriteAsset> m_SpriteAssetReferenceLookup;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, TextColorGradient> m_ColorGradientReferenceLookup;

	[Token(Token = "0x1700001F")]
	public static MaterialReferenceManager instance
	{
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x4B8CE10", Offset = "0x4B8CE10", VA = "0x4B8CE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4B8CFF0", Offset = "0x4B8CFF0", VA = "0x4B8CFF0")]
	public static void AddFontAsset(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4B8D080", Offset = "0x4B8D080", VA = "0x4B8D080")]
	private void AddFontAssetInternal(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4B8D250", Offset = "0x4B8D250", VA = "0x4B8D250")]
	public static void AddSpriteAsset(int hashCode, SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4B8D2F0", Offset = "0x4B8D2F0", VA = "0x4B8D2F0")]
	private void AddSpriteAssetInternal(int hashCode, SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4B8D3A0", Offset = "0x4B8D3A0", VA = "0x4B8D3A0")]
	public static void AddFontMaterial(int hashCode, Material material)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4B8D470", Offset = "0x4B8D470", VA = "0x4B8D470")]
	private void AddFontMaterialInternal(int hashCode, Material material)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4B8D4C0", Offset = "0x4B8D4C0", VA = "0x4B8D4C0")]
	public static void AddColorGradientPreset(int hashCode, TextColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4B8D5D0", Offset = "0x4B8D5D0", VA = "0x4B8D5D0")]
	private void AddColorGradientPreset_Internal(int hashCode, TextColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4B8D650", Offset = "0x4B8D650", VA = "0x4B8D650")]
	public static bool TryGetFontAsset(int hashCode, out FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4B8D730", Offset = "0x4B8D730", VA = "0x4B8D730")]
	private bool TryGetFontAssetInternal(int hashCode, out FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4B8D7A0", Offset = "0x4B8D7A0", VA = "0x4B8D7A0")]
	public static bool TryGetSpriteAsset(int hashCode, out SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4B8D880", Offset = "0x4B8D880", VA = "0x4B8D880")]
	private bool TryGetSpriteAssetInternal(int hashCode, out SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4B8D8F0", Offset = "0x4B8D8F0", VA = "0x4B8D8F0")]
	public static bool TryGetColorGradientPreset(int hashCode, out TextColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4B8D9D0", Offset = "0x4B8D9D0", VA = "0x4B8D9D0")]
	private bool TryGetColorGradientPresetInternal(int hashCode, out TextColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4B8DA40", Offset = "0x4B8DA40", VA = "0x4B8DA40")]
	public static bool TryGetMaterial(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4B8DB20", Offset = "0x4B8DB20", VA = "0x4B8DB20")]
	private bool TryGetMaterialInternal(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4B8CE90", Offset = "0x4B8CE90", VA = "0x4B8CE90")]
	public MaterialReferenceManager()
	{
	}
}
