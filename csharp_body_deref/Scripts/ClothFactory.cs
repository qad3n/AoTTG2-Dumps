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

[Token(Token = "0x2000006")]
public static class ClothFactory
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, List<GameObject>> clothCache;

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x3F5A1C0", Offset = "0x3F5A1C0", VA = "0x3F5A1C0")]
	public static void ClearClothCache()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3F5A250", Offset = "0x3F5A250", VA = "0x3F5A250")]
	public static void DisposeAllObjects()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3F5A340", Offset = "0x3F5A340", VA = "0x3F5A340")]
	public static void DisposeObject(GameObject cachedObject)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3F5A510", Offset = "0x3F5A510", VA = "0x3F5A510")]
	private static GameObject GenerateCloth(GameObject go, string res)
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3F5A730", Offset = "0x3F5A730", VA = "0x3F5A730")]
	public static GameObject GetCape(GameObject reference, string name, Material material)
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3F5AEC0", Offset = "0x3F5AEC0", VA = "0x3F5AEC0")]
	public static string GetDebugInfo()
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3F5B290", Offset = "0x3F5B290", VA = "0x3F5B290")]
	public static GameObject GetHair(GameObject reference, string name, Material material, Color color)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3F5ADD0", Offset = "0x3F5ADD0", VA = "0x3F5ADD0")]
	private static void ReapplyClothBones(GameObject reference, GameObject clothObject)
	{
	}
}
