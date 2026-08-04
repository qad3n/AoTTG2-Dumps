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
	[Address(RVA = "0x4EB4270", Offset = "0x4EB4270", VA = "0x4EB4270")]
	public MaterialReference(int index, FontAsset fontAsset, SpriteAsset spriteAsset, Material material, float padding)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4EB4320", Offset = "0x4EB4320", VA = "0x4EB4320")]
	public static int AddMaterialReference(Material material, FontAsset fontAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4EB4550", Offset = "0x4EB4550", VA = "0x4EB4550")]
	public static int AddMaterialReference(Material material, SpriteAsset spriteAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup)
	{
		return default(int);
	}
}
