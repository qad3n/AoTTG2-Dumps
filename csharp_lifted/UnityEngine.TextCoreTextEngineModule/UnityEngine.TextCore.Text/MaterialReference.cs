// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.MaterialReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000027")]
internal struct MaterialReference
{
	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x8")]
	public FontAsset fontAsset;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x10")]
	public SpriteAsset spriteAsset;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x18")]
	public Material material;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x20")]
	public bool isFallbackMaterial;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x28")]
	public Material fallbackMaterial;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x30")]
	public float padding;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x34")]
	public int referenceCount;

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x6A0EF90", Offset = "0x6A0DF90", VA = "0x6A0EF90")]
	public MaterialReference(int index, FontAsset fontAsset, SpriteAsset spriteAsset, Material material, float padding)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x6A0F010", Offset = "0x6A0E010", VA = "0x6A0F010")]
	public static int AddMaterialReference(Material material, FontAsset fontAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x6A0F220", Offset = "0x6A0E220", VA = "0x6A0F220")]
	public static int AddMaterialReference(Material material, SpriteAsset spriteAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}
}
