// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSetupMaterials
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSetupMaterials.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMaterials.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200066F")]
public class HumanSetupMaterials
{
	[Token(Token = "0x4001E98")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, Material> HairMaterials;

	[Token(Token = "0x4001E99")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, Material> PartMaterials;

	[Token(Token = "0x4001E9A")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Material> FaceMaterials;

	[Token(Token = "0x4001E9B")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, Material> TitanEyeMaterials;

	[Token(Token = "0x4001E9C")]
	[FieldOffset(Offset = "0x20")]
	public static string TexturePath;

	[Token(Token = "0x4001E9D")]
	[FieldOffset(Offset = "0x28")]
	public static string MaterialPath;

	[Token(Token = "0x6003FC1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003FC2")]
	[Address(RVA = "0x216E480", Offset = "0x216CA80", VA = "0x18216E480")]
	public static Material GetCostumeMaterial(string mainTexture, string maskTexture, string colorTexture, string pantsTexture, Color shirt, Color straps, Color pants, Color jacket, Color boots)
	{
		return null;
	}

	[Token(Token = "0x6003FC3")]
	[Address(RVA = "0x216EED0", Offset = "0x216D4D0", VA = "0x18216EED0")]
	public static Material GetPartMaterial(string texture, bool isOneSided = false)
	{
		return null;
	}

	[Token(Token = "0x6003FC4")]
	[Address(RVA = "0x216E8F0", Offset = "0x216CEF0", VA = "0x18216E8F0")]
	public static Material GetCustomSkinMaterial()
	{
		return null;
	}

	[Token(Token = "0x6003FC5")]
	[Address(RVA = "0x216EC70", Offset = "0x216D270", VA = "0x18216EC70")]
	public static Material GetHairMaterial(string texture)
	{
		return null;
	}

	[Token(Token = "0x6003FC6")]
	[Address(RVA = "0x216E9E0", Offset = "0x216CFE0", VA = "0x18216E9E0")]
	public static Material GetFaceMaterial(string texture, bool untiled)
	{
		return null;
	}

	[Token(Token = "0x6003FC7")]
	[Address(RVA = "0x216F360", Offset = "0x216D960", VA = "0x18216F360")]
	public static Material GetTitanEyeMaterial(string texture)
	{
		return null;
	}

	[Token(Token = "0x6003FC8")]
	[Address(RVA = "0x216F1E0", Offset = "0x216D7E0", VA = "0x18216F1E0")]
	public static Material GetSkinMaterial(string texture, Color color)
	{
		return null;
	}

	[Token(Token = "0x6003FC9")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public HumanSetupMaterials()
	{
	}
}
