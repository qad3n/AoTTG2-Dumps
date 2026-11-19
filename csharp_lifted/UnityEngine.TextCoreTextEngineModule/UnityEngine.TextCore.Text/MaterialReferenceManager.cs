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
		[Address(RVA = "0x6A0F420", Offset = "0x6A0E420", VA = "0x6A0F420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x6A0F610", Offset = "0x6A0E610", VA = "0x6A0F610")]
	public static void AddFontAsset(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x6A0F6B0", Offset = "0x6A0E6B0", VA = "0x6A0F6B0")]
	private void AddFontAssetInternal(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x6A0F790", Offset = "0x6A0E790", VA = "0x6A0F790")]
	public static void AddSpriteAsset(int hashCode, SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x6A0F840", Offset = "0x6A0E840", VA = "0x6A0F840")]
	private void AddSpriteAssetInternal(int hashCode, SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x6A0F900", Offset = "0x6A0E900", VA = "0x6A0F900")]
	public static void AddFontMaterial(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x6A0F9D0", Offset = "0x6A0E9D0", VA = "0x6A0F9D0")]
	private void AddFontMaterialInternal(int hashCode, Material material)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x6A0FA20", Offset = "0x6A0EA20", VA = "0x6A0FA20")]
	public static void AddColorGradientPreset(int hashCode, TextColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x6A0FB30", Offset = "0x6A0EB30", VA = "0x6A0FB30")]
	private void AddColorGradientPreset_Internal(int hashCode, TextColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x6A0FBB0", Offset = "0x6A0EBB0", VA = "0x6A0FBB0")]
	public static bool TryGetFontAsset(int hashCode, out FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x6A0FC90", Offset = "0x6A0EC90", VA = "0x6A0FC90")]
	private bool TryGetFontAssetInternal(int hashCode, out FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x6A0FD00", Offset = "0x6A0ED00", VA = "0x6A0FD00")]
	public static bool TryGetSpriteAsset(int hashCode, out SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x6A0FDE0", Offset = "0x6A0EDE0", VA = "0x6A0FDE0")]
	private bool TryGetSpriteAssetInternal(int hashCode, out SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x6A0FE50", Offset = "0x6A0EE50", VA = "0x6A0FE50")]
	public static bool TryGetColorGradientPreset(int hashCode, out TextColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x6A0FF30", Offset = "0x6A0EF30", VA = "0x6A0FF30")]
	private bool TryGetColorGradientPresetInternal(int hashCode, out TextColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x6A0FFA0", Offset = "0x6A0EFA0", VA = "0x6A0FFA0")]
	public static bool TryGetMaterial(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x6A10080", Offset = "0x6A0F080", VA = "0x6A10080")]
	private bool TryGetMaterialInternal(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x6A0F4B0", Offset = "0x6A0E4B0", VA = "0x6A0F4B0")]
	public MaterialReferenceManager()
	{
	}
}
