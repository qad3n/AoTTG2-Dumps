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
	[Address(RVA = "0x3C6F1D0", Offset = "0x3C6F1D0", VA = "0x3C6F1D0")]
	public static string ResolveNamedColorHex(string name)
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3C6F2C0", Offset = "0x3C6F2C0", VA = "0x3C6F2C0")]
	public static string ReplaceNamedColorTags(string input)
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3C6F420", Offset = "0x3C6F420", VA = "0x3C6F420")]
	public static bool GetActive(this GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3C6F440", Offset = "0x3C6F440", VA = "0x3C6F440")]
	public static string ToDisplayString(this Vector3 vector)
	{
		return null;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3C6F5C0", Offset = "0x3C6F5C0", VA = "0x3C6F5C0")]
	public static double UnboxToDouble(this object obj)
	{
		return default(double);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3C6F610", Offset = "0x3C6F610", VA = "0x3C6F610")]
	public static float UnboxToFloat(this object obj)
	{
		return default(float);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3C6F660", Offset = "0x3C6F660", VA = "0x3C6F660")]
	public static int UnboxToInt(this object obj)
	{
		return default(int);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3C6F6B0", Offset = "0x3C6F6B0", VA = "0x3C6F6B0")]
	public static float MaxComponent(this Vector3 v)
	{
		return default(float);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3C6F800", Offset = "0x3C6F800", VA = "0x3C6F800")]
	public static string UpperFirstLetter(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3C6F8D0", Offset = "0x3C6F8D0", VA = "0x3C6F8D0")]
	public static string StripHex(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x3C6F970", Offset = "0x3C6F970", VA = "0x3C6F970")]
	public static List<string> Tokenize(string input)
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x3C700E0", Offset = "0x3C700E0", VA = "0x3C700E0")]
	public static string StripRichText(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x3C70180", Offset = "0x3C70180", VA = "0x3C70180")]
	public static string StripIllegalRichText(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3C70220", Offset = "0x3C70220", VA = "0x3C70220")]
	public static string ForceWhiteColorTag(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3C702C0", Offset = "0x3C702C0", VA = "0x3C702C0")]
	public static string StripColor(this string text)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3C70390", Offset = "0x3C70390", VA = "0x3C70390")]
	public static string ForceColor(this string text, Color color)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3C70530", Offset = "0x3C70530", VA = "0x3C70530")]
	public static string ForceColor(this string text, string colorHex)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3C70670", Offset = "0x3C70670", VA = "0x3C70670")]
	public static string TruncateRichText(this string text, int length)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3C70D00", Offset = "0x3C70D00", VA = "0x3C70D00")]
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
	[Address(RVA = "0x3C70FC0", Offset = "0x3C70FC0", VA = "0x3C70FC0")]
	public static float ParseFloat(string str)
	{
		return default(float);
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3C70FD0", Offset = "0x3C70FD0", VA = "0x3C70FD0")]
	public static bool IsGray(this Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3C71000", Offset = "0x3C71000", VA = "0x3C71000")]
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
	[Address(RVA = "0x3C71030", Offset = "0x3C71030", VA = "0x3C71030")]
	public static JSONNode GetRandomItem(this JSONNode list)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3C71080", Offset = "0x3C71080", VA = "0x3C71080")]
	public static Color ToColor(this JSONNode array)
	{
		return default(Color);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3C711D0", Offset = "0x3C711D0", VA = "0x3C711D0")]
	public static PlayerInfo GetPlayerInfo(this Player player)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3C712E0", Offset = "0x3C712E0", VA = "0x3C712E0")]
	public static string ReverseString(this string s)
	{
		return null;
	}
}
