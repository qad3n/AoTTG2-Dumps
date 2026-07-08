using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000011")]
internal struct MaterialReference
{
	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x8")]
	public FontAsset fontAsset;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x10")]
	public SpriteAsset spriteAsset;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x18")]
	public Material material;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x20")]
	public bool isDefaultMaterial;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x21")]
	public bool isFallbackMaterial;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x28")]
	public Material fallbackMaterial;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x30")]
	public float padding;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x34")]
	public int referenceCount;

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4B8C940", Offset = "0x4B8C940", VA = "0x4B8C940")]
	public MaterialReference(int index, FontAsset fontAsset, SpriteAsset spriteAsset, Material material, float padding)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4B8C9F0", Offset = "0x4B8C9F0", VA = "0x4B8C9F0")]
	public static int AddMaterialReference(Material material, FontAsset fontAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4B8CC20", Offset = "0x4B8CC20", VA = "0x4B8CC20")]
	public static int AddMaterialReference(Material material, SpriteAsset spriteAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}
}
