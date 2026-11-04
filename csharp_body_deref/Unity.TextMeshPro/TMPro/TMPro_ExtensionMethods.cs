// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMPro_ExtensionMethods
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x2D6A260", Offset = "0x2D68860", VA = "0x182D6A260")]
	internal static int TagToInt(this string s)
	{
		return default(int);
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x2D6A3F0", Offset = "0x2D689F0", VA = "0x182D6A3F0")]
	public static int[] ToIntArray(this string text)
	{
		return null;
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x2D69C60", Offset = "0x2D68260", VA = "0x182D69C60")]
	public static string ArrayToString(this char[] chars)
	{
		return null;
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x2D69FE0", Offset = "0x2D685E0", VA = "0x182D69FE0")]
	public static string IntToString(this int[] unicodes)
	{
		return null;
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x2D6A490", Offset = "0x2D68A90", VA = "0x182D6A490")]
	internal static string UintToString(this List<uint> unicodes)
	{
		return null;
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x2D6A070", Offset = "0x2D68670", VA = "0x182D6A070")]
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
	[Address(RVA = "0x2D69D40", Offset = "0x2D68340", VA = "0x182D69D40")]
	public static bool Compare(this Color32 a, Color32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x2D69D10", Offset = "0x2D68310", VA = "0x182D69D10")]
	public static bool CompareRGB(this Color32 a, Color32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0")]
	public static bool Compare(this Color a, Color b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x2A7B5D0", Offset = "0x2A79BD0", VA = "0x182A7B5D0")]
	public static bool CompareRGB(this Color a, Color b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x2D6A180", Offset = "0x2D68780", VA = "0x182D6A180")]
	public static Color32 Multiply(this Color32 c1, Color32 c2)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x2D6A180", Offset = "0x2D68780", VA = "0x182D6A180")]
	public static Color32 Tint(this Color32 c1, Color32 c2)
	{
		return default(Color32);
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x2D6A310", Offset = "0x2D68910", VA = "0x182D6A310")]
	public static Color32 Tint(this Color32 c1, float tint)
	{
		return default(Color32);
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x2D69F90", Offset = "0x2D68590", VA = "0x182D69F90")]
	internal static Color32 GammaToLinear(this Color32 c)
	{
		return default(Color32);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x2D69EE0", Offset = "0x2D684E0", VA = "0x182D69EE0")]
	private static byte GammaToLinear(byte value)
	{
		return default(byte);
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x2D6A150", Offset = "0x2D68750", VA = "0x182D6A150")]
	public static Color MinAlpha(this Color c1, Color c2)
	{
		return default(Color);
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x2D69E50", Offset = "0x2D68450", VA = "0x182D69E50")]
	public static bool Compare(this Vector3 v1, Vector3 v2, int accuracy)
	{
		return default(bool);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x2D69D80", Offset = "0x2D68380", VA = "0x182D69D80")]
	public static bool Compare(this Quaternion q1, Quaternion q2, int accuracy)
	{
		return default(bool);
	}
}
