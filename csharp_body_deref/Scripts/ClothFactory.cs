// ==================== AoTTG2 cross-reference ====================
// Type: ClothFactory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ClothFactory.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ClothFactory.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000007")]
public static class ClothFactory
{
	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<GameObject>> clothCache;

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x5743D00", Offset = "0x5742D00", VA = "0x5743D00")]
	public static void ClearClothCache()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5743D90", Offset = "0x5742D90", VA = "0x5743D90")]
	public static void DisposeAllObjects()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5743E80", Offset = "0x5742E80", VA = "0x5743E80")]
	public static void DisposeObject(GameObject cachedObject)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x5744120", Offset = "0x5743120", VA = "0x5744120")]
	private static GameObject GenerateCloth(GameObject go, string res)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5744340", Offset = "0x5743340", VA = "0x5744340")]
	public static GameObject GetCape(GameObject reference, string name, Material material)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x5744900", Offset = "0x5743900", VA = "0x5744900")]
	public static GameObject GetHair(GameObject reference, string name, Material material, Color color)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x57443C0", Offset = "0x57433C0", VA = "0x57443C0")]
	private static GameObject GetCloth(GameObject reference, string name, Material material, Color? color)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x5744CC0", Offset = "0x5743CC0", VA = "0x5744CC0")]
	public static string GetDebugInfo()
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x57449C0", Offset = "0x57439C0", VA = "0x57449C0")]
	private static void ReapplyClothBones(GameObject reference, GameObject clothObject)
	{
	}
}
