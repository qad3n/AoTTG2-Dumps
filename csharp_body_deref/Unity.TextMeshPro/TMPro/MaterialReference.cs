using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200000B")]
public struct MaterialReference
{
	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x8")]
	public TMP_FontAsset fontAsset;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x10")]
	public TMP_SpriteAsset spriteAsset;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x18")]
	public Material material;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x20")]
	public bool isDefaultMaterial;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x21")]
	public bool isFallbackMaterial;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x28")]
	public Material fallbackMaterial;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x30")]
	public float padding;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x34")]
	public int referenceCount;

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x48F6F80", Offset = "0x48F6F80", VA = "0x48F6F80")]
	public MaterialReference(int index, TMP_FontAsset fontAsset, TMP_SpriteAsset spriteAsset, Material material, float padding)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x48F7030", Offset = "0x48F7030", VA = "0x48F7030")]
	public static bool Contains(MaterialReference[] materialReferences, TMP_FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x48F7110", Offset = "0x48F7110", VA = "0x48F7110")]
	public static int AddMaterialReference(Material material, TMP_FontAsset fontAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x48F7340", Offset = "0x48F7340", VA = "0x48F7340")]
	public static int AddMaterialReference(Material material, TMP_SpriteAsset spriteAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}
}
