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

[Token(Token = "0x2000515")]
public class HumanSetupMaterials
{
	[Token(Token = "0x40017FB")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, Material> HairMaterials;

	[Token(Token = "0x40017FC")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, Material> PartMaterials;

	[Token(Token = "0x40017FD")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Material> FaceMaterials;

	[Token(Token = "0x40017FE")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, Material> TitanEyeMaterials;

	[Token(Token = "0x40017FF")]
	[FieldOffset(Offset = "0x20")]
	public static string TexturePath;

	[Token(Token = "0x4001800")]
	[FieldOffset(Offset = "0x28")]
	public static string MaterialPath;

	[Token(Token = "0x6003583")]
	[Address(RVA = "0x41E7710", Offset = "0x41E7710", VA = "0x41E7710")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003584")]
	[Address(RVA = "0x41EA130", Offset = "0x41EA130", VA = "0x41EA130")]
	public static Material GetCostumeMaterial(string mainTexture, string maskTexture, string colorTexture, string pantsTexture, Color shirt, Color straps, Color pants, Color jacket, Color boots)
	{
		return null;
	}

	[Token(Token = "0x6003585")]
	[Address(RVA = "0x41EE120", Offset = "0x41EE120", VA = "0x41EE120")]
	public static Material GetPartMaterial(string texture, bool isOneSided = false)
	{
		return null;
	}

	[Token(Token = "0x6003586")]
	[Address(RVA = "0x41F18F0", Offset = "0x41F18F0", VA = "0x41F18F0")]
	public static Material GetCustomSkinMaterial()
	{
		return null;
	}

	[Token(Token = "0x6003587")]
	[Address(RVA = "0x41EFB70", Offset = "0x41EFB70", VA = "0x41EFB70")]
	public static Material GetHairMaterial(string texture)
	{
		return null;
	}

	[Token(Token = "0x6003588")]
	[Address(RVA = "0x41F1480", Offset = "0x41F1480", VA = "0x41F1480")]
	public static Material GetFaceMaterial(string texture, bool untiled)
	{
		return null;
	}

	[Token(Token = "0x6003589")]
	[Address(RVA = "0x41F19E0", Offset = "0x41F19E0", VA = "0x41F19E0")]
	public static Material GetTitanEyeMaterial(string texture)
	{
		return null;
	}

	[Token(Token = "0x600358A")]
	[Address(RVA = "0x41F05A0", Offset = "0x41F05A0", VA = "0x41F05A0")]
	public static Material GetSkinMaterial(string texture, Color color)
	{
		return null;
	}

	[Token(Token = "0x600358B")]
	[Address(RVA = "0x41F1C50", Offset = "0x41F1C50", VA = "0x41F1C50")]
	public HumanSetupMaterials()
	{
	}
}
