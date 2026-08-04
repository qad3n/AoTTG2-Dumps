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
		[Address(RVA = "0x4EB4740", Offset = "0x4EB4740", VA = "0x4EB4740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4EB4920", Offset = "0x4EB4920", VA = "0x4EB4920")]
	public static void AddFontAsset(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4EB49B0", Offset = "0x4EB49B0", VA = "0x4EB49B0")]
	private void AddFontAssetInternal(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4EB4B80", Offset = "0x4EB4B80", VA = "0x4EB4B80")]
	public static void AddSpriteAsset(int hashCode, SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4EB4C20", Offset = "0x4EB4C20", VA = "0x4EB4C20")]
	private void AddSpriteAssetInternal(int hashCode, SpriteAsset spriteAsset)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4EB4CD0", Offset = "0x4EB4CD0", VA = "0x4EB4CD0")]
	public static void AddFontMaterial(int hashCode, Material material)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4EB4DA0", Offset = "0x4EB4DA0", VA = "0x4EB4DA0")]
	private void AddFontMaterialInternal(int hashCode, Material material)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4EB4DF0", Offset = "0x4EB4DF0", VA = "0x4EB4DF0")]
	public static void AddColorGradientPreset(int hashCode, TextColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4EB4F00", Offset = "0x4EB4F00", VA = "0x4EB4F00")]
	private void AddColorGradientPreset_Internal(int hashCode, TextColorGradient spriteAsset)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4EB4F80", Offset = "0x4EB4F80", VA = "0x4EB4F80")]
	public static bool TryGetFontAsset(int hashCode, out FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4EB5060", Offset = "0x4EB5060", VA = "0x4EB5060")]
	private bool TryGetFontAssetInternal(int hashCode, out FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4EB50D0", Offset = "0x4EB50D0", VA = "0x4EB50D0")]
	public static bool TryGetSpriteAsset(int hashCode, out SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4EB51B0", Offset = "0x4EB51B0", VA = "0x4EB51B0")]
	private bool TryGetSpriteAssetInternal(int hashCode, out SpriteAsset spriteAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4EB5220", Offset = "0x4EB5220", VA = "0x4EB5220")]
	public static bool TryGetColorGradientPreset(int hashCode, out TextColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4EB5300", Offset = "0x4EB5300", VA = "0x4EB5300")]
	private bool TryGetColorGradientPresetInternal(int hashCode, out TextColorGradient gradientPreset)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4EB5370", Offset = "0x4EB5370", VA = "0x4EB5370")]
	public static bool TryGetMaterial(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4EB5450", Offset = "0x4EB5450", VA = "0x4EB5450")]
	private bool TryGetMaterialInternal(int hashCode, out Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4EB47C0", Offset = "0x4EB47C0", VA = "0x4EB47C0")]
	public MaterialReferenceManager()
	{
	}
}
