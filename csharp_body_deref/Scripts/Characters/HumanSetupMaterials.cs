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

[Token(Token = "0x20006CE")]
public class HumanSetupMaterials
{
	[Token(Token = "0x4002046")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, Material> HairMaterials;

	[Token(Token = "0x4002047")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, Material> PartMaterials;

	[Token(Token = "0x4002048")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Material> FaceMaterials;

	[Token(Token = "0x4002049")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, Material> TitanEyeMaterials;

	[Token(Token = "0x400204A")]
	[FieldOffset(Offset = "0x20")]
	public static string TexturePath;

	[Token(Token = "0x400204B")]
	[FieldOffset(Offset = "0x28")]
	public static string MaterialPath;

	[Token(Token = "0x6004259")]
	[Address(RVA = "0x5B04EF0", Offset = "0x5B03EF0", VA = "0x5B04EF0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600425A")]
	[Address(RVA = "0x5B04F00", Offset = "0x5B03F00", VA = "0x5B04F00")]
	public static Material GetCostumeMaterial(string mainTexture, string maskTexture, string colorTexture, string pantsTexture, Color shirt, Color straps, Color pants, Color jacket, Color boots)
	{
		return null;
	}

	[Token(Token = "0x600425B")]
	[Address(RVA = "0x5B05360", Offset = "0x5B04360", VA = "0x5B05360")]
	public static Material GetPartMaterial(string texture, bool isOneSided = false)
	{
		return null;
	}

	[Token(Token = "0x600425C")]
	[Address(RVA = "0x5B05670", Offset = "0x5B04670", VA = "0x5B05670")]
	public static Material GetCustomSkinMaterial()
	{
		return null;
	}

	[Token(Token = "0x600425D")]
	[Address(RVA = "0x5B05760", Offset = "0x5B04760", VA = "0x5B05760")]
	public static Material GetHairMaterial(string texture)
	{
		return null;
	}

	[Token(Token = "0x600425E")]
	[Address(RVA = "0x5B059E0", Offset = "0x5B049E0", VA = "0x5B059E0")]
	public static Material GetFaceMaterial(string texture, bool untiled)
	{
		return null;
	}

	[Token(Token = "0x600425F")]
	[Address(RVA = "0x5B05C80", Offset = "0x5B04C80", VA = "0x5B05C80")]
	public static Material GetTitanEyeMaterial(string texture)
	{
		return null;
	}

	[Token(Token = "0x6004260")]
	[Address(RVA = "0x5B05EF0", Offset = "0x5B04EF0", VA = "0x5B05EF0")]
	public static Material GetSkinMaterial(string texture, Color color)
	{
		return null;
	}

	[Token(Token = "0x6004261")]
	[Address(RVA = "0x5B06080", Offset = "0x5B05080", VA = "0x5B06080")]
	public HumanSetupMaterials()
	{
	}
}
