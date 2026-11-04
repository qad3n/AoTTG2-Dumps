// ==================== AoTTG2 cross-reference ====================
// Type: MiscExtensions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MiscExtensions.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/MiscExtensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using GameManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

[Token(Token = "0x2000026")]
internal static class MiscExtensions
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string HexPattern;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string ColorTagPattern;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string ColorEndPattern;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string TagPattern;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string SizePattern;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string MaterialPattern;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string QuadPattern;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Regex HexRegex;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Regex ColorTagRegex;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Regex ColorEndRegex;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Regex TagRegex;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x58")]
	private static readonly Regex IllegalStyleRegex;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Regex NamedColorTagRegex;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x68")]
	public static readonly Dictionary<string, string> NamedColorHex;

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x1DA6740", Offset = "0x1DA4D40", VA = "0x181DA6740")]
	public static string ResolveNamedColorHex(string name)
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x1DA65D0", Offset = "0x1DA4BD0", VA = "0x181DA65D0")]
	public static string ReplaceNamedColorTags(string input)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x1DA60C0", Offset = "0x1DA46C0", VA = "0x181DA60C0")]
	public static bool GetActive(this GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x1DA6C60", Offset = "0x1DA5260", VA = "0x181DA6C60")]
	public static string ToDisplayString(this Vector3 vector)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x1DA7610", Offset = "0x1DA5C10", VA = "0x181DA7610")]
	public static double UnboxToDouble(this object obj)
	{
		return default(double);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x1DA7690", Offset = "0x1DA5C90", VA = "0x181DA7690")]
	public static float UnboxToFloat(this object obj)
	{
		return default(float);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x1DA78F0", Offset = "0x1DA5EF0", VA = "0x181DA78F0")]
	public static int UnboxToInt(this object obj)
	{
		return default(int);
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x1DA6500", Offset = "0x1DA4B00", VA = "0x181DA6500")]
	public static float MaxComponent(this Vector3 v)
	{
		return default(float);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x1DA7B20", Offset = "0x1DA6120", VA = "0x181DA7B20")]
	public static string UpperFirstLetter(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x1DA6950", Offset = "0x1DA4F50", VA = "0x181DA6950")]
	public static string StripHex(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x1DA6DD0", Offset = "0x1DA53D0", VA = "0x181DA6DD0")]
	public static List<string> Tokenize(string input)
	{
		return null;
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x1DA6A50", Offset = "0x1DA5050", VA = "0x181DA6A50")]
	public static string StripRichText(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x1DA69D0", Offset = "0x1DA4FD0", VA = "0x181DA69D0")]
	public static string StripIllegalRichText(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x1DA6040", Offset = "0x1DA4640", VA = "0x181DA6040")]
	public static string ForceWhiteColorTag(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x1DA68A0", Offset = "0x1DA4EA0", VA = "0x181DA68A0")]
	public static string StripColor(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x1DA5EA0", Offset = "0x1DA44A0", VA = "0x181DA5EA0")]
	public static string ForceColor(this string text, Color color)
	{
		return null;
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1DA5D50", Offset = "0x1DA4350", VA = "0x181DA5D50")]
	public static string ForceColor(this string text, string colorHex)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x1DA71A0", Offset = "0x1DA57A0", VA = "0x181DA71A0")]
	public static string TruncateRichText(this string text, int length)
	{
		return null;
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x1DA6210", Offset = "0x1DA4810", VA = "0x181DA6210")]
	public static string HexColor(this string text)
	{
		return null;
	}

	[Token(Token = "0x6000102")]
	public static T ToEnum<T>(this string value, bool ignoreCase = true)
	{
		return (T)null;
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x1DA65C0", Offset = "0x1DA4BC0", VA = "0x181DA65C0")]
	public static float ParseFloat(string str)
	{
		return default(float);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x1DA64D0", Offset = "0x1DA4AD0", VA = "0x181DA64D0")]
	public static bool IsGray(this Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x1DA6490", Offset = "0x1DA4A90", VA = "0x181DA6490")]
	public static bool IsGray(this Color255 color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	public static T GetRandomItem<T>(this List<T> list)
	{
		return (T)null;
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x1DA61C0", Offset = "0x1DA47C0", VA = "0x181DA61C0")]
	public static JSONNode GetRandomItem(this JSONNode list)
	{
		return null;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x1DA6AD0", Offset = "0x1DA50D0", VA = "0x181DA6AD0")]
	public static Color ToColor(this JSONNode array)
	{
		return default(Color);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x1DA60E0", Offset = "0x1DA46E0", VA = "0x181DA60E0")]
	public static PlayerInfo GetPlayerInfo(this Player player)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x1DA6840", Offset = "0x1DA4E40", VA = "0x181DA6840")]
	public static string ReverseString(this string s)
	{
		return null;
	}
}
