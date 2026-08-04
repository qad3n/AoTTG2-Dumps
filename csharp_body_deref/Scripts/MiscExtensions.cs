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

[Token(Token = "0x2000024")]
internal static class MiscExtensions
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string HexPattern;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string ColorTagPattern;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string ColorEndPattern;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string TagPattern;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string SizePattern;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string MaterialPattern;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string QuadPattern;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Regex HexRegex;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x40")]
	private static readonly Regex ColorTagRegex;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Regex ColorEndRegex;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Regex TagRegex;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x58")]
	private static readonly Regex IllegalStyleRegex;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x60")]
	private static readonly Regex NamedColorTagRegex;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x68")]
	public static readonly Dictionary<string, string> NamedColorHex;

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3F64B20", Offset = "0x3F64B20", VA = "0x3F64B20")]
	public static string ResolveNamedColorHex(string name)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3F64C10", Offset = "0x3F64C10", VA = "0x3F64C10")]
	public static string ReplaceNamedColorTags(string input)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3F64D70", Offset = "0x3F64D70", VA = "0x3F64D70")]
	public static bool GetActive(this GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3F64D90", Offset = "0x3F64D90", VA = "0x3F64D90")]
	public static string ToDisplayString(this Vector3 vector)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3F64F10", Offset = "0x3F64F10", VA = "0x3F64F10")]
	public static double UnboxToDouble(this object obj)
	{
		return default(double);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3F64F60", Offset = "0x3F64F60", VA = "0x3F64F60")]
	public static float UnboxToFloat(this object obj)
	{
		return default(float);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3F64FB0", Offset = "0x3F64FB0", VA = "0x3F64FB0")]
	public static int UnboxToInt(this object obj)
	{
		return default(int);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3F65000", Offset = "0x3F65000", VA = "0x3F65000")]
	public static float MaxComponent(this Vector3 v)
	{
		return default(float);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3F65150", Offset = "0x3F65150", VA = "0x3F65150")]
	public static string UpperFirstLetter(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3F65220", Offset = "0x3F65220", VA = "0x3F65220")]
	public static string StripHex(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x3F652C0", Offset = "0x3F652C0", VA = "0x3F652C0")]
	public static List<string> Tokenize(string input)
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x3F65A30", Offset = "0x3F65A30", VA = "0x3F65A30")]
	public static string StripRichText(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x3F65AD0", Offset = "0x3F65AD0", VA = "0x3F65AD0")]
	public static string StripIllegalRichText(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3F65B70", Offset = "0x3F65B70", VA = "0x3F65B70")]
	public static string ForceWhiteColorTag(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3F65C10", Offset = "0x3F65C10", VA = "0x3F65C10")]
	public static string StripColor(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3F65CE0", Offset = "0x3F65CE0", VA = "0x3F65CE0")]
	public static string ForceColor(this string text, Color color)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3F65E80", Offset = "0x3F65E80", VA = "0x3F65E80")]
	public static string ForceColor(this string text, string colorHex)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3F65FC0", Offset = "0x3F65FC0", VA = "0x3F65FC0")]
	public static string TruncateRichText(this string text, int length)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3F66650", Offset = "0x3F66650", VA = "0x3F66650")]
	public static string HexColor(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	public static T ToEnum<T>(this string value, bool ignoreCase = true)
	{
		return (T)null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3F66910", Offset = "0x3F66910", VA = "0x3F66910")]
	public static float ParseFloat(string str)
	{
		return default(float);
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3F66920", Offset = "0x3F66920", VA = "0x3F66920")]
	public static bool IsGray(this Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3F66950", Offset = "0x3F66950", VA = "0x3F66950")]
	public static bool IsGray(this Color255 color)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F4")]
	public static T GetRandomItem<T>(this List<T> list)
	{
		return (T)null;
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x3F66980", Offset = "0x3F66980", VA = "0x3F66980")]
	public static JSONNode GetRandomItem(this JSONNode list)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3F669D0", Offset = "0x3F669D0", VA = "0x3F669D0")]
	public static Color ToColor(this JSONNode array)
	{
		return default(Color);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3F66B20", Offset = "0x3F66B20", VA = "0x3F66B20")]
	public static PlayerInfo GetPlayerInfo(this Player player)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3F66C30", Offset = "0x3F66C30", VA = "0x3F66C30")]
	public static string ReverseString(this string s)
	{
		return null;
	}
}
