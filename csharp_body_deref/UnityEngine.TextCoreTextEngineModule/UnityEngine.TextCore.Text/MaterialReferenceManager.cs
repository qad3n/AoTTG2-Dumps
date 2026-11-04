// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.MaterialReferenceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000028")]
internal class MaterialReferenceManager
{
	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x0")]
	private static MaterialReferenceManager s_Instance;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<int, Material> m_FontMaterialReferenceLookup;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<int, FontAsset> m_FontAssetReferenceLookup;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, SpriteAsset> m_SpriteAssetReferenceLookup;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, TextColorGradient> m_ColorGradientReferenceLookup;

	[Token(Token = "0x17000011")]
	public static MaterialReferenceManager instance
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x3014DD0", Offset = "0x30133D0", VA = "0x183014DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x3014500", Offset = "0x3012B00", VA = "0x183014500")]
	public static void AddFontAsset(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x3014420", Offset = "0x3012A20", VA = "0x183014420")]
	private void AddFontAssetInternal(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x30147A0", Offset = "0x3012DA0", VA = "0x1830147A0")]
	public static void AddSpriteAsset(int hashCode, SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x30146D0", Offset = "0x3012CD0", VA = "0x1830146D0")]
	private void AddSpriteAssetInternal(int hashCode, SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3014660", Offset = "0x3012C60", VA = "0x183014660")]
	public static void AddFontMaterial(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x30145F0", Offset = "0x3012BF0", VA = "0x1830145F0")]
	private void AddFontMaterialInternal(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3014380", Offset = "0x3012980", VA = "0x183014380")]
	public static void AddColorGradientPreset(int hashCode, TextColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x30142F0", Offset = "0x30128F0", VA = "0x1830142F0")]
	private void AddColorGradientPreset_Internal(int hashCode, TextColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3014A00", Offset = "0x3013000", VA = "0x183014A00")]
	public static bool TryGetFontAsset(int hashCode, out FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3014980", Offset = "0x3012F80", VA = "0x183014980")]
	private bool TryGetFontAssetInternal(int hashCode, out FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3014C00", Offset = "0x3013200", VA = "0x183014C00")]
	public static bool TryGetSpriteAsset(int hashCode, out SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3014B80", Offset = "0x3013180", VA = "0x183014B80")]
	private bool TryGetSpriteAssetInternal(int hashCode, out SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3014900", Offset = "0x3012F00", VA = "0x183014900")]
	public static bool TryGetColorGradientPreset(int hashCode, out TextColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3014880", Offset = "0x3012E80", VA = "0x183014880")]
	private bool TryGetColorGradientPresetInternal(int hashCode, out TextColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3014B00", Offset = "0x3013100", VA = "0x183014B00")]
	public static bool TryGetMaterial(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3014A80", Offset = "0x3013080", VA = "0x183014A80")]
	private bool TryGetMaterialInternal(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3014C80", Offset = "0x3013280", VA = "0x183014C80")]
	public MaterialReferenceManager()
	{
	}
}
