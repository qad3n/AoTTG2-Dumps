// ==================== AoTTG2 cross-reference ====================
// Type: ClothFactory
// Update status: CHANGED in this game update
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
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<GameObject>> clothCache;

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x1D9FAE0", Offset = "0x1D9E0E0", VA = "0x181D9FAE0")]
	public static void ClearClothCache()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x1D9FB50", Offset = "0x1D9E150", VA = "0x181D9FB50")]
	public static void DisposeAllObjects()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x1D9FC40", Offset = "0x1D9E240", VA = "0x181D9FC40")]
	public static void DisposeObject(GameObject cachedObject)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x1D9FED0", Offset = "0x1D9E4D0", VA = "0x181D9FED0")]
	private static GameObject GenerateCloth(GameObject go, string res)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x1DA0120", Offset = "0x1D9E720", VA = "0x181DA0120")]
	public static GameObject GetCape(GameObject reference, string name, Material material)
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x1DA0CE0", Offset = "0x1D9F2E0", VA = "0x181DA0CE0")]
	public static GameObject GetHair(GameObject reference, string name, Material material, Color color)
	{
		return null;
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x1DA01A0", Offset = "0x1D9E7A0", VA = "0x181DA01A0")]
	private static GameObject GetCloth(GameObject reference, string name, Material material, Color? color)
	{
		return null;
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x1DA0980", Offset = "0x1D9EF80", VA = "0x181DA0980")]
	public static string GetDebugInfo()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x1DA0DA0", Offset = "0x1D9F3A0", VA = "0x181DA0DA0")]
	private static void ReapplyClothBones(GameObject reference, GameObject clothObject)
	{
	}
}
