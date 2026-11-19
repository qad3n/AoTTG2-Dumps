// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMPro_ExtensionMethods
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x20000A6")]
public static class TMPro_ExtensionMethods
{
	[Token(Token = "0x600063C")]
	[Address(RVA = "0x675FD80", Offset = "0x675ED80", VA = "0x675FD80")]
	internal static int TagToInt(this string s)
	{
		return default(int);
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x675FE10", Offset = "0x675EE10", VA = "0x675FE10")]
	public static int[] ToIntArray(this string text)
	{
		return null;
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x675FEB0", Offset = "0x675EEB0", VA = "0x675FEB0")]
	public static string ArrayToString(this char[] chars)
	{
		return null;
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x675FF60", Offset = "0x675EF60", VA = "0x675FF60")]
	public static string IntToString(this int[] unicodes)
	{
		return null;
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x6760060", Offset = "0x675F060", VA = "0x6760060")]
	internal static string UintToString(this List<uint> unicodes)
	{
		return null;
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x6760140", Offset = "0x675F140", VA = "0x6760140")]
	public static string IntToString(this int[] unicodes, int start, int length)
	{
		return null;
	}

	[Token(Token = "0x6000642")]
	public static int FindInstanceID<T>(this List<T> list, T target) where T : Object
	{
		return default(int);
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x6760210", Offset = "0x675F210", VA = "0x6760210")]
	public static bool Compare(this Color32 a, Color32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x6760220", Offset = "0x675F220", VA = "0x6760220")]
	public static bool CompareRGB(this Color32 a, Color32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x6760230", Offset = "0x675F230", VA = "0x6760230")]
	public static bool Compare(this Color a, Color b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x6760260", Offset = "0x675F260", VA = "0x6760260")]
	public static bool CompareRGB(this Color a, Color b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x6760290", Offset = "0x675F290", VA = "0x6760290")]
	public static Color32 Multiply(this Color32 c1, Color32 c2)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x6760360", Offset = "0x675F360", VA = "0x6760360")]
	public static Color32 Tint(this Color32 c1, Color32 c2)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x6760430", Offset = "0x675F430", VA = "0x6760430")]
	public static Color32 Tint(this Color32 c1, float tint)
	{
		return default(Color32);
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x67604C0", Offset = "0x675F4C0", VA = "0x67604C0")]
	internal static Color32 GammaToLinear(this Color32 c)
	{
		return default(Color32);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x6760680", Offset = "0x675F680", VA = "0x6760680")]
	private static byte GammaToLinear(byte value)
	{
		return default(byte);
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x6760710", Offset = "0x675F710", VA = "0x6760710")]
	public static Color MinAlpha(this Color c1, Color c2)
	{
		return default(Color);
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x6760730", Offset = "0x675F730", VA = "0x6760730")]
	public static bool Compare(this Vector3 v1, Vector3 v2, int accuracy)
	{
		return default(bool);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x6760780", Offset = "0x675F780", VA = "0x6760780")]
	public static bool Compare(this Quaternion q1, Quaternion q2, int accuracy)
	{
		return default(bool);
	}
}
