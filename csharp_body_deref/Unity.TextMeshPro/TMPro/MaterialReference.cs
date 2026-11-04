// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.MaterialReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000012")]
public struct MaterialReference
{
	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x8")]
	public TMP_FontAsset fontAsset;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x10")]
	public TMP_SpriteAsset spriteAsset;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x18")]
	public Material material;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x20")]
	public bool isDefaultMaterial;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x21")]
	public bool isFallbackMaterial;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x28")]
	public Material fallbackMaterial;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x30")]
	public float padding;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x34")]
	public int referenceCount;

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2CDF780", Offset = "0x2CDDD80", VA = "0x182CDF780")]
	public MaterialReference(int index, TMP_FontAsset fontAsset, TMP_SpriteAsset spriteAsset, Material material, float padding)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2CDF690", Offset = "0x2CDDC90", VA = "0x182CDF690")]
	public static bool Contains(MaterialReference[] materialReferences, TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2CDF410", Offset = "0x2CDDA10", VA = "0x182CDF410")]
	public static int AddMaterialReference(Material material, TMP_FontAsset fontAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2CDF1B0", Offset = "0x2CDD7B0", VA = "0x182CDF1B0")]
	public static int AddMaterialReference(Material material, TMP_SpriteAsset spriteAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}
}
