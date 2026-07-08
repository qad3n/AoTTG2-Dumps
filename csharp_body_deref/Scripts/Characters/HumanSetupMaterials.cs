using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004D0")]
public class HumanSetupMaterials
{
	[Token(Token = "0x40016EA")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, Material> HairMaterials;

	[Token(Token = "0x40016EB")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, Material> PartMaterials;

	[Token(Token = "0x40016EC")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Material> FaceMaterials;

	[Token(Token = "0x40016ED")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, Material> TitanEyeMaterials;

	[Token(Token = "0x40016EE")]
	[FieldOffset(Offset = "0x20")]
	public static string TexturePath;

	[Token(Token = "0x40016EF")]
	[FieldOffset(Offset = "0x28")]
	public static string MaterialPath;

	[Token(Token = "0x6003375")]
	[Address(RVA = "0x3EDAE50", Offset = "0x3EDAE50", VA = "0x3EDAE50")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003376")]
	[Address(RVA = "0x3EDD870", Offset = "0x3EDD870", VA = "0x3EDD870")]
	public static Material GetCostumeMaterial(string mainTexture, string maskTexture, string colorTexture, string pantsTexture, Color shirt, Color straps, Color pants, Color jacket, Color boots)
	{
		return null;
	}

	[Token(Token = "0x6003377")]
	[Address(RVA = "0x3EE1860", Offset = "0x3EE1860", VA = "0x3EE1860")]
	public static Material GetPartMaterial(string texture, bool isOneSided = false)
	{
		return null;
	}

	[Token(Token = "0x6003378")]
	[Address(RVA = "0x3EE5030", Offset = "0x3EE5030", VA = "0x3EE5030")]
	public static Material GetCustomSkinMaterial()
	{
		return null;
	}

	[Token(Token = "0x6003379")]
	[Address(RVA = "0x3EE32B0", Offset = "0x3EE32B0", VA = "0x3EE32B0")]
	public static Material GetHairMaterial(string texture)
	{
		return null;
	}

	[Token(Token = "0x600337A")]
	[Address(RVA = "0x3EE4BC0", Offset = "0x3EE4BC0", VA = "0x3EE4BC0")]
	public static Material GetFaceMaterial(string texture, bool untiled)
	{
		return null;
	}

	[Token(Token = "0x600337B")]
	[Address(RVA = "0x3EE5120", Offset = "0x3EE5120", VA = "0x3EE5120")]
	public static Material GetTitanEyeMaterial(string texture)
	{
		return null;
	}

	[Token(Token = "0x600337C")]
	[Address(RVA = "0x3EE3CE0", Offset = "0x3EE3CE0", VA = "0x3EE3CE0")]
	public static Material GetSkinMaterial(string texture, Color color)
	{
		return null;
	}

	[Token(Token = "0x600337D")]
	[Address(RVA = "0x3EE5390", Offset = "0x3EE5390", VA = "0x3EE5390")]
	public HumanSetupMaterials()
	{
	}
}
