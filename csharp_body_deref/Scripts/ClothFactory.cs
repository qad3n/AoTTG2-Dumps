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
	[Address(RVA = "0x3C64870", Offset = "0x3C64870", VA = "0x3C64870")]
	public static void ClearClothCache()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3C64900", Offset = "0x3C64900", VA = "0x3C64900")]
	public static void DisposeAllObjects()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3C649F0", Offset = "0x3C649F0", VA = "0x3C649F0")]
	public static void DisposeObject(GameObject cachedObject)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3C64BC0", Offset = "0x3C64BC0", VA = "0x3C64BC0")]
	private static GameObject GenerateCloth(GameObject go, string res)
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3C64DE0", Offset = "0x3C64DE0", VA = "0x3C64DE0")]
	public static GameObject GetCape(GameObject reference, string name, Material material)
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3C65570", Offset = "0x3C65570", VA = "0x3C65570")]
	public static string GetDebugInfo()
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3C65940", Offset = "0x3C65940", VA = "0x3C65940")]
	public static GameObject GetHair(GameObject reference, string name, Material material, Color color)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3C65480", Offset = "0x3C65480", VA = "0x3C65480")]
	private static void ReapplyClothBones(GameObject reference, GameObject clothObject)
	{
	}
}
